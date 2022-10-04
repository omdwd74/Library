#include <stdio.h>
int binarySearch(int a[], int start, int en, int val)
{
    int mid;
    if(en >= start)
    {        mid = (start + en)/2;
/* if the item to be searched is present at middle */
        if(a[mid] == val)
        {
            return mid+1;
        }
            /* if the item to be searched is smaller than middle, then it can only be in left subarray */
        else if(a[mid] < val)
        {
            return binarySearch(a, mid+1, en, val);
        }
            /* if the item to be searched is greater than middle, then it can only be in right subarray */
        else
        {
            return binarySearch(a, start, mid-1, val);
        }
    }
    return -1;
}
int main() {
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  int val;
  scanf("%d",&val);

  int start=0;
  int en=n-1;

  int res = binarySearch(a, start, en, val);
  printf("The elements of the array are - ");
  for (int i = 0; i < n; i++)
  printf("%d ", a[i]);
  printf("\nElement to be searched is - %d", val);
  if (res == -1)
  printf("\nElement is not present in the array");
  else
  printf("\nElement is present at %d position of array", res);
  return 0;
}
