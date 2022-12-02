#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int run = 0;
int over = 0;
int ball = 0;
int wicket = 0;
int wide = 0;
int nball = 0;
int lb = 0;
int extras = 0;
char news[100];

int main()
{
    system("clear");
    int id,pass;
    x:
    printf("\n\nEnter Your ID: ");
    scanf("%d",&id);
    printf("Enter Your Password: ");
    scanf("%d",&pass);
    if(id!=111 || pass!=222){
        system("clear");
        printf("\n\nWrong ID or Password\n");
        goto x;
    }
    system("clear");
    printf("\n\nDaffodil Premier league\n\n\n");
    printf("Live Cricket Score ::\n\n\n");
    printf("Score - %d/%d\n\n", run, wicket);
    printf("Overs - %d.%d(50)\n\n", over, ball);
    printf("Extrs - %d [W(%d),N(%d),LB(%d)]\n\n", extras, wide, nball, lb);
    printf(">> Match Start\n\n");

    int score;

    while (1)
    {
        printf("\nEnter Score : ");
        scanf("%d", &score);
        getchar();

        switch (score)
        {
        case 0:
        {
            char dot;
            printf("'W' for a wicket\n'D' for a Dot Ball\n");
            printf("Enter Type of Dot Ball: ");
            scanf("%c", &dot);
            switch (dot)
            {
            case 'W':
            {
                wicket += 1;
                ball += 1;
                strcpy(news, "We have a wicket");
                break;
            }
            case 'D':
            {
                ball += 1;
                strcpy(news, "Another Dot ball");
                break;
            }
            }
            break;
        }
        case 1:
        {
            char single;
            printf("'S' for a Single\n'W' for a wide ball\n'N' for a No Ball\n'R' for a Run out\n'L' for leg bye\n");
            printf("Enter the type of single taken: ");
            scanf("%c", &single);
            switch (single)
            {
            case 'S':
            {
                run += 1;
                ball += 1;
                strcpy(news, "Rotating the strike");
                break;
            }
            case 'L':
            {
                run += 1;
                ball += 1;
                lb += 1;
                extras += 1;
                strcpy(news, "Rotating the strike leg bye single");
                break;
            }
            case 'W':
            {
                run += 1;
                wide += 1;
                extras += 1;
                strcpy(news, "Wide ball");
                break;
            }
            case 'N':
            {
                run += 1;
                nball += 1;
                extras += 1;
                strcpy(news, "No ball, Free hit");
                break;
            }
            case 'R':
            {
                run += 1;
                ball += 1;
                wicket += 1;
                strcpy(news, "Wicket gone");
                break;
            }
            default:
                strcpy(news, "Invalid Input");
            }
            break;
        }
        case 2:
        {
            char doubles;
            printf("'D' for a Double\n'W' for a wide ball\n'N' for a No Ball\n'R' for a Run out\n'L' for leg bye\n");
            printf("Enter the type of double taken: ");
            scanf("%c", &doubles);
            switch (doubles)
            {
            case 'D':
            {
                run += 2;
                ball += 1;
                strcpy(news, "Double Rotating the strike");
                break;
            }
            case 'W':
            {
                run += 2;
                wide += 1;
                extras += 2;
                strcpy(news, "Wide ball");
                break;
            }
            case 'N':
            {
                run += 2;
                nball += 1;
                extras += 1;
                strcpy(news, "No ball, Free hit");
                break;
            }
            case 'L':
            {
                run += 2;
                ball += 1;
                lb += 2;
                extras += 2;
                strcpy(news, "Double Rotating the strike leg bye 2");
                break;
            }
            case 'R':
            {
                run += 2;
                ball += 1;
                wicket += 1;
                strcpy(news, "Wicket gone");
                break;
            }
            default:
                strcpy(news, "Invalid Input");
            }
            break;
        }
        case 3:
        {
            char triple;
            printf("'T' for a Triple\n'W' for a wide ball\n'N' for a No Ball\n'R' for a Run out\n'L' for leg bye\n");
            printf("Enter the type of triple taken: ");
            scanf("%c", &triple);
            switch (triple)
            {
            case 'T':
            {
                run += 3;
                ball += 1;
                strcpy(news, "Rotating the strike");
                break;
            }
            case 'W':
            {
                run += 3;
                wide += 1;
                extras += 3;
                strcpy(news, "Wide ball");
                break;
            }
            case 'N':
            {
                run += 3;
                nball += 1;
                extras += 1;
                strcpy(news, "No ball, Free hit");
                break;
            }
            case 'L':
            {
                run += 3;
                ball += 1;
                lb += 3;
                extras += 3;
                strcpy(news, "Rotating the strike leg bye 3");
                break;
            }
            case 'R':
            {
                run += 3;
                ball += 1;
                wicket += 1;
                strcpy(news, "Wicket gone");
                break;
            }
            default:
                strcpy(news, "Invalid Input");
            }
            break;
        }
        case 4:
        {
            char boundary;
            printf("'B' for a Boundary\n'W' for a wide ball\n'N' for a No Ball\n'L' for leg bye\n");
            printf("Enter the type of boundary taken: ");
            scanf("%c", &boundary);
            switch (boundary)
            {
            case 'B':
            {
                run += 4;
                ball += 1;
                strcpy(news, "It's a four");
                break;
            }
            case 'W':
            {
                run += 4;
                wide += 1;
                extras += 4;
                strcpy(news, "Wide ball");
                break;
            }
            case 'N':
            {
                run += 4;
                nball += 1;
                extras += 1;
                strcpy(news, "No ball, Free hit");
                break;
            }
            case 'L':
            {
                run += 4;
                ball += 1;
                lb += 4;
                extras += 4;
                strcpy(news, "It's a leg bye four");
                break;
            }
            default:
                strcpy(news, "Invalid Input");
            }
            break;
        }
        case 5:
        {
            char fiver;
            printf("'W' for a wide ball\n'N' for a No Ball\n'L' for leg bye\n");
            printf("Enter the type of fiver taken: ");
            scanf("%c", &fiver);
            switch (fiver)
            {
            case 'W':
            {
                run += 5;
                wide += 1;
                extras += 5;
                strcpy(news, "Wide ball");
                break;
            }
            case 'N':
            {
                run += 5;
                nball += 1;
                extras += 1;
                strcpy(news, "No ball, Free hit");
                break;
            }
            case 'L':
            {
                run += 5;
                ball += 1;
                extras += 5;
                strcpy(news, "Leg-bye 5 runs");
                break;
            }
            default:
                strcpy(news, "Invalid Input");
            }
            break;
        }
        case 6:
        {
            char sixer;
            printf("'S' for a Sixer\n");
            printf("Enter the type of sixer taken: ");
            scanf("%c", &sixer);
            switch (sixer)
            {
            case 'S':
            {
                run += 6;
                ball += 1;
                strcpy(news, "It's a Six");
                break;
            }
            default:
                strcpy(news, "Invalid Input");
            }
            break;
        }
        case 7:
        {
            char seven;
            printf("'N' for a No Ball\n");
            printf("Enter the type of seven taken: ");
            scanf("%c", &seven);
            switch (seven)
            {
            case 'N':
            {
                run += 7;
                nball += 1;
                extras += 1;
                strcpy(news, "No ball, Free hit");
                break;
            }
            default:
                strcpy(news, "Invalid Input");
            }
            break;
        }
        case 400:
        {
            exit(1);
            break;
        }
        default:
        {
            strcpy(news, "This is an invalid input");
        }
        }

        if (ball == 6)
        {
            over += 1;
            ball = 0;
        }

        system("clear");
        printf("\n\nLive Cricket Score ::\n\n\n");
        printf("Score - %d/%d\n\n", run, wicket);
        printf("Overs - %d.%d(50)\n\n", over, ball);
        printf("Extrs - %d [W(%d),N(%d),LB(%d)]\n\n", extras, wide, nball, lb);
        printf(">> %s\n", news);

        if (wicket == 10)
        {
            printf("Innings Ended");
            break;
        }

        if (over == 50)
        {
            printf("Innings Ended");
            break;
        }
    }
    return 0;
}
