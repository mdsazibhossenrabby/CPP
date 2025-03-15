#include <bits/stdc++.h>

using namespace std;

int main(void){

    //Wasy of creating vectors
    vector<char> vec1;
    vector<char> vect2(10); //vector size 10
    vector<char> vect3(vect2); // vector from existing vector
    vector<char> vect4(10,'A'); // vetor of size 10 with element 'A'

    vector<int> numbers;
    numbers.push_back(10);
    cout<<numbers[0]<<endl;

    vector<int> :: iterator i=numbers.begin();

    numbers.insert(i,20);

    numbers.pop_back();
    
    numbers.insert(i,10,50); // insert 10 copies of 50 at index i

    return 0;
}