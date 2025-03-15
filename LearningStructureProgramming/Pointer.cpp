#include <iostream>
using namespace std;
int main(void){

    int age=12;
    int *ageP;
    ageP=&age;
    cout<<"Value of pointer ageP: "<<ageP<<endl;
    cout<<"Value at address of pointer *ageP: "<<*ageP<<endl;
    cout<<"Value of variable age : "<<age<<endl;
    cout<<"Address of of variable age : "<<&age<<endl;
    cout<<"Address of pointer ageP: "<<&ageP<<endl;

    string Array[5]={"Hello","World","Hi","MD.SAZIB"};
    string *ArrayP;
    ArrayP=Array; //Array name is contains the memoey address of 1st index

    cout<<"The value that Array name contains : "<<Array<<endl;
    cout<<"The address of Array[0] : "<<&Array[0]<<endl;
    cout<<"The value of the ponter  ArrayP : "<<ArrayP<<endl;
    cout<<"The value at address of ponter *ArrayP : "<<*ArrayP<<endl;

    return 0;
}