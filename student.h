

#pragma once
#include "degree.h"

#include <string>
using namespace std;

class Student {
private: 
    string ID; string fName; string lName; string emailAddress; 
    int age; int daysToComplete; Degree degree;
public:
    Student(string, string, string, string, int, int numdays[3], Degree);
    ~Student();

    void setStudentID(string ID);
    
    void setFirstName(string fName);
    
    void setLastName(string lName);
    
    void setEmailAddress(string emailAddress);
    
    void setAge(int);
    
    void setDaysToComplete(int*);
    
    void setDegree(Degree);


    string getStudentId() const;
    
    string getFirstName() const;
    
    string getLastName() const;
    
    string getEmailAddress() const;
    
    int getAge() const;
    int getDaysToComplete() const;

    virtual Degree getDegree();
    virtual void print();

};

 