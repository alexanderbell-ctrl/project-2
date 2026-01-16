#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main(){
	//get the player's name & print 'stuff'
	char user_name[20];
	printf ("Please enter your name: ");
	scanf ("%s", user_name);
	printf ("Hello %s!\n\n", user_name);

	//generate random number
	srand(time(NULL));
	int rand_num = (rand() % 100) + 1;

	//game loop
	bool keepGoing = true;
	int turn_num = 1;

	printf("%d\n\n",rand_num);

	while (keepGoing){
		//int turn_num = 1;
		int user_guess;	

		printf("\nAttempt #%d", turn_num);
		printf("\nPlease enter your guess: ");
		scanf("%d",&user_guess);	

		if (user_guess > rand_num){
			printf("Too High");
			turn_num += 1;
		}
		else if (user_guess < rand_num){
			printf("Too Low");
			turn_num += 1;
		}
		else {
			printf("You got it!");
			keepGoing = false;
		}
	} //end while loop
	
	printf("\n\nNumber of turns: %d\n",turn_num);
	if (turn_num > 7){
		printf("You might want to get some more practice...");
	}
	else if (turn_num < 7){
		printf("Great job! You must be a pro!");
	}
	else {
		printf("You did an average job.");
	}

	return(0);
} //end main


