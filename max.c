#include <stdio.h>

int main()
{
    int n,i,a[100],max;
    printf("\n enter the limit of an array:\n");
    scanf("%d",&n);
    printf("\n enter the input to the array:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("\nmax=%d\n",max);
    return 0;
}
