#ifndef _MYSTRING_H
#define _MYSTRING_H

class MyString{
private:
    char *str;

public:
    MyString();
    MyString(const char *s);
    MyString(const MyString &source);
    MyString(MyString &&source);
    ~MyString();

    MyString &operator=(const MyString &rhs); //copy
    MyString &operator=(MyString &&rhs);  //move

    void display() const;

    int get_lenght() const;  //getter
    const char *get_str() const;

    MyString operator-() const;
    MyString operator+(const MyString &rhs) const;
    bool operator==(const MyString &rhs) const;
    bool operator!=(const MyString &rhs) const;
    bool operator<(const MyString &rhs) const;
    bool operator>(const MyString &rhs) const;
    MyString &operator+=(const MyString &rhs);
    MyString operator* (int n) const;
    MyString &operator*=(int n);
    MyString &operator++();
    MyString operator++(int);
};

#endif _MYSTRING_H
