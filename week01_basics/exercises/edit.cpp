#include <iostream>
using namespace std;


void swap(int a,int b){
    int tmp;
    temp=a;
    a=b;
    b=tmp;
}
int main(){
    int a,b;
    cout<<"donner la valuer du a=";
    cin>>a;
    cout<<"donner la valeur du b=";
    cin>>b;

    swap(a,b);
    cout<<"the new value of a = "<<a<<endl;
    cout<<"the new value of b = "<<b<<endl;

}