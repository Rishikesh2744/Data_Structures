#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //declaration -1 
    queue<int> q;
    
    q.push(1);
    q.push(2);
    q.push(3);

    cout<<"front->"<<q.front()<<endl<<endl;

    q.pop();

    cout<<"front->"<<q.front()<<endl<<endl;

    return 0;
}

