#include<iostream>
#include<list>
using namespace std;
/* lists in cpp are implemented using doubly linked lists*/
int main()
{
    //declaration -1
    list<int> l;

    
    //intialization -1
    l.push_back(1);       //O(1)
    l.push_back(2);
    l.push_front(3);      //O(1)
    l.push_front(4);
    // 4 3 1 2

    //declaration -2 & initialization -2
    list<int> l1={1,2,3,4,5,6};

    //declaration & intilization -3 & 4
    list<int> l3(5,1);   // 1 1 1 1 1
    list<int> l4(5);     // 0 0 0 0 0




    // iterate over list using iterator
    cout<<"list l before erasing: "<<endl;
    list<int> :: iterator it;
    for(it=l.begin();it!=l.end();++it)
    {                            //list before erasing: 
        cout<<*it<<" ";         //4 3 1 2
    }cout<<endl<<endl;
   

    l.erase(l.begin(),l.end()); //O(n)  erase(start,end) || erase(position)

    cout<<"list l after erasing : "<<endl;
    for(it=l.begin();it!=l.end();++it)
    {
        cout<<*it<<" ";     //it is a pointer 
    }cout<<endl<<endl;
    //list after erasing :


    l1.pop_back();      //O(1)
    l1.pop_front();     //O(1)

    cout<<"list l1 after popping  : "<<endl;
    for(it=l1.begin();it!=l1.end();++it)
    {
        cout<<*it<<" ";       //2 3 4 5  
    }cout<<endl<<endl;

    //size()
    cout<<l1.size()<<endl<<endl;    //4
    

    //copying list
    list<int> l2(l1);
    cout<<"l2 list :"<<endl;
    for(it=l2.begin();it!=l2.end();++it)
    {
        cout<<*it<<" ";     //it is a pointer 
    }cout<<endl<<endl;

    //reverse()
    cout<<"revrse of l2"<<endl;
    l2.reverse();              //O(n)
    for(it=l2.begin();it!=l2.end();++it)
    {
        cout<<*it<<" ";     // 5 4 3 2
    }cout<<endl<<endl;

    //sort()
    l2.sort();
    cout<<"sorted list l2"<<endl;
    for(it=l2.begin();it!=l2.end();++it)
    {
        cout<<*it<<" ";     // 2 3 4 5
    }cout<<endl<<endl;

    cout<<"front-> "<<l2.front()<<endl;
    cout<<"back-> "<<l2.back()<<endl;

    return 0;
}
