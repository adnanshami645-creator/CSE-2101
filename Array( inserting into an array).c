#include<stdio.h>
int main(
    {
        int arr[5]= {5,10,20,25};
        int index =2;
        int element= 15;

        for(int i=4; i>=index; i--)
        {
            arr[i+1]= arr[i];
        }
        arr[index] = element;

        for(i=0; i<=4; i++)
        {
            printf("%d\n", arr[i]);
        }
        return 0;
    }