// this is a random number generate game using c language

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate and print a random number between 0 and RAND_MAX
    int randomNum = rand();
    int guess ,nguess=1;
    randomNum=rand()%100+1;
   //
    //printf("Random Number: %d\n", randomNum);
    do
    {
       printf("guess number betwwen 1 to 100");
       scanf("%d",&guess);
    if(guess>randomNum){
            printf("Lower number please!\n");
        }
        else if(guess<randomNum){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n", nguess);
        }
        nguess++;
    }while(guess!=randomNum);
    
    return 0;
}
