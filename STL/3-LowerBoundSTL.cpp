//Lower Bound - STL

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    int input_size =0;
    int count=0;
    int values, number_of_querry;
    cin>>input_size;
    for(int i=0;i<input_size;i++)
    {
        cin>>values;
        v.push_back(values);
    }
    cin>>number_of_querry;
    while(count!= number_of_querry)
    {
       int val;
       cin>>val;
       vector<int>::iterator low = lower_bound(v.begin(), v.end(), val);
       if (v[low - v.begin()] == val)
       {
           cout << "Yes " << (low - v.begin()+1) << endl;
       }
           
       else
       {
           cout << "No " << (low - v.begin()+1) << endl;
       }
          
   
        count++;
    }
    return 0;
}
