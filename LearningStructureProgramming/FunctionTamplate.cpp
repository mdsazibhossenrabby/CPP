#include <iostream>
using namespace std;

template <typename T>

T CalculateSum(T n1,T n2){

    T sum= n1+n2;

    return sum;
}



template <typename X,typename Y,typename Z>

auto Calculate(Y n1,X n2,Z n3){

    /*auto return type will automatically detect 
    the return type(int,float,char,string,void)*/

    return n1+n2+n3;
}




template <typename T>

void Prints(T items){
    
    cout<<"Hello "<<items<<endl;
}


int main(void){

    cout<<"Passing Integers in CalculateSum : "<<CalculateSum(5,10)<<endl;
    cout<<"Passing Floats in CalculateSum  : "<<CalculateSum(5.0,10.2)<<endl;
    cout<<"Passing Characters in Prints : ";
    Prints('A');
    cout<<"Passing Strings in Prints : ";
    Prints("MD. SAZIB");

    Calculate(10,1,1.1);

    return 0;
}