#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v;

    int ele;

    vector<int>::iterator it;
    for(auto it=0;it<n;++it)
    {
        cin>>ele;
        v.push_back(ele);
    }cout<<endl<<endl;


    for(it=v.begin();it!=v.end();++it)
    {
        cout<<*it<<" ";
    }cout<<endl<<endl;

    for(auto i:v)
    {
        cout<<i<<" ";
    }

    return 0;
}