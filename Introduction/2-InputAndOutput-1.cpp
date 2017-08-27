//Input and Output

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int values ,i;
    long int result = 0;
    for(i=0;i<3;i++)
    {
        cin>>values;
        result += values;
    }
    cout<<result<<endl;
    return 0;
}
