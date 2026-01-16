#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	//get the player's name & print 'stuff'
	char user_name[20];
	printf ("Please enter your name: ");
	scanf ("%s", user_name);
	printf ("Hello %s!", user_name);

	//generate random number
	srand(time(NULL));
	int rand_num = (rand() % 6) + 1;





	return(0);
} //end main


