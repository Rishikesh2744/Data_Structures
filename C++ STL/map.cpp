#include<iostream>
#include<map>
using namespace std;

//implemented using redblack tree and balanced tree
//search O(logn)

int main()
{
    map<int,string> mp;

    mp[1]="first";
    mp[2]="second";
    mp[53]="third";
    mp[14]="fourth";

    mp.insert({ 5,"sdfgh"});

    mp.erase(2);

    for(auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }

    cout<<"finding 14->"<<mp.count(14)<<endl;

    auto it=mp.find(2);

    for(auto i=it;it!=mp.end();i++)
    {
        cout<<(*i).first<<endl;
    }

    return 0;
}