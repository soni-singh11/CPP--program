#include<iostream>
using namespace std;
class Evenodd{
    public:
    void display(){
    int a;

    cout<<"enter a number:";
    cin>>a;
    
        if(a%2==0)
        cout<<"even number";
        else
        cout<<"odd number";
    }
};
int main(){
Evenodd calculate;
calculate.display();
 return 0;
}
