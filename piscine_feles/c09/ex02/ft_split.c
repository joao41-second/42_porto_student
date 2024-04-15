#include <unistd.h>
void print(char *str)
{
	while(str)
	{
		write(1,str,1);
			str++;
	}

}
void printlist(char **list)
{
	print(list[0]);

//	while(**list)
//	{
//		print(*list);
//		*list++;

//	}
}
char **ft_split(char *str, char *charset)
{

}

int main(int argc,char *argv)
{
	char ko[100][100]  = {"ok","lk"};
	char **ok;
	**ok = ko;
//	printlist( ok);

};
