#include <iostream>
#include <string>
using namespace std;

class Pattern{
public:
    int row;
    int col;

    void input(){
        cout<<"enter row no.";
        cin>>row;
    }

    
    void loop(){
        int i=1;
        while (i<=row){
            int col=1;
            
            while(col <=row){
                cout<<col;
                col++;
            }
        cout<<endl;
        i++;    
            

        }
        
    }


};

int main(){
    Pattern p1;
    p1.input();
    p1.loop();

    return 0;
}