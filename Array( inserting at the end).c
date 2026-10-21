#include<stdio.h>
int main()
{
    int arr[5]= {10,20,30,40};
    inr element = 50;
    arr[4]= element;

    for(int i=0; i<5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;

}