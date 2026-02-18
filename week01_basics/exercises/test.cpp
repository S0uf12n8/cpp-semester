#include <iostream>
using namespace std;

int main(){
    int x=4;
    int &r = x;
   
    int *p=&x;

    cout<<"la valeur du x ="<<x<<endl;
    cout<<"la valeur du x = "<<r<<endl;
    cout<<"the address of x = "<<&r<<endl;
    cout<<"the address of x = "<<&x<<endl;
    cout<<"the address of x = "<<*p<<endl;
    cout<<"the address of x = "<<&p<<endl;
    

    


}