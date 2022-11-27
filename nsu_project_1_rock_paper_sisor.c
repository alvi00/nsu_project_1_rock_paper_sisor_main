#include<stdio.h>
#include<stdlib.h>                      //for random numbers
#include<time.h>                        //for time
#include<stdbool.h>                     //to get bolian variable
#include<windows.h>                      //to use cmd commands

#define ROCK 1
#define PAPER 2
#define SCISSORS 3
void game(int t);                            //full function for the game
int main()
{
    printf("HOW MANY TIME YOU WANT TO PLAY THE GAME\n");
    int t;
    scanf("%d",&t);
    while(t--)
    {
        game(t);
    }

    return 0;
}
void game(int t)
{

    srand(time(NULL));                     //seeding to genarate random numbers with time
    int n;
    int player_throw =0;                   //to store the player given numbers
    int ai_throw=0;                        //to store the ai given numbers

    bool draw=false;                       //it will check the game is draw or not

    do
    {
        printf("Select your throw\n");
        printf("1) ROCK\n");
        printf("2) PAPER\n");
        printf("3) SCISSORS\n");
        printf("SELECTION: ");
        scanf("%d",&player_throw);            //to store player numbers

        ai_throw = (rand() % 3) + 1;           //random number will give me 0 to infinity numbers so to get 1 2 3, It will mod that intezer and mod with 3 and it will give me 0,1,2 and to get 1,2,4 there is a plus 1

        if(ai_throw==ROCK)                     // TO LET THE PLAYER KNOW WHAT AI GIVEN THEM
        {
            printf("\n AI GIVES ROCK.\n");
        }
        else if(ai_throw==PAPER)
        {
            printf("\n AI GIVES PAPER.\n");
        }
        else if(ai_throw== SCISSORS)
        {
            printf("\n AI GIVES SCISSORS.\n");
        }

        draw =false;
        if (player_throw == ROCK && ai_throw == SCISSORS)
        {
             printf("\nROCK beats SCISSORS. YOU WIN.\n\n");
        }

        else if (player_throw == ROCK && ai_throw == PAPER)
        {
              printf("\nPAPER beats ROCK. YOU LOSE.\n\n");
        }
       else if (player_throw == SCISSORS && ai_throw == PAPER)
        {
              printf("\nSCISSORS beats PAPER. YOU WIN.\n\n");
        }
        else if (player_throw == SCISSORS && ai_throw == ROCK)
        {
              printf("\nROCK beats SCISSORS. YOU LOSE.\n\n");
        }
         else if (player_throw == PAPER && ai_throw == ROCK)
         {
              printf("\nPAPER beats ROCK. YOU WIN.\n\n");
         }
         else if (player_throw == PAPER && ai_throw == SCISSORS)
         {
         printf("\nSCISSORS beats PAPER. YOU LOSE.\n\n");
         }
    else
    {
      printf("\nDRAW! Play again.\n\n");             // if both player and AI throw the same, it's a draw
      draw = true;
    }

    } while (draw);                                  // the game will run as long as it is draw


}
