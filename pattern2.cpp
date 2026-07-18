#include <iostream>
#include <string>
using namespace std;

class Pattern{
public:
    int rows;
    int col;

    void getInfo(){
        cout<<"enter row: ";
        cin>>rows;

        cout<<"enter col: ";
        cin>>col;
    }

    void formsation(){
        int i=1;

        while(i<=col){
            int j=1;
            while(j<=rows){
                cout<<j<<" ";
                
                j++;
            }
            cout<<endl;
            i++;
        }
    }

};


int main(){
    Pattern p1;
    p1.getInfo();
    p1.formsation();

    return 0;
}