#include<stdio.h>
int checkstatus(char a[])
{
	if((a[0]==a[1]&&a[0]==a[2])||(a[0]==a[3]&&a[0]==a[6])||(a[1]==a[4]&&a[1]==a[7])||(a[2]==a[5]&&a[5]==a[8])||(a[3]==a[4]&&a[4]==a[5])||(a[6]==a[7]&&a[8]==a[6])){
		printf("\nWinning\n");
		return 0;}
	else
		return 1;
}
void printboard(char a[])
{
	system("cls");
	printf("|         |          |         |\n");
	printf("|    %c    |      %c   |    %c    |\n",a[0],a[1],a[2]);
	printf("|         |          |         |\n");
	printf("--------------------------------\n");
	printf("|         |          |         |\n");
	printf("|    %c    |     %c    |     %c   |\n",a[3],a[4],a[5]);
	printf("|         |          |         |\n");
	printf("--------------------------------\n");
	printf("|         |          |         |\n");
	printf("|    %c    |    %c     |    %c    |\n",a[6],a[7],a[8]);
	printf("|         |          |         |\n");	
}
void game(char a[])
{
	int i=1,n,x=0,c=0;
	while(i)
	{
		printf("Enter position");
		scanf("%d",&n);
		if(x==0)
		a[n-1]='0';
		else
		a[n-1]='X';
		x=(x==0)?1:0;
		printboard(a);
		i=checkstatus(a);
		c++;
		if(c==9)
		{
			printf("Draw game");
			i=0;
		}
	}
}
int main()
{
	char a[10]={'1','2','3','4','5','6','7','8','9'};
	printboard(a);
	game(a);
}
