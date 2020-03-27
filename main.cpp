#include <iostream>
#include "Person.h"

int main() {

    //lab 1
    Person p;

    p.print();

    p = Person("Ivan", "Ivanov", 1999);
    p.print();

    p.setName("Maxim");
    p.setSurname("Maximov");
    p.setYear(2000);
    p.print();

    cout << "Name: " << p.getName() << endl;
    cout << "Surname: " << p.getSurname() << endl;
    cout << "Year: " << p.getYear() << endl;

    Person p1(p);
    p1.print();

    //lab 2


    p1.setName("name2");
    p1.setSurname("surname2");
    p1.setYear(2001);

    cout << "=" << endl;
    p1.print();
    p1=p;
    p1.print();

    cout << "p1 " << endl;
    p.print();
    cout << "p2 " << endl;
    p1.print();

    cout << "==" << endl;
    bool t = p == p1;
    cout << "bool is " << t << endl;

    cout << "!=" << endl;
    t = p != p1;
    cout << "bool is " << t << endl;

    cout << "> (year) " << endl;
    t = p > p1;
    cout << "bool is " << t << endl;

    cout << "< (year) " << endl;
    t = p < p1;
    cout << "bool is " << t << endl;

    cout << ">= (year) " << endl;
    t = p >= p1;
    cout << "bool is " << t << endl;

    cout << "<= (year) " << endl;
    t = p <= p1;
    cout << "bool is " << t << endl;

    cout << "<< (p1) " << endl;
    cout << p << endl;

    cout << ">> (p1) " << endl;
    cout << "Input\n" << "name surname year" << endl;
    cin >> p;
    p.print();


    return 0;
}
