#include<iostream>
#include<string>
using namespace std;
int main(){
    string firstName = "Sanjarbek";
    string lastName = "Ismatov";
    string fullName = firstName + " " + lastName;
    cout << fullName << endl;
    string cpp = "C++";
    string word1 = "programming";
    cpp.append(" " + word1);
    cout << cpp << endl;
    return 0;
}