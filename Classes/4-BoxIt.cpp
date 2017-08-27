#include<bits/stdc++.h>

using namespace std;


//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box
{
    public:
    long l, b, h;
    /*default constructor*/
    Box()
    {
        l=0;
        b=0;
        h=0;
     
    }
    /*parameterized constructor*/
    Box(int length, int breadth, int height)
    {
        l= length;
        b= breadth;
        h = height;
    }
    /*Copy constructor*/
    Box (const Box& B)
    {
        l= B.l;
        b= B.b;
        h= B.h;
       
    }
    /**get functions*/
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return (long long)(l*b*h);
    }
    bool operator<(Box& b)
    {
        if(this->l != b.l) return this->l < b.l;
        if(this->b != b.b) return this->b < b.b;
        return this->h < b.h;
    }
};

 ostream& operator<<(ostream& out, Box b)
 {
    out << b.l << " " << b.b << " " << b.h;
    return out;
 }



void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}