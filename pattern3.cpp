/*/*enter no. of col. :6
1 2 3 4 5 6 
7 8 9 10 11 12 
13 14 15 16 17 18 
19 20 21 22 23 24 
25 26 27 28 29 30 
31 32 33 34 35 36 
*/
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
