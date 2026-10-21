#include<stdio.h>
int main()
{
    int arr[5] = {5,10,15,20,25};
    for(int i = 0; i<4 ; i++)
    {
        arr[i]= arr[i+1];
    }
    for(i=0 ; i< 4; i++)
    {
      printf("%d", arr[i]);
    }
    return 0;
}
