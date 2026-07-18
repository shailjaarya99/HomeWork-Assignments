/*
1
22
333
4444
*/
#include <iostream>
#include <string>
using namespace std;

class Pattern{
public:
    int a;

    void getInfo(){
        cout<<"get the max number:";
        cin>>a;
    }
    void pattern(){
        int i=1;
        while (i<=a){
            int j=1;
            while (j<=i){
                cout<<i<<" ";
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
    p1.pattern();
    return 0;
}
