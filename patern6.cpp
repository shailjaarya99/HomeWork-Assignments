//AIISAC values se playtem
/*put:8
AAAAAAAA
BBBBBBBB
CCCCCCCC
DDDDDDDD
EEEEEEEE
FFFFFFFF
GGGGGGGG
HHHHHHHH*/
#include <iostream>
#include <string>
using namespace std;

int main(){

    int n;
    cout<<"put:";
    cin>>n;

    int row = 1 ;
    while(row<=n){
        int col=1;
        while(col<=n){
            char a= 'A'+row-1;
            cout<<a;
            col=col+1;
        }
        cout<<endl;
        row++;
    }
}

 