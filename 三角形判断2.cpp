#include <cstdio>
int main() 
{
	
	unsigned  integer_num1, integer_num2, integer_num3;
	scanf("%u %u %u", &integer_num1, &integer_num2, &integer_num3);
		
	if (integer_num1 + integer_num2 > integer_num3 && integer_num1 + integer_num3 > integer_num2 && integer_num2 + integer_num3 > integer_num1)
	{	
		printf("yes");
	}
	else
	{
		printf("no");
	}
		
    return 0;
}
