//to print stars in i columns times and i+= till j rows

/*
Enter the length of triangle side: 4
Enter single ch. shape:4
4 
4 4 
4 4 4 
4 4 4 4 
*/
#include <iostream>
#include <string>
using namespace std;

class Stars{
public:
    int a;
    char shape;


    void getInfo(){
        cout<<"Enter the length of triangle side: ";
        cin>>a;
        cout<<"Enter single ch. shape:";
        cin>>shape;
    }

    void pattern(){
        int i=1;        //row
        while (i<=a){
            int j=1;   //col
            while(j<=i){     //IMP
                cout<<shape<<" ";
                j++;

            }
            cout<<endl;
            i++;
        }
    
        
    }

};

int main(){
    Stars s1;
    s1.getInfo();
    s1.pattern();

    return 0;
}