#include <bits/stdc++.h>

using namespace std;

int FindUniqueItem(vector<int> arr){
    int result=0;
    for(int i : arr){
        result^=i;
    }

    return result;
}

int main(void){

    vector<int> arr={2,4,1,2,3,1,3,5};
    cout<<"The Original Array : ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"The Unique Number/item in the Vector/Array : "<<FindUniqueItem(arr)<<endl;


    return 0;
}

