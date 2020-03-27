#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    string surname;
    int year;
public:
    Person();

    Person(string p_name, string p_surname, int p_year);

    Person(const Person &other);

    void setName(string p_name);

    void setSurname(string p_surname);

    bool setYear(int p_year);

    string getName();

    string getSurname();

    int getYear();

    void print();

    //lab 2

    Person operator=(const Person &p);

    bool operator==(const Person &p);

    bool operator!=(const Person &p);

    bool operator>(const Person &p);

    bool operator<(const Person &p);

    bool operator>=(const Person &p);

    bool operator<=(const Person &p);

    friend ostream& operator<< (ostream &out, const Person &p);

    friend istream& operator>> (istream &in,Person &p);

};


#endif // PERSON_H_INCLUDED
