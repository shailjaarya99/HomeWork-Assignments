#include <iostream>
#include <string>
using namespace std;

class person{
public:
    string name;
    int age;
    //person(string n, int age){
       // this->name=n;
        //this->age=age;
    //}
    person(){
        cout<<"msg to be dropped first in series are to be kept in parent class const, \"NON PARAMETERIED\" \n\n";
    }

};

class Student: public person {
    //inheritance se name aur age khud se aa jayegengi we nee not define them all we need to do is like bass roll no.
public:
    int roll;

    Student(){
        cout<< "later on ke msg in child class constructor";
    }

    void getInfo(){
        cout<<"name "<<name <<endl;
        cout<<"age "<<age<<endl;
        cout<<"roll:" <<roll<<endl;
    }

};

int main(){
    Student s1;
    s1.name="riya";
    s1.age=19;
    s1.roll= 99;

    s1.getInfo();
    return 0;
}