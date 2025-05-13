#include<stdio.h>
#include<stdlib.h>
int main()
{
    int user,comp;//user=usermove & comp=computer move
    printf("===ROCK PAPER SCISSOR GAME===\n");
    printf("===Computer's move is random===\n\n");
    while(1){
        printf("\n\nEnter your move \n '0' for Rock \n '1' for Paper \n '2' for Scissor \n '4' for exit \n");
        scanf("%d",&user);
        comp = rand() % 3;

        if (user==4){
            exit(1);
        }
        else if (user==0 && comp==1){
            printf("User:Rock\t\tComputer:Paper");
            printf("\n---Computer WON!!!---");
        }
        else if (user==0 && comp==2){
            printf("User:Rock\t\tComputer:Scissor");
            printf("\n---You WON !!!---");
        }
        else if (user==0 && comp==0){
            printf("User:Rock\t\tComputer:Rock");
            printf("\n--It's a draw---");
        }
        else if (user==1 && comp==0){
            printf("User:Paper\t\tComputer:Rock");
            printf("\n---You WON!!!---");
        }
        else if (user==1 && comp==2){
            printf("User:Paper\t\tComputer:Scissor");
            printf("\n---Computer WON!!!---");
        }   
        else if (user==1 && comp==1){
            printf("User:Paper\t\tComputer:Paper");
            printf("\n--It's a draw---");
        }
        else if (user==2 && comp==0){
            printf("User:Scissor\t\tComputer:Rock");
            printf("\n---Computer WON!!!---");
        }
        else if (user==2 && comp==1){
            printf("User:Scissor\t\tComputer:Paper");
            printf("\n---You WON!!!---");
        }
        else if (user==2 && comp==2){
            printf("User:Scissor\t\tComputer:Scissor");
            printf("\n--It's a draw---");
        }
        else{
            printf("---Invalid input !! Please enter valid input.....---");
        } 
       
        
    }
    return 0;
}