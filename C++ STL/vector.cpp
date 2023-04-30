#include<iostream>
#include<vector>
using namespace std;


int main()
{
    //intialization-1
    vector<int> vec;//creates a vector of size && capacity == 0

    //intialization-2
    vector<int> vec2(5);//intializes all elements with 0 by default
    cout<<"elements of vec2 vector: "<<endl;

    for(int i:vec2)
    {
        cout<<i<<" ";
    }cout<<endl<<endl;

    //initialization-3
    vector<int> vec3(5,1);//initializes all elements with 1
    cout<<"elements of vec3 vector: "<<endl;

    for(int i:vec3)
    {
        cout<<i<<" ";
    }cout<<endl<<endl;

    //intialization -4
    vector<int> myVec = {1, 2, 3, 4, 5};


    //size()
    //capacity()
    cout<<"size     ->"<<vec.size()<<endl;           //current size of vector
    cout<<"capacity ->"<<vec.capacity()<<endl<<endl;   // currrent capacity 

    //push_pack()
    vec.push_back(1);
    cout<<"size     ->"<<vec.size()<<endl;
    cout<<"capacity ->"<<vec.capacity()<<endl<<endl;

    vec.push_back(2);
    cout<<"size     ->"<<vec.size()<<endl;
    cout<<"capacity ->"<<vec.capacity()<<endl<<endl;

    vec.push_back(3);
    cout<<"size     ->"<<vec.size()<<endl;
    cout<<"capacity ->"<<vec.capacity()<<endl<<endl;

    vec.push_back(4);
    cout<<"size     ->"<<vec.size()<<endl;
    cout<<"capacity ->"<<vec.capacity()<<endl<<endl;

    //front()
    cout<<vec.front();

    //back()
    cout<<vec.back();

    //pop_back() // vector traversal using iterator
    cout<<"vector before pop"<<endl;
    for(int i:vec)
    {
        cout<<i<<" ";
    }cout<<endl<<endl;

    vec.pop_back();     // will return popped element but does not cout

    cout<<"vector after pop"<<endl;
    for(int i:vec)
    {
        cout<<i<<" ";
    }cout<<endl<<endl;

    cout<<"size     ->"<<vec.size()<<endl;
    cout<<"capacity ->"<<vec.capacity()<<endl<<endl;

    //clear()  will make only  size 0 but capacity remains same
    cout<<"size     of vector before clear: size    ->"<<vec.size()<<endl;
    cout<<"capacity of vector before clear: capacity->"<<vec.capacity()<<endl<<endl;

    vec.clear();

    cout<<"size     of vector after clear: size     ->"<<vec.size()<<endl;
    cout<<"capacity of vector after clear: capacity ->"<<vec.capacity()<<endl<<endl;

    //dispalying vec elements
    cout<<"Elements of vec after clear:"<<endl;
    for(int i:vec)
    {
        cout<<i<<" ";
    }cout<<endl<<endl;

    //copying one vector into new vector
    vector<int> copy(vec3);
    cout<<"elements of copy vector: "<<endl;
    for(int i:copy)
    {
        cout<<i<<" ";
    }cout<<endl<<endl;



    //vector traversal using iterator
    // Iterate over the vector using an iterator
    for (auto it=myVec.begin();it!=myVec.end();++it) //auto allows compiler to dedcue the type of iterator from conatiner type
    {                                                //begin() returns an iterator to the first element.
        cout << *it << " ";                          //end() returns an iterator to one past the last element. 
    }
    cout << endl<<endl;

    return 0;
}