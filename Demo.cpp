#include<iostream>
using namespace std;

int main()
{
    int arr[5] = { 10,20,30,40,50};
    int index = 0;

    for(int i=index ; i<4; i++)
    {
        arr[i] = arr[i+1];
    }
    for(int i=0; i<4; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}