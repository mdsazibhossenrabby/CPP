//Dynamic Memory Allocation for Array

#include <iostream>
using namespace std;
int main(void){

    int *scores=nullptr;
    int size;

    cout<<"Enter Size of the Array : ";
    cin>>size;

    scores=new int[size]; //DMA

    for(int i=0;i<size;i++){
        scores[i]=i+5;
    }

    for(int i=0;i<size;i++){
        cout<<scores[i]<<" ";
    }

    return 0;
}