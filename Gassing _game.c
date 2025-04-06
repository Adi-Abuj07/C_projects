#include<stdio.h>
#include<Stdlib.h>
#include<time.h>
int main(){
    int random,guess;
    int no_of_guesses=0;
    srand(time(NULL));


    printf("Welcome to the world of Gussing Numbers >>>...\n");
    random=rand()%100+1;

    do{
        printf("\n Please enter your Guess between(1 to 100):");
        scanf("%d",&guess);
        no_of_guesses++;

        if(guess<random){
            printf("💡 Hint: Try a larger number!\n");
        }
        else if(guess>random){
            printf("💡 Hint: Try a Smaller number!\n");
        }
        else{
            printf("🎉 Congratulations! You guessed the number! 🎯\n in %d attempts:",no_of_guesses);
        }

    }while (guess!=random);
    printf("\n Bye Bye,Thanks for playing:>>>....");
    printf("\n Developed by Aditya>>>.... ");
    
}