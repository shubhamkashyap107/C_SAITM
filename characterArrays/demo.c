#include<stdio.h>

int main(){
    int size;
    scanf("%d", &size);
    char arr[size];

    for(int i = 0; i < size; i++)
    {
        scanf("%c", &arr[i]);
    }

    for(int i = 0; i < size; i)
    {
        printf("%c", arr[i]);
    }
}