#include<iostream>
using namespace std;

void bubble_sort(int n,int arr[])
{
    int temp;

        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            if(arr[i+1]>arr[i])
            {
              temp=arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=temp;  
            }
        }
}

class display
{

};
int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    bubble_sort(n,arr);

    return 0;
}