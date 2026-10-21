#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40};
    int element =5;

    for(int i=4; i>=o; i--)
    {
        arr[i+1]= arr[i];
    }
    arr[0]= element;
    for(i=0; i<=4; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;

}