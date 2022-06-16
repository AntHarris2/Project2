#include <iostream>

#include "student.h"

#include <string>



    using namespace std;

    
    Student::Student(string ID, string fName, string lName, string emailAddress, int age, int numDays[3], Degree degree) {
        setStudentID(ID);
        setFirstName(fName);
        setLastName(lName);
        setEmailAddress(emailAddress);
        setAge(age);
        setDaysToComplete(numDays);
        setDegree(degree);
    };

    Student::~Student() {};

    //* sets
    void Student::setStudentID(string ID) {
        ID = ID;
    };
    void Student::setFirstName(string fName) {
        fName = fName;
    };
    void Student::setLastName(string lName) {
        lName = lName;
    };
    void Student::setEmailAddress(string emailAddress) {
        emailAddress = emailAddress;
    };
    void Student::setAge(int age) {
        age = age;
    };
    void Student::setDaysToComplete(int* numDays) {
        for (int i = 0; i < 3; i++) {
            numDays[i] = numDays[i];
        }
    }
    void Student::setDegree(Degree degree) { degree = degree; }
    
    
  
   
    //* Gets
    string Student::getStudentId() const {
        return ID;
    };
    string Student::getFirstName() const {
        return fName;
    };
    string Student::getLastName() const {
        return lName;
    };
    string Student::getEmailAddress() const {
        return emailAddress;
    };
    int Student::getAge() const {
        return age;
    };
    int  Student::getDaysToComplete() const {
        return daysToComplete;
    };

    Degree Student::getDegree() {
        return degree;
    };
    
    void Student::print() {
        string degree;

        if (getDegree() == 0)
            degree = "Security";
        else if (getDegree() == 1)
            degree = "Network";
        else if (getDegree() == 2)
            degree = "Software";

        cout << getStudentId() << "\t"
            << "First Name: " << getFirstName() << "\t"
            << "Last Name: " << getLastName() << "\t"
            << "Email Address: " << getEmailAddress() << "\t"
            << "Age: " << getAge() << " "
            << "Days In Course: { " << getDaysToComplete() << ", "
            << getDaysToComplete() << ", " << getDaysToComplete() << " } \t"
            << "Degree Program: " << getDegree()
            << endl;
    };
       
    
    
    
    
    
    
    
      















    