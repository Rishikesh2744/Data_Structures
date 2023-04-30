#include<iostream>
#include<queue>

using namespace std;

int main()
{
    //max heap
    priority_queue<int> maxh;     //front element is always max

    //min heap
    priority_queue<int,vector<int>,greater<int>> minh;
    
    //max heap
    //push
    maxh.push(1);
    maxh.push(2);
    maxh.push(3);
    maxh.push(0);

    //ize & top
    cout<<"maxh size -> "<<maxh.size()<<endl;       //4
    cout<<"maxh top  -> "<<maxh.top()<<endl<<endl;  //3

    //iterate over maxh
    int n=maxh.size();
    cout<<"max heap: "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<maxh.top()<<" ";
        maxh.pop();
    }cout<<endl<<endl;


    //min heap
    //push
    minh.push(1);
    minh.push(2);
    minh.push(3);
    minh.push(0);

    //size & top
    cout<<"minh size -> "<<minh.size()<<endl;       //4
    cout<<"minh top  -> "<<minh.top()<<endl<<endl;  //3

    //iterate over minh
    int m=minh.size();
    cout<<"min heap: "<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<minh.top()<<" ";
        minh.pop();
    }cout<<endl<<endl;

    return 0;
}