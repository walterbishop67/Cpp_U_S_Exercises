#include <iostream>
#include <string>

using namespace std;
int main() {

    string b;
    string abc ;
    cin>>abc;

    for (int i = 1; i <= abc.length();i++) {
        if (isalpha(abc.at(i - 1))){
            b = abc.substr(0,i);
            string n (abc.length() - i, ' ');
            for (int j = b.length() -2; j >= 0;j--)
                b += b.at(j);
            cout<<n + b<<endl;
        }
    }
    return 0;

}
