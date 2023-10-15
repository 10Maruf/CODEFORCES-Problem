#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,c=0,l,j,flag=0;
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(s[i]==s[j])
			{
				flag=1;
				break;
			}
			
		
		}
		if (flag==0)
		{
			c++;
		}
		flag =0;
	}
	if (c%2==0)
	{
		printf("CHAT WITH HER!");
	}
	else
	{
		printf("IGNORE HIM!");
	}
}
