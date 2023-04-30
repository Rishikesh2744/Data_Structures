#include<iostream>
#include<deque>
using namespace std;

int main()
{
    //initialization 
    deque<int> dq;

    //push front&& back
    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(4);
    dq.push_front(3);

    
    //deque traversal
    cout<<"elements of dq"<<endl;
    for(auto i:dq)
    {
        cout<<i<<" ";
    }cout<<endl<<endl;

    
    //front() & back()
    cout<<"element at front-> "<<dq.front()<<endl;
    cout<<"element at back -> "<<dq.back()<<endl<<endl;

    //at()
    cout<<"element at 1-> "<<dq.at(1)<<endl;
    cout<<"element at 3-> "<<dq.at(3)<<endl<<endl;

    //pop front & back
    dq.pop_front();     //pops & returns front element
    dq.pop_back();      //pops & returns  back element


    //deque traversal
    cout<<"elements of dq after pop"<<endl;
    for(auto i:dq)
    {
        cout<<i<<" ";
    }cout<<endl<<endl;

    dq.erase(dq.begin(),dq.end());

    //iterating using an iterator*********
    deque<int> :: iterator it;
    for(it=dq.begin();it!=dq.end();++it)
    {
        cout<<*it<<" ";
    }cout<<endl<<endl;

    //empty()
    cout<<"empty or not: "<<dq.empty()<<endl<<endl;;    //o if no,1 if yes

    // size and capacity

    cout<<"size->"<<dq.size()<<endl;
    return 0;
}