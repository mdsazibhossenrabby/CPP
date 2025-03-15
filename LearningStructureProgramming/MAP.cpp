//Key-Value Pairs

#include <bits/stdc++.h>

using namespace std;

int main(void){

    map<string,int> MarkSheet;

    MarkSheet["Omor"]=87;
    MarkSheet["SAZIB"]=95;

    map<string,int>:: iterator  i;

    

    //Insert
    MarkSheet.insert({{"Eva",83},{"Fuzael",80}});
    MarkSheet.insert({"Kazi", 80});

    for (i = MarkSheet.begin(); i != MarkSheet.end(); i++){
        cout << "Name : " << (*i).first << " , Marks : " << (*i).second << endl;
    }

    //first=key, second=value



    return 0;
}