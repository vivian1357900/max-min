#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int i, n;
    float a[21];
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%f", &a[i]);
    qsort(a, n, sizeof(int), cmpfunc);
    printf ("%.2f\n", a[n-1]);
    printf ("%.2f\n", a[0]);
    return 0;
}
