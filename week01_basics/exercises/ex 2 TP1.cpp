#include <iostream>
using namespace std;

int min(int,int,int);
float min(float a,float b,float c);


int main(){
    int a,b,c,minimum;
    cout<<"donnet la valeur du a =";
    cin>>a;
    cout<<"donnet la valeur du b =";
    cin>>b;
    cout<<"donnet la valeur du c =";
    cin>>c;


    minimum =min(a,b,c);
    cout<<"le minimum est  = "<<minimum;


}


int min(int a,int b,int c){

    int minmum = a;

    if(b<minmum){
        b=minmum;
    }
    if (c<minmum)
    {
        c=minmum;
    }
    
    return minmum;
    
}

float min(float a,float b,float c){
    
    int minmum = a;

    if(b<minmum){
        b=minmum;
    }
    if (c<minmum)
    {
        c=minmum;
    }
    return minmum;
}