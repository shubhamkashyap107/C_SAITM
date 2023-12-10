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
    
    for(int i = 0; i < size - 1; i++)
    {
      for(int j = 0; j < size - i - 1; j++)
      {
        if(arr[j] > arr[j + 1])
        {
          int temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
    }
    
    
    
    
    
    
    
    
    for(int i = 0; i < size; i++)
    {
      printf("%d\t", arr[i]);
    }
    
}