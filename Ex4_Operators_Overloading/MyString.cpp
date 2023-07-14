#include "MyString.h"
#include <cstring>
#include <iostream>

MyString::MyString() : str{nullptr}{
    str = new char[1];
    *str = '\0';
}
MyString::MyString(const char *s) : str{nullptr}{
    if (s == nullptr){
        str == new char[1];
        *str = '\0';
    }else{
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}
MyString::MyString(const MyString &source) : str{nullptr}{
    if(str == nullptr){
        str = new char[strlen(source.str) + 1];
        strcpy(str, source.str);
    }
}
MyString::MyString(MyString &&source) : str{source.str}{
    source.str == nullptr;
}
MyString::~MyString() {
    delete [] str;
}
MyString &MyString ::operator=(const MyString &rhs){
    if(this == &rhs)
        return *this;

    delete[]str;
    str =new char [strlen(rhs.str) + 1];
    return *this;
}
MyString &MyString::operator=(MyString &&rhs){
    if(this == &rhs)
        return *this;
    delete[]str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

void MyString::display() const{
    std::cout<< str<<" : "<< get_lenght()<<std::endl;
}
int MyString::get_lenght() const {

}

bool MyString::operator==(const MyString &rhs) const {
    return std::strcmp(str, rhs.str) == 0;
}

bool MyString::operator!=(const MyString &rhs) const {
    return std::strcmp(str, rhs.str) != 0;
}
bool MyString::operator<(const MyString &rhs) const {
    return std::strcmp(str, rhs.str) < 0;
}
bool MyString::operator>(const MyString &rhs) const {
    return std::strcmp(str, rhs.str) > 0;
}
MyString MyString::operator-() const{
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for(size_t i = 0; i < std::strlen(buff); i++){
        buff[i] = std::tolower(buff[i]);
    }
    MyString temp {buff};
    delete[] buff;
    return temp;
}
MyString MyString::operator+(const MyString &rhs) const {
    char *buff = new char [std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcat(buff, str);
    std::strcat(buff, rhs.str);
    MyString temp {buff};
    delete[] buff;
    return temp;
}
MyString &MyString::operator+=(const MyString &rhs){
    *this = *this + rhs;
    return *this;
}
MyString MyString::operator*(int n) const {
    MyString temp;
    for(int i = 1; i <= n; i++)
        temp = temp + *this;
    return temp;
}
MyString &MyString::operator*=(int n) {
    *this = *this * n;
    return *this;
}
MyString &MyString::operator++() {
    for(int i = 0; i < std::strlen(str); i++)
        str[i] = std::toupper(str[i]);
    return *this;
}
MyString MyString::operator++(int) {
    MyString temp (*this);
    operator++();
    return temp;
}

