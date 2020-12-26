#include <stdio.h>
 
int main()
{
    int n, k, j = 0;
 
    scanf("%d %d", &n, &k);
 
    for (int i = n; i > 0; i--)
    {
        if (n % i == 0 && k % i == 0)
        {
            printf("%d ", i);
            j++;
        }
 
        if (j >= 3)break;
    }
    printf("\n");
}
