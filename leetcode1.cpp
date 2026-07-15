#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
     int a;
     int b;
     int sum;

    
     void getInput(){
        cout<<"Enter no. 1: ";
        cin>> a;

        cout<<"Enter no2:";
        cin>> b;
        sum= a+b;


     }
    
};

int main(){
    Solution s1;
    s1.getInput();
    cout<<"Sum is:"<<s1.sum<<endl;
    return 0;
}