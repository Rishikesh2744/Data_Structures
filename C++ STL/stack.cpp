#include<iostream>
#include<stack>
using namespace std;

int main()
{   
    // D -1
    stack<int> st;
    
    //I-1 
    //push()
    st.push(1);         //O(1)
    st.push(2);
    st.push(3);
    st.push(4);         // 4 3 2 1


    //size()
    cout<<"size->"<<st.size()<<endl<<endl;    //4

    //top()
    cout<<"top->"<<st.top()<<endl<<endl;     //4   //O(1)

    //pop()
    st.pop();         //popped = 4
                      // 3 2 1 

    //empty()
    cout<<"empty or not: "<<st.empty()<<endl<<endl;

    return 0;
}