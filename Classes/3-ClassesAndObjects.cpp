//Classes And Objects

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student
{
  public:
    int score[5];
    int result = 0;
    void input(void)
    {
        for(int i=0;i<5;i++)
        {
            cin>>score[i];
        }
    }
    
    int calculateTotalScore()
    {
        for(int i=0;i<5;i++)
        {
            result += score[i];
        }
        return result;
    }
};