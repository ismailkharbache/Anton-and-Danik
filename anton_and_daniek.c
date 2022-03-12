#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
 
int main()
{
	int numrow;
	char da[100001];
	scanf("%d",&numrow);
	scanf("%s",da);
	int i = 0;
	int d = 0;
	int a = 0;
	while(da[i])
	{
		if(da[i] == 'A')
			a++;
		else
			d++;
		i++;
	}
	if(a > d)
		printf("Anton");
	else if(a< d)
		printf("Danik");
	else
		printf("Friendship");
}
