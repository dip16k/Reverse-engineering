#include<stdio.h>

int add(int x, int y)
{
	return x+y;
}

int cmp(int x, int y)
{

	if (x<y)
		return y;
	else
		return x;
}

int main()
{
	int z;
	int final;

	z = add(10,20);
	
	final = cmp(z,10);

	printf("%d\n",final);

	return 0;

}
	
