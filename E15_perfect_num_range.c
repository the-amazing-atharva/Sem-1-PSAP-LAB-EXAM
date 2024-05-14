// C program to print all Perfect numbers within a given range 
 
#include <stdio.h>

int main()
{
    int x, y, sum;    
    printf("Enter the starting element of the range : ");
    scanf("%d", &x);    
    printf("Enter the ending element of the range : ");
    scanf("%d", &y);    

    printf("All Perfect numbers between %d to %d:\n", x, y);
    
    for(int i=x; i<=y; i++)
    {
        sum = 0;    

        for(int j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
