#include <iostream>
#include <string>
using namespace std;

class teacher{
    //attributes/ properties
private:
    float salary;
public:
    string name;
    string dept;
    int age;

    //methods
    void changeDept(string newDept){
        dept=newDept;   
    }
    void setSalary(float s){
        salary=s;
    
    }
    float getSalary(){
        return salary;
    }
};

int main(){
    teacher t1;
    t1.name="Aniks";
    t1.age= 37;
    t1.dept="CSE";
    t1.setSalary(400000);


    cout <<t1.name<<endl;
    cout <<t1.getSalary()<<endl;
    return 0;
};