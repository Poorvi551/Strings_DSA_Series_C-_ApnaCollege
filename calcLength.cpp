#include<iostream>
using namespace std;
int main(){
    char str[]="Hey Poorvi!!";
    int len=0;
    for(int i=0; i<str[i]!='\0';i++){
        len++;
    }
    cout << "Length of string: " << len << endl;
    return 0;
}