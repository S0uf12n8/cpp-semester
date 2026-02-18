#include <iostream>
using namespace std;

/* ====== prototypes ========*/
void fillArray(int* arr,int n);
void printArray(int* arr,int n);
int sumArray(int* arr,int n);
int maxArray(int* arr,int n);
int swapValues(int& a,int& b);

int main(){
    int n;
    cout<<"give me the value of n : ";
    cin>>n;

    if(n<=0){
        cout<<"invalid size"<< endl;
        return 0;
    }

    int* arr;
    arr=new int[n];
    /*=== filling the array====*/
    fillarray(arr,n);

    /* ==== print Array ====*/
    printArray(arr,n);

    /*==== the sum of the array===*/
    int sum;
    sum=sumArray(arr,n);
    cout<<"the sum of array = "<< sum << endl;
    
    
    /*=== max of array ==========*/ 
    int max = maxArray(arr,n);
    cout<<"the max is = "<<max<<endl;

    /*==== swap two digits ======*/
       if (n > 1)
    {
        swapValues(arr[0], arr[n - 1]);

        cout << "\nAfter swapping first and last elements:\n";
        printArray(arr, n);
    }


    /*==== free memory ====*/
    delete[] arr;

    return 0;

}

void fillArray(int* arr,int n){
    int i;
    for(i=0;i<n;i++){
        cout<<"give me the value of T["<<i<<"]";
        cin>>arr[i];
    }
}


void printArray(int* arr,int n){
    int i;
    for(i=0;i<n;i++){
        cout<<"the value of A["<<i<<"]= "<<arr[i]<<endl;
    }
    cout<<endl;

}

int sumArray(int* arr,int n){
    int i;
    int sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int maxArray(int* arr,int n){
    int i;
    int max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int swapValues(int& a,int& b){
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
}