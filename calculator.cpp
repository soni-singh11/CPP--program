#include<iostream>
using namespace std;
class Calculator{
    public:
    void add(){
        int a,b,sum,subtract,multiply,divide;

        cout<<"enter a number:";
        cin>>a;
        cin>>b;
        
        sum=a+b;
        subtract=a-b;
        multiply=a*b;
        divide=a/b;
        
    void display();
    {
    cout<<"Sum:"<<sum<<endl;
     cout<<"Subtract:"<<subtract<<endl;
     cout<<"Multiply:"<<multiply<<endl;
     cout<<"Divide:"<<divide<<endl;
    }
    }
};

int main(){
Calculator object;
object.add();

return 0;
}
