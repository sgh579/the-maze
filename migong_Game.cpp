//รินฌะกำฮฯท
#include<stdio.h>


int main()
{
	int game_Start();
	
	
	if(game_Start());
	else printf("initializing failure");
	return 0;	
 } 
int game_Start()
 {
 	printf("welcome to the maze!\n");
 	printf("press any key to start the game");
 	getchar();
 	printf("game starts!");
 	return 1;
 }
