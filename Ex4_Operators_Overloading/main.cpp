#include <iostream>
#include "MyString.h"

using namespace std;
int main() {
    cout<< boolalpha <<endl;
    MyString a {"frank"};
    MyString b {"frank"};

    cout<< (a==b) <<endl; //true
    cout<< (a!=b) <<endl;//false

    b = "george";
    cout<< (a==b) << endl; //false
    cout<< (a!=b) << endl;//true
    cout<< (a<b) << endl;//true
    cout<< (a>b) << endl; //false

    MyString s1 {"FRANK"};
    s1 = -s1;
    cout<<s1.str;
    return 0;
}
