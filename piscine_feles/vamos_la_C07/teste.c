#include <unistd.h>
#include <stdlib.h>

int len(char *ok)
{
	int i = 0;
	while(ok[i])
	{
		i++;
	}
	return i;
}

char *ft_strncop(char * ok)
{
	char *vamos = malloc(sizeof(char) * len(ok));
	if (!vamos)
		return NULL;
	int i = 0;
	while(ok[i])
	{
		vamos[i] = ok[i];
		i++;
	}
return vamos ;	
}

void print(char *ok)
{
	int i = 0;
	while(ok[i])
	{
		write(1,&ok[i],1);
		i++;
	}
}

int main (int argc,char **argv)
{
	print (ft_strncop(argv[1]));

}
