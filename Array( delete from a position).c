#include<stdio.h>
int main()
{
    int arr[5] = {100,200,300,400,500};
    int index=2;

    for(int i=index; i<4; i++);
    {
        arr[i] = arr[i+1];
    }
    
    for(int i=0; i<4; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}