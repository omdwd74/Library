#include<stdio.h>
int main()
{
    int n,i,a[n];
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
}
