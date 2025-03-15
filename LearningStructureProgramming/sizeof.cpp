#include <iostream>
using namespace std;
int main(void){

    int a=5;
    double b=5.4;
    char ch='A';
    string name="MD. SAZIB";
    int array[]={1,2,3,4,4,5,5};
    string array2[]={"Hello","Hi","Hola"};

    cout<<"The size of integer data type : "<<sizeof(int)<<endl;
    cout<<"The size of integer variable (a) : "<<sizeof(a)<<endl;
    cout<<"The size of double data type : "<<sizeof(double)<<endl;
    cout<<"The size of double variable (b) : "<<sizeof(b)<<endl;
    cout<<"The size of character(char) data type : "<<sizeof(char)<<endl;
    cout<<"The size of character variable(ch) : "<<sizeof(char)<<endl;
    cout<<"The size of string data type : "<<sizeof(string)<<endl;
    cout<<"The size of string variable(name) : "<<sizeof(name)<<endl;
    cout<<"The size of integer array : "<<sizeof(array)<<endl;
    cout<<"The size of string array : "<<sizeof(array2)<<endl;


    return 0;
}