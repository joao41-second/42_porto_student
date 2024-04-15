#include <string.h>
#include <stdio.h>
#include <unistd.h>

int ft_strcmp(char *s1,char *s2)
{
	while( *s1 || *s2 )
	{
		if (s1 != s2)
			break;
		s1++;
		s2++;
	}
	return s1 - s2;

}
/*
int main(void)
{
	int ok = ft_strcmp("vamos","vamos");
	printf("%d",ok);

}*/
