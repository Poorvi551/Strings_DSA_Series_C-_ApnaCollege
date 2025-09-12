#include<iostream>
using namespace std;
int main(){
    string str="Apna College";
    cout << str << endl;
    str="Hello";                        // String can be modified
    cout << str << endl;
    char chArr[]="apna college";
    //chArr="hello";                     // chARR character Array is not modifiable
    cout << chArr << endl;
    return 0;
}