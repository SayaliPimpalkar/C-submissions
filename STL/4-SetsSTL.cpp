//Sets-STL

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int>s;
    int n =0;
    cin>>n;
    int count=0;
    while(count!=n)
    {
        int newinput =0;
        int val =0;
        cin>>newinput>>val;
        if(newinput == 1)
        {
            s.insert(val);
            
        }
        else if(newinput == 2)
        {
            s.erase(val);
        }
        else if(newinput == 3)
        {
            
            if (s.find(val)!=s.end())
              {
                  cout<<"Yes"<<endl;
              }
             else
             {
                cout<<"No"<<endl;
             }
        }
        count++;
     }
}
