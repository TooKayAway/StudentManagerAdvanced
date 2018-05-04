#ifndef _STUDENT_H
#define _STUDENT_H
#include <iostream>
#include <string>

using namespace std;

class student
{
private:
string firstname;
string lastname;
double score;
double count;
public:
    student();
    void setName( string&, string& );
    string fullName();
    void addGrade(double);
    double getScore();
};

#endif
