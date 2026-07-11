#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name=name;
        cgpaPtr=new double;
        *cgpaPtr=cgpa;
    }

    ~Student(){
        cout << "Hi, i m gone\n";
        delete cgpaPtr;
    }
    int getInfo(){
        cout<< "name:" <<name<<endl;
        cout<<"score: "<< *cgpaPtr <<endl;
    }

    Student(Student &obj){
        this->name=obj.name;
        this->cgpaPtr=obj.cgpaPtr;

    }
};
int main(){
    Student s1("namm tera", 8.95);
    s1.getInfo();
    return 0;
}