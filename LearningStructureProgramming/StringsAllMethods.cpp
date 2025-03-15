#include <iostream>
#include <string>
using namespace std;
int main(void){
    string str1="Hello Programmers";
    string str2="Hi How";
    string str3="Programming is Important";


    cout<<"First Character Through Iterator :" <<*str1.begin()<<endl;
    cout<<"Last Character Through Iterator :" <<*(str1.end()-1)<<endl;

    cout<<"First Character :" <<str1.front()<<endl;
    cout<<"Last Character  :" <<str1.back()<<endl;

    cout<<"Find Size using Length() : "<<str1.length()<<endl;
    cout<<"Find Size using size() : "<<str1.size()<<endl;
    cout<<"Check Empty : "<<str1.empty()<<endl;

    str2.clear();
    cout<<"The str2('Hi How') after clear : "<<str2<<endl;

    str3.erase(7,4);
    cout<<"The str3('Programming is Important') after erase characters 7 index to 4characters : "<<str3<<endl;

    //Concatenation
    str1.append("! How are You?");
    cout<<"Add '! How are You?' at last to str1 : "<<str1<<endl;

    str1.append(str3);
    cout<<"Add str3 at last to str1 : "<<str1<<endl;

    str2.append("! How are You?",6);
    cout<<"Add first 6 characters of'! How are You?' at last to str2 : "<<str2<<endl;

    cout<<"Find Character at 4 index of str1 : "<<str1.at(4)<<endl;

    cout<<"The index of 'o' in str1 : "<<str1.find('o')<<endl;

    cout<<"The first index of the string literal 'llo' in str1 : "<<str1.find("llo")<<endl;

    cout<<"The substring between 2 to 4 at str1 : "<<str1.substr(2,4)<<endl;


    str2.push_back('K');
    cout<<"Add 'K' at last in str2 : "<<str2<<endl;

    string str4="Hello";
    string str5="World";

    str4.swap(str5);
    cout<<"str4='Hello' and str5='World' after swapping str4 : "<<str4<<" , str5 : "<<str5<<endl;


    return 0;
}