
void ft_swap(int *a,int *b)
{
	int ok =0;	
	ok = *a;
	*a = *b;
	*b = ok;


}
/*
int main(void)
{
	int a = 2;
	int b = 5;
	ft_swap(&a,&b);
	a += '0';
	b += '0';
	write(1,&a,1);
	write(1,&b,1);

}*/
