#include <stdio.h>
void max_num_zeros(int n)
{
    int count = 0;
	int result = 0;
int i;
for(i=1;i&n==0;i<<1);
	for( ; i<= n; i <<= 1 )
	{
		if( i & n )
		{

			count++;
        }
		else
        {
            if (count>result)
            {
                result=count;
            }
            count=0;
        }
	}
	if(count>result)
    {
        result=count;
    }

	printf("number of ones between two zeros is %d\n", result);

	return 0;
}
int main( void )
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	max_num_zeros(n);

}
