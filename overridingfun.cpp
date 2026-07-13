#include <iostream>
#include <string>
using namespace std;

class Parent{
public:
     getInfo(){
        cout <<"we are the parents\n";   
     }
};

class kid: public Parent{
public:
    getInfo(){
        cout <<"Hi we kids";
    }
};

int main(){
    kid k1;
    k1.getInfo();
    return 0;
}