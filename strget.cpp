#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout << "Enter char array:" << endl;
    cin.getline(str,100);                       // Prints the whole sentence with whitespaces also
    cout << "Output:" << str << endl;
    cout << "Enter char array:" << endl;
    cin.getline(str,100,'$');      // Ignores the word after the specified($) delimiter occurs in the sentence
    cout << "Output:" << str << endl;              
    return 0;                                      
}