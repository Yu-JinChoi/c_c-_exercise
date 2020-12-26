#include <stdio.h>
 
int main()
{
    int n, k, j = 0;
 
    scanf("%d %d", &n, &k);
 
    for (int i = 100; i >= 1; i--)
    {
        if (n % i == 0 && k % i == 0)
        {
            printf("%d ", i);
            j++;
        }
    }
    printf("%d", j);
 
    printf("\n");
}
