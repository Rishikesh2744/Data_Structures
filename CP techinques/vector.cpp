#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"enter size of vector:";
    cin>>n;

    vector<int> v;

    int ele;
    //I-1
    vector<int>::iterator it;
    
    for(auto it=0;it<n;++it)
    {
        cout<<"enter element "<<it<<":";
        cin>>ele;
        v.push_back(ele);
        cout<<endl;
    }cout<<endl<<endl;

    /*Traveersal-2
    for(it=v.begin();it!=v.end();++it)
    {
        cout<<*it<<" ";
    }cout<<endl<<endl;*/
    

    //sort(v.begin(),v.end(),greater<int>());

    //Traversal-3
    for(auto i:v)
    {
        cout<<i<<" ";
    }cout<<endl<<endl;

    
    cout<<binary_search(v.begin(),v.end(),3);

    return 0;
}