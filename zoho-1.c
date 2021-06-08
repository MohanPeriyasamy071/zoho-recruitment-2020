#include<stdio.h>
int main()
{
	int row,col,n=0,space,y;
	char str[100];
	scanf("%s",str);
	for(n=0;str[n];n++);
	y=(n/2)-1;
	for(row=1;row<=n;row++)
	{
		for(space=1;space<=n-row;space++)
		{
			printf(" ");
		}
		for(col=1;col<=row;col++)
		{
			if(str[y+1]!='\0')
			{
				y++;
			}
			else
			{
			   y=0;	
			}
			printf("%c",str[y]);
		}
		printf("\n");
		y=(n/2)-1;
	}
	return 0;
}
