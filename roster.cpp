#include <iostream>

#include <string>

#include <sstream>

#include "roster.h"

#include "degree.h"

using namespace std;
Roster classRoster;
    
    void Roster::parse(string studentData) 
    
    {
      
        string input = studentData;
        istringstream ss(input);
        string token;
        string tempholder[9];

        int x = 0; 
        while (getline(ss, token, ',')) 
        {
            tempholder[x] = token; x += 1;
        }
    
        Degree theDegree; 
        if (tempholder[8] == "NETWORK") 
        {
            theDegree = NETWORK;
        }
        else if (tempholder[8] == "SECURTIY") 
        {
            theDegree = SECURITY;
        }
        else 
        {
            theDegree = SOFTWARE;
        }
    
        
    classRoster.add(tempholder[0], tempholder[1], tempholder[2], tempholder[3], 
    std::stoi(tempholder[4]), std::stoi(tempholder[5]), std::stoi(tempholder[6]), 
    std::stoi(tempholder[7]), theDegree);
    }
    
   







   // add 
    void Roster::add(string ID, string fName, string lName, string emailAddress,
        int age, int daysToComplete1, int daysToComplete2, int daysToComplete3, Degree degree) {}

        
    

 

   //print
    void Roster::printAll()
    {
        for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[i]); i++) {
            classRosterArray[i]->print();
        } 
    }

    void Roster::printByDegree(int degree)
    {
    for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[i]); i++) {
        if (classRosterArray[i]->getDegree() == degree) {
            classRosterArray[i]->print();
        }
    }
}

    void Roster::printDaysToComplete(string ID)
    {
    float avg = 0;
    int max = 3;
    for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[i]); i++) {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getStudentId() == ID) {
            int const daysToComplete = classRosterArray[i]->getDaysToComplete();
            for (int x = 0; x < max; x++) {
                avg += daysToComplete;
            }

            cout << "Student " << classRosterArray[i]->getStudentId() << "'s average number of days in the three courses is " << (avg / max) << "\n";
            break;
        }
    }
}

    void Roster::printInvalidEmails()
    {
    for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[i]); i++) {
        string email = classRosterArray[i]->getEmailAddress();
        bool foundAt = false;
        bool foundPeriod = false;
        bool foundSpace = false;
       
        for (char& charIndex : email) {
            if (charIndex == '@') {
                foundAt = true;
            }
            if (charIndex == '.') {
                foundPeriod = true;
            }
            if (charIndex == ' ') {
                foundSpace = true;
            }
        }
        if (foundAt == false || foundPeriod == false || foundSpace == true) {
            std::cout << classRosterArray[i]->Student::getEmailAddress() << std::endl;
        }
    }
    }


    //remove
    void Roster::remove(string ID)
    {
    bool studentRemoved = false;
    for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[i]); i++) {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getStudentId() == ID) {
            classRosterArray[i] = nullptr;
            studentRemoved = true;
            
        }
    }

    if (studentRemoved == false) {
        cout << "ERROR: Student ID '" << ID << "' does not exist \n";
    }
    }

    Roster::~Roster() {
    
    
    }











