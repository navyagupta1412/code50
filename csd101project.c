#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game();

int main(int argc, char const *argv[])
{
	srand(time(NULL));
	int a=1;
	while (a!=0)
	{
		game();
		printf("Do you want to continue? (1 = yes, 0 = no): ");
		scanf("%d",&a);
	}
	printf("Thanks for playing.")
	return 0;
}




void game()
{
	int player, com;
	char * choice[]= {"rock", "paper", "scissors"};
	com=rand()%3;
	printf("Enter your choice (1=rock, 2=paper, 3=scissors)");
	scanf("%d",&player);

	if (player<1 || player>3)
	{
		printf("Invalid input!\n");
		return;
	}

	player -=1;
	printf("You chose %s \n", choice[player]);
	printf("Computer chose: %s\n", choice[com]);

	switch(player)
	{
	case 0:
		switch(com)
		{
		case 0: printf("Result : It is Draw :/ \n"); break;
		case 1: printf("Result : You Lost :( \n"); break;
		case 2: printf("Result : You Win :) \n"); break;
		}
		break;
	case 1:
		switch(com)
		{
		case 1: printf("Result : It is Draw :/\n"); break;
		case 2: printf("Result : You Lost :( \n"); break;
		case 0: printf("Result : You Win :) \n"); break;
		}
		break;
	case 2:
		switch(com)
		{
		case 2: printf("Result : It is Draw :/ \n"); break;
		case 0: printf("Result : You Lost :( \n"); break;
		case 1: printf("Result : You Win :) \n"); break;
		}
		break;
	default:
		printf("error in logic.\n");
		break;

	}


}