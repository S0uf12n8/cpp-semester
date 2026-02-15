#include <iostream>
using namespace std;


int main(){
    int n=3;
    int i;
    int* t= new int[n];

    for(i=0;i<n;i++){
        cout<<"donner la valeur du a["<<i<<"]: ;
        cin>>t[i];

    }

    for(i=0;i<n;i++){
        cout<<"la valeur du t[%d]=%d"<<i<<t[i];
    }
}