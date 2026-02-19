#include <iostream>
using namespace std;

int main(){
    int *n=new(int);
    int i;
    cout<<"Donner le nombre d'élément du tableur :";
    cin>>*n;
    float *tab=new float[*n];
    for(i=0;i<*n;i++){
        cin>>tab[i];
    }
    for(i=0;i<*n;i++){
        cout<<"Tab ["<<i<<"]="<<tab[i];
    }
    delete n;
    delete [] tab;
    
}