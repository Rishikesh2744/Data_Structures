#include<iostream>
#include<set>

// implemented with BST
// once added cannot be modified only add or remove
//stores only unique elements
//takeout in sorted order
//unordered sets are fast to extract elements from than sets but they are not extracted imn sorted order
using namespace std;

int main()
{
    set<int> s;
   
    //insert
    s.insert(2);        //O(log n)
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(4);
    s.insert(0);

    cout<<"size->"<<s.size()<<endl<<endl;

    cout<<"ELEMENTS OF SET:"<<endl;
    for(auto i:s)
    {
        cout<<i<<" ";
    }cout<<endl<<endl;


    //erase()
    s.erase(s.begin(),s.end());

    cout<<"ELEMENTS AFTER ERASE:"<<endl;
    for(auto i:s)
    {
        cout<<i<<" ";
    }cout<<endl<<endl;

    cout<<"count->"<<s.count(5)<<endl<<endl;

    return 0;
}