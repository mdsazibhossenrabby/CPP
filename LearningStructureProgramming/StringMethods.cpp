#include <iostream>
using namespace std;
int main(void){

    string name="MD.SAZIB";
    string st="Hello";

    cout<<"Find Length of A string : "<<name.length()<<endl;
    cout<<"Check Empty or Not  : "<<name.empty()<<endl;
    st.clear();//delete the value of the string st
    cout<<"Concatenate/Append String : "<<name.append(" HOSEN")<<endl;
    cout<<"Find Character at index 4 in the string : "<<name.at(4)<<endl;
    name.insert(0,"~");//insert ~ at 0th index without deleting any character
    cout<<"Find position of a character A in a string : "<<name.find('A')<<endl;
    name.erase(0,3);

    return 0;
}