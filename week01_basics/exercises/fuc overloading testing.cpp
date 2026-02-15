#include <iostream>
using namespace std;

void name();
void name(string lasname);

int main(){
    name();
    name("bot");

}

void name(){
    cout<<"user \n";
}

void name(string lastname){
    cout<<"here is you last name "<<lastname;
}