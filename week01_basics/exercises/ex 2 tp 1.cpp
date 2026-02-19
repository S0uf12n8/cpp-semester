#include <iostream>
using namespace std;

int min(int a,int b,int c);
float min(float a,float b,float c);

int main(){
    int a,b,c,minimum;

    cout<<"donner la valeur de a = ";
    cin>>a;
    cout<<"donner la valeur de b = ";
    cin>>b;
    cout<<"donner la valeur de c = ";
    cin>>c;

    minimum = min(a,b,c);

    cout<<"le minimum est = "<<minimum;
}

int min(int a,int b,int c){
    int minimum = a;

    if(b < minimum)
        minimum = b;

    if(c < minimum)
        minimum = c;

    return minimum;
}

float min(float a,float b,float c){
    float minimum = a;

    if(b < minimum)
        minimum = b;

    if(c < minimum)
        minimum = c;

    return minimum;
}
