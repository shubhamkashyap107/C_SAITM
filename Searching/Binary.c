#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    
    int arr[size];
    
    for(int i = 0; i < size; i++)
    {
      scanf("%d", &arr[i]);
    }
    
    int target;
    scanf("%d", &target);
    
    int start = 0;
    int end = size - 1;
    
    while(start <= end)
    {
      int mid = (start + end) / 2;
      
      if(arr[mid] == target)
      {
        printf("Target exists at index : %d", mid);
        break;
      }
      else if(target < arr[mid])
      {
        end = mid - 1;
      }
      else
      {
        start = mid + 1;
      }
      
      if(start > end)
      {
        printf("-1"); // not found
      }
    }
    
    
}