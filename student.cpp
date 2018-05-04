#include <iostream>
#include "student.h"
#include <string> 

using namespace std;

student::student(){
    firstname = "";
    lastname = "";
    score = 0;
    count = 0;
}

void student::setName( string& first, string& last ) {
    firstname = first;
    lastname = last;
}

string student::fullName(){
    string re;
    re = firstname + " " + lastname;
    return re;
}

void student::addGrade( double in ) {
    score = score + in;
    count++;
}

double student::getScore(){
    double fin;
    fin = score / count;
    return fin;
}
