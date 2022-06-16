#include <iostream>

#include <string>

#include "roster.h"

#include "student.h"

using namespace std;
   


//Print out info
   int main() {
       cout << "C867: Scripting And Programming Applications" << endl;
       cout << "Langauge: C++" << endl;
       cout << "Student ID: 005636706" << endl;
       cout << "Anthony Harris" << endl; 
      
       Roster classRoster;
   
       //Student data table
       const string studentData[] = 
       {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Anthony,Harris,aha1278@wgu.edu,26,30,14,22,SOFTWARE"

       
            
           

       };
       
      
       for (int i = 0; i < 5; i++)
           classRoster.parse(studentData[i]);
       
       for (int i = 0; i < sizeof(classRoster.classRosterArray) / sizeof(classRoster.classRosterArray[i]); i++)
           classRoster.printAll();
       cout << endl;
      

       classRoster.printInvalidEmails();
       cout << endl;

       for (int i = 0; i < sizeof(classRoster.classRosterArray) / sizeof(classRoster.classRosterArray[i]); i++) {
           classRoster.printDaysToComplete(classRoster.classRosterArray[i]->getStudentId());
       }
       cout << endl;

       classRoster.printByDegree(SOFTWARE);
       classRoster.remove("A3");
       classRoster.printAll();
       classRoster.remove("A3");


	   return 0;
   }


