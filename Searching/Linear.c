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
    
    int i = 0;
    
    while(i < size)
    {
      if(arr[i] == target)
      {
        printf("%d", i);
        break;
      }
      i++;
      if(i == size)
      {
        printf("-1"); //target not found
      }
    }
    
    
}