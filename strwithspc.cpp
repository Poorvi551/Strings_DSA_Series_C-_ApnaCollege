#include<iostream>
using namespace std;
int main(){
    char str[10];
    cout << "Enter char array:" << endl;
    cin.getline(str,100);
    for(char ch: str){
        cout << ch << " ";
    }
    cout << endl;
    return 0;
}