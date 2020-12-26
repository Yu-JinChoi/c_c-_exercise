#include <stdio.h>
 
int main()
{
    int n, k, m = 0;
 
    scanf("%d %d %d", &n, &k, &m);
 
    for (int i = 1; i < 100; i++)
    {
        if (n % i == 0 && k % i == 0 && m % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
