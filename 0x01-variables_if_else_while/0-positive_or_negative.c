#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n>0)
{
	printf("greater than %d", n);
}
else if (n==0)
{
	printf("is zero %d", n);
}
else
{
	printf("is negative %d", n);
}
return (0);
}
