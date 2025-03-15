#include <iostream>
#include <cmath>
using namespace std;
int main(void){

    int number1=7;
    int number2=5;

    //in iostream
    int Maximum= max(number1,number2);
    int Minimum = min(number1,number2);

    //in cmath

    int power=pow(2,3); //2^3 = 8
    int squareRoot=sqrt(6); //6^(1/2)
    int absolute=abs(-9); //modulus means  absolute value 9
    int Round=round(3.5); //4 (if less than 0.5 then floor value, if 0.5 or upper then take ceilling value)
    int RoundUp=ceil(3.67); //4
    int RoundDown=floor(3.67); //3


    return 0;
}