#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    puts("202478030533邹为一畅");
    do{ 
        puts("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.");
        srand(time(0));
        int num=rand()%1000+1;
        int guess;
        scanf("%d",&guess);
        while (guess != num){
            if (guess>num)
                puts("Too high. Try again.");
            else
                puts("Too low. Try again.");
            scanf("%d",&guess);
        }
        if (guess == num)
        puts("Excellent! You guessed the number!");
        puts("Would you like to play again (y or n)?");
        getchar();
    }while (getchar() =='y');
}