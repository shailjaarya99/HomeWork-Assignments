//to print number from a input till b input, just that for every number at col-th the table continues in new row from the next number
#include <iostream>
#include <string>
using namespace std;

class Pattern{
public:
    int a;
    int number =1;

    void getInput(){
        cout<<"enter no. of col. :";
        cin>>a;

    }
    void patterns(){
        int i=1;
        while(i<=a){
            int j=1;
            while(j<=a){
                cout<<number<<" ";
                number++;
                j++;

            }
            cout<<endl;
            i++;
        }
        
    }

}; 
int main(){
    Pattern p1;
    p1.getInput();
    p1.patterns();

    return 0;
}
