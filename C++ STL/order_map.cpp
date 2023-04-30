#include<iostream>
#include<map>
using namespace std;
//implemented using redblack tree and balanced tree
//search O(logn)
//insert,count,erase  -- O(logn)

int main()
{
    map<int,string>mp;

    mp[1]= "one";
    mp[2]="two";
    mp[4]="four";
    mp[5]="five";
    mp[3]="three";

    mp.insert({6,"six"});   //insert()

    cout<<"map before erase :"<<endl;
    for(auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl<<endl;

    //count()
    cout<<"finding -> 3: "<<mp.count(3)<<endl;  //1 if present
    cout<<"finding -> -3: "<<mp.count(-3)<<endl<<endl;//0 if not present

    //erase(key)
    mp.erase(mp.begin());
    mp.erase(3);

    cout<<"map after erase :"<<endl;
    for(auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl<<endl;

    cout<<"traversed using iterator"<<endl;
    //auto it=mp.find(2);
    for(auto i=mp.find(4);i!=mp.end();i++)
    {
            cout<<(*i).first<<" "<<(*i).second<<endl;
    }

    return 0;
}