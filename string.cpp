#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout << "Enter char array:" << endl;
    cin >> str;
    cout << "Output:" << str << endl;              // Prints the word or letter before whitespaces only
    return 0;                                      // Strigs after whitespace are ignored
}