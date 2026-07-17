#include <iostream>
#include <string>
using namespace std;

class Pattern{
public:
     int a;
     int b;
     char c;
     

     void getInput(){
        cout<<"put in the no. of row: ";
        cin>>a;

        cout<<"put in no. of col: ";
        cin>>b;

        cout<<"Give the symbol or number of ch: ";
        cin>>c;
        
       
     }

     void pattern(){
        int i=0;
        while(i<a){
            int j=0;
            while (j<b){
                cout<<c;
                j++;

            }
        cout<< endl;           //IMP
        i=i+1; 

        }
     }

};

int main(){
    Pattern p1;
    p1.getInput();
    p1.pattern();
    return 0;
}