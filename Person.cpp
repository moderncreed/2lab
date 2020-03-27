#include "Person.h"

    Person::Person() {
    	setName("none");
    	setSurname("none");
    	setYear(1900);
    }
    Person::Person(string p_name, string p_surname, int p_year) {
        setName(p_name);
        setSurname(p_surname);
        setYear(p_year);
	}
	Person::Person(const Person &other){
        this->name = other.name;
        this->surname = other.surname;
        this->year = other.year;
    }

    void Person::setName(string p_name) {
        name = p_name;
    }
    void Person::setSurname(string p_surname) {
        surname = p_surname;
    }
    bool Person::setYear(int year) {
       if(year >=1900 && year<2100)
        {
            this->year = year;
            return true;
        }
    return false;

    }
    string Person::getName() {
        return name;
    }
    string Person::getSurname() {
        return surname;
    }
    int Person::getYear() {
        return year;
    }
    void Person::print() {
        cout << "Name: " << getName() << endl;
        cout << "Surname: " << getSurname() << endl;
        cout << "Year: " << getYear() << endl;
    }

    //lab 2
    Person Person::operator=(const Person &p){
        this->name = p.name;
        this->surname = p.surname;
        return *this;
    }
    bool Person::operator==(const Person &p){
        return this->year == p.year && this->name == p.name && this->surname == p.surname;
    }
    bool Person::operator!=(const Person &p){
        return !(this->year == p.year && this->name == p.name && this->surname == p.surname);
    }
    bool Person::operator>(const Person &p){
        return (this->year > p.year);
    }
    bool Person::operator<(const Person &p){
        return (this->year < p.year);
    }
    bool Person::operator>=(const Person &p){
            return !(*this < p);

    }
     bool Person::operator<=(const Person &p){

    return !(*this > p);

    }

    ostream& operator<< (ostream &out, const Person &p){
        out << " year: " << p.year << " name: " << p.name << " surname: " << p.surname;
        return out;
    }
    istream& operator>> (istream &in, Person &p){
        in >> p.name;
        in >> p.surname;
        in >> p.year;
        return  in;
    }
