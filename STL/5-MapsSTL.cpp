//Maps-STL

#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
    map<string,int>m;
    int n = 0, count = 0;
    int newinput = 0,  val=0;
    string key;
    cin>>n;
    while(count!=n)
    {
        count++;
        cin>>newinput>>key;
        switch(newinput)
        {
           case 1:
            cin>>val;
            m[key]+= val;
            break;
            case 2:
            m.erase(key);
            break;
            case 3:
           
            if(m.find(key)!= m.end())
            {
                cout<<m[key]<<endl;
            }
            else
                cout<<0<<endl;
            break;
            default:
            break;
        }
        
        
    }
    return 0;
}
