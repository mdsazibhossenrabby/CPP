#include <iostream>
using namespace std;
int main(void){

    int *scores=nullptr; // 0 or null
    int *age=NULL; //0 or null
    cout<<"The value of scores pointer : "<<scores<<endl;
    cout<<"The value of age pointer : "<<age<<endl;

    *age=13; // this statement is wrong,because the pointer has no memory address. it will show error in compilation

    //Dynamic Memory

    age= new int; //allocate a  new memory address of integer type
    cout<<"The value of age pointer after memory allocation : "<<age<<endl;

    *age=12;

    cout<<"The value of at the address of age pointer after memory allocation : "<<*age<<endl;

    delete(age); //must do 

    return 0;
}