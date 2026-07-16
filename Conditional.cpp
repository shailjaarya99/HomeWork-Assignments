//using conditional statement to allow getting a drivers lisence

#include <iostream>
#include <string>
using namespace std;


class Lic {
public:
    string Name;
    string address;
    int age;
    int gears;

    void getInput(){
        cout<<"what is your name chap:";
        cin>>Name;

        cout<<"What is your address:";
        cin>> address;

        cout<<"What is your age? ";
        cin>>age;
    }
    void checkInfo(){
        
        if(age>=18){
        cout<<"How many gears are there in a car?";
        cin>>gears;

            if(gears==6){
            cout<< "congoo"<<endl;
            cout<<"You get a driving license approved for "<<Name<<"/n addressed at "<<address<<endl;
            }
            else{
            cout<<"You aint got no bawwlllss for ts"<<endl;
            }

        }else{
        cout<<"you too small"<<endl;
        }

        
        }
};

int main(){
    Lic l1;
    l1.getInput();
    l1.checkInfo();

    return 0;

}