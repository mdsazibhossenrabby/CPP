#include <bits/stdc++.h>

using namespace std;

//single Parameter Template
template <typename t>
int add1(t a,t b){
    return a+b;
}
template <typename T>
char add2(T a, T b){
    return a + b;
}

template <typename T1>
T1 add3(T1 a, T1 b){
    return a + b;
}


//Multiple Parameter Template
template <typename T2, typename U2>
T2 add4(T2 a, U2 b)
{
    return a + b;
}

template <typename T2, typename U2>
U2 add5(T2 a, U2 b)
{
    return a + b;
}

template <typename T2, typename U2>
auto add6(T2 a, U2 b)
{
    return a + b;
}

int main(void){

    cout<<add1(10,2)<<endl;
    cout << add2(10, 90) << endl;
    cout << add3(10, 90) << endl;

    return 0;
}