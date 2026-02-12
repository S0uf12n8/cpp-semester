#include <iostream>
using namespace std;


int main(){
    int a=5;
    int *p=&a;

    a=20;
    cout<<"la valeur du c" <<*p;
}