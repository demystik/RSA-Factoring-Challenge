#include <stdio.h>


/**
 * factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 * Author: Thaoban Abdrasheed
 * Return: int
 */
int main(void)
{

	long long unsigned int num;
	long long unsigned int i;

	num = 239821585064027;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%lld=%lld*%lld\n",num,num/i,i);
			break;
		}
	}

return (0);
}
