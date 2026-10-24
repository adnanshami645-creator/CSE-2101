#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&arr)
{
    int k=arr.size();
    for(int j=0; j<k-1; j++)
    {
        bool swapped= false;
        for(int i=0; i<k-1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                swapped= true;
            }
        }
        if(!swapped)
            break;
    }
}
int main()
{
    vector<int> arr= {5, 10, 20, 25};
    bubbleSort(arr);
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}