//Class

#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    int stud_age = 0;
    string stud_firstname;
    string stud_lastname;
    int stud_standard = 0;
    
    public:
    Student()
    {
        
    }
    void set_age(int age)
    {
         stud_age = age;
    }
    int get_age()
    {
        return stud_age;
    }
    void set_standard(int standard)
    {
      stud_standard  = standard;
    }
    int get_standard()
    {
       return stud_standard;
    }
    string get_first_name()
    {
        return stud_firstname;
    }
    void set_first_name(string first_name)
    {
        stud_firstname = first_name;
    }
    string get_last_name ()
    {
        return stud_lastname;
    }
    void set_last_name(string last_name)
    {
        stud_lastname = last_name;
    }
    
    string to_string(void)
    {
        stringstream str;
        char C = ',';
        str<<stud_age<<C<<stud_firstname<<C<<stud_lastname<<C<<stud_standard;
        return str.str();
    }

};


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
