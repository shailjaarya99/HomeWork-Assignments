#include <iostream>
#include <string>
using namespace std;

class Student{
public: 
    string name;
    int age;

    Student(){
        cout<<"Hi says a student"
        cout<<"non parameterised";

    }
    Student (string name, int age){
        this ->name = name;
        this -> age = age;
        cout<<"parameter";

    }

};

int main(){
    Student s1("bob" ,19 );
    return 0;
}