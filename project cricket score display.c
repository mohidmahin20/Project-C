#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void createHTML();

//Global Vars

int run = 0;
int over = 0;
int ball = 0;
int wicket = 0;

char content[255] = "";

char scoreStr[4];
char wicketStr[2];
char overStr[100];
char ballStr[1];

void createHTML(){
	FILE *pFile = fopen("score.html", "w");
	fprintf(pFile, "<html><body><h3>");
	fprintf(pFile, content);
	fprintf(pFile, "</h3>");
	fprintf(pFile, "</body></html>");
	fclose(pFile);
}

int main(){
	int score;

	while(1){
		printf("\nEnter Score : ");
		scanf("%d", &score);
		getchar();

		switch(score){
			case 0 : {
				char dot;
				printf("Enter Type of Dot Ball\n");
				printf("'W' for a wicket\n'D' for a Dot Ball\n");
				scanf("%c", &dot);
				switch(dot){
					case 'W':{
						wicket += 1;
						ball += 1;
						printf("We have a wicket\n");
						break;
					}
					case 'D': {
						ball += 1;
						printf("Another Dot ball\n");
						break;
					}
				}
				break;
			}

			case 1: {
				char single;
				printf("Enter the type of single taken\n");
				printf("'S' for a Single\n'W' for a wide ball\n'N' for a No Ball\n'R' for a Run out\n");
				scanf("%c", &single);
				switch(single){
					case 'S': {
						run += 1;
						ball += 1;
						printf("Rotating the strike\n");
						break;
					}
					case 'W': {
						run += 1;
						printf("Wide ball\n");
						break;
					}
					case 'N': {
						run += 1;
						ball -= 1;
						printf("No ball, Free hit\n");
						break;
					}
					case 'R': {
						run += 1;
						ball += 1;
						wicket -= 1;
						printf("Wicket gone\n");
						break;
					}

					default:
						printf("Invalid Input\n");
				}
				break;
			}
			case 2:{
				char doubles;
				printf("Enter the type of double taken\n");
				printf("'D' for a Double\n'W' for a wide ball\n'N' for a No Ball\n'R' for a Run out\n");
				scanf("%c", &doubles);
				switch(doubles){
					case 'D': {
						run += 2;
						ball += 1;
						printf("Rotating the strike\n");
						break;
					}
					case 'W': {
						run += 2;

						printf("Wide ball\n");
						break;
					}
					case 'N': {
						run += 2;
						ball -= 1;
						printf("No ball, Free hit\n");
						break;
					}
					case 'R': {
						run += 2;
						ball += 1;
						wicket += 1;
						printf("Wicket gone\n");
						break;
					}

					default:
						printf("Invalid Input\n");
				}

				break;
			}
			case 3:{
				char triple;
				printf("Enter the type of triple taken\n");
				printf("'T' for a Triple\n'W' for a wide ball\n'N' for a No Ball\n'R' for a Run out\n");
				scanf("%c", &triple);
				switch(triple){
					case 'T': {
						run += 3;
						ball += 1;
						printf("Rotating the strike\n");
						break;
					}
					case 'W': {
						run += 3;
						printf("Wide ball\n");
						break;
					}
					case 'N': {
						run += 3;
						ball -= 1;
						printf("No ball, Free hit\n");
						break;
					}
					case 'R': {
						run += 3;
						ball += 1;
						wicket += 1;
						printf("Wicket gone\n");
						break;
					}

					default:
						printf("Invalid Input\n");
				}

				break;
			}
			case 4:{
				char boundary;
				printf("Enter the type of boundary taken\n");
				printf("'B' for a Boundary\n'W' for a wide ball\n'N' for a No Ball\n'R' for a Run out\n");
				scanf("%c", &boundary);
				switch(boundary){
					case 'B': {
						run += 4;
						ball += 1;
						printf("It's a four\n");
						break;
					}
					case 'W': {
						run += 4;
						printf("Wide ball\n");
						break;
					}
					case 'N': {
						run += 4;
						ball -= 1;
						printf("No ball, Free hit\n");
						break;
					}
					case 'R': {
						run += 4;
						ball += 1;
						wicket += 1;
						printf("Wicket gone\n");
						break;
					}

					default:
						printf("Invalid Input\n");
				}

				break;
			}
			case 5:{
				char fiver;
				printf("Enter the type of fiver taken\n");
				printf("'W' for a wide ball\n'N' for a No Ball\n");
				scanf("%c", &fiver);
				switch(fiver){
					case 'W': {
						run += 5;
						printf("Wide ball\n");
						break;
					}
					case 'N': {
						run += 5;
						ball -= 1;
						printf("No ball, Free hit\n");
						break;
					}

					default:
						printf("Invalid Input\n");
				}

				break;
			}
			case 6:{
				char sixer;
				printf("Enter the type of sixer taken\n");
				printf("'S' for a Sixer\n");
				scanf("%c", &sixer);
				switch(sixer){
					case 'S': {
						run += 6;
						ball += 1;
						printf("It's a Six\n");
						break;
					}
					default:
						printf("Invalid Input\n");
				}
				break;
			}

			case 7:{
				char seven;
				printf("Enter the type of seven taken\n");
				printf("'W' for a Wide\n'N' for a No Ball\n");
				scanf("%c", &seven);
				switch(seven){
					case 'W': {
						run += 7;
						printf("Wide ball\n");
						break;
					}
					case 'N': {
						run += 7;
						ball -= 1;
						printf("No ball, Free hit\n");
						break;
					}

					default:
						printf("Invalid Input\n");
				}

				break;
			}

			case 400:{
				exit(1);
				break;
			}

			default:{
				printf("This is an invalid input\n");
			}
		}

		itoa(run, scoreStr, 10);
		itoa(wicket, wicketStr, 10);
		itoa(over, overStr, 10);
		itoa(ball, ballStr, 10);

		strcat(content, "Runs - ");
		strcat(content, scoreStr);
		strcat(content, "\n");
		strcat(content, "Wickets - ");
		strcat(content, wicketStr);
		strcat(content, "\n");
		strcat(content, "Overs - ");
		strcat(content, overStr);
		strcat(content, ".");
		strcat(content, ballStr);
		strcat(content, "\n");

		createHTML();

		if(ball == 6){
			over += 1;
			ball = 0;
		}

		if(wicket == 10){
			printf("Innings Ended");
			break;
		}

		if(over == 50){
			printf("Innings Ended");
			break;
		}

		strcpy(content, "");
	}
}
