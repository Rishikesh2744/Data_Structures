#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
//insertion,deletion,searching O(1)

int main()
{
        //unordered map
        unordered_map<string,int> m;

        //insertion 1
        pair<string,int> p= make_pair("babbar",3);
        m.insert(p);

        // insertion 2
        pair<string,int> p2("love",2);
        m.insert(p2);

        //inserttion 3
        m["mera"]=1;        //creation
        m["mera"]=2;        //updation

        //serach
        cout<<m["mera"]<<endl;
        cout<<m.at("babbar")<<endl;

        //size
        cout<<m.size()<<endl<<endl;

        //to check presence
        cout<<m.count("bro")<<endl<<endl;
        cout<<m.count("mera")<<endl<<endl;


        //traversal-1
        for(auto it=m.begin();it!=m.end();it++)
        {
            cout<<it->first<<"-> "<<it->second<<endl;
        }cout<<endl<<endl;

        //traversal-2
        for(auto i:m)
        {
            cout<<i.first<<"->"<<i.second<<endl;
        }cout<<endl<<endl;

        //traversal using iterator
        unordered_map<string,int> :: iterator it=m.begin();
        while(it!=m.end())
        {
            cout<<it->first<<"->"<<it->second<<endl;
            it++;
        }cout<<endl<<endl;
        //


        return 0;
}