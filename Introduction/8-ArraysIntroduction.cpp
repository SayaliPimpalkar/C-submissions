//Arrays Introduction

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int sizeofarray =0;
    int array[1000] ;
    cin>>sizeofarray;
    for(int i=0; i<sizeofarray; i++)
    {
        cin>>array[i];
    }
    for(int i = sizeofarray -1; i>=0;i--)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}
