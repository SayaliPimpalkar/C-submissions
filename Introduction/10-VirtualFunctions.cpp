//Virtual Functions

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

static  int stud_id = 0;
static  int prof_id = 0;

class Person
{
    public:
    string name;
    int age;
   
    Person()
    {
        
    }
    virtual void getdata(){};
    virtual void  putdata(){};
    
};

class Professor: public Person
{
    int publications;
    
    public:
    Professor()
    {
      
    }
    void getdata() override
    {
        cin>>name;
        cin>>age;
        cin>>publications;
    
    }
    void putdata ()override
    {
        prof_id++;
        cout <<name<<" "<<age<<" "<<publications<<" "<<prof_id<<endl;
    }
};

class Student:public Person
{
    int marks[6];
    int sum;
    
    public:
    
    Student()
    {
       
    }
    void getdata() override
    {
        cin>>name;
        cin>>age;
        for(int i=0;i<6;i++)
        {
            cin>>marks[i];
            sum += marks[i];
        }
        
    
    }
    void putdata()override
    {
        stud_id++;
        cout <<name<<" "<<age<<" "<<sum<<" "<<stud_id<<endl;
    }
 };