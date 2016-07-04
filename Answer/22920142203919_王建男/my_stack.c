#include <stdio.h>
#include<string.h>
void main()
{
	char behavior[10];
	int stack[100];
	int i,n,cnt;
	scanf("%d",&n);
	for(i=n-1;i>=0;i--)
	{
		scanf("%d",&stack[i]);
	}
	scanf("%d",&cnt);
	while(cnt--)
	{
		memset(behavior,0,5);
		scanf("%s",behavior);
		if(!strcmp(behavior,"PUSH"))
		{
			for(i=n++;i>0;i--)
			{
				stack[i]=stack[i-1];
			}
			scanf("%d",&stack[0]);
			continue;
		}
		if(!strcmp(behavior,"POP"))
		{
			for(i=0;i<n;i++)
			{
				stack[i]=stack[i+1];
			}
			n--;
		}
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",stack[i]);
	}
	printf("\n");
}
