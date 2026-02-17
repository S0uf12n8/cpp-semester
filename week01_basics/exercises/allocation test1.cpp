#include <iostream>
using namespace std;

int main(){
    int N=3;
    int i,j;
/*=========== double pointer scan ===========*/
    int** A=new int*[N];
    for(i=0;i<N;i++){
        A[i]=new int[N];
    }
/*============free the pointer ================*/

for(i=0;i<N;i++){
    delete[] A[i];
}
delete[] A;
}