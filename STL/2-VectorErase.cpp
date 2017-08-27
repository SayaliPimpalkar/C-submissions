//Vector Erase

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector <int> v;
    int size = 0;
    int values = 0;
    int querry1 = 0;
    int start = 0; int end =0;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>values;
        v.push_back(values);
    }
    cin>>querry1;
    querry1--;
    v.erase(v.begin()+querry1);
    cin>>start>>end;
    start--;
    end--;
    
    v.erase(v.begin()+start,v.begin()+end);
    int returnsize = v.size();
    cout<<returnsize<<endl;
    for(int i=0;i<returnsize;i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}
