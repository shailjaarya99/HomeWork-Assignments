#include <iostream>
#include <string>
using namespace std;

class EvenSum{
public:
    int a;
    int b;
    int sum;


    void calcsum(){
        sum=0;      

        while(true){
            cout<<"Enter the number";
            cin>>a;

            if (a%2==0){
                sum=sum+a;
                cout<<"sum of even numbers so far is: "<< sum << endl;

            }

            else{
                b=a;
            }


        }
    }
};
int main(){
    EvenSum e1;
    e1.calcsum();
    return 0;

}