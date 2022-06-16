#pragma once


#include <stdio.h>
#include <string>
#include "student.h"

using namespace std;


class Roster {
  public:
	Student* classRosterArray[5] = { nullptr, nullptr, nullptr, nullptr, nullptr };
	    void add(string ID, string fName, string lName, string emailAddress,
		int age, int daysToComplete1, int daysToComplete2, int daysToComplete3, Degree degree);
	    void remove(string ID);
		void printAll();
		void printDaysToComplete(string ID);
		void printInvalidEmails();
		void printByDegree(int degree);

		void parse(string studentData);
		~Roster();
};
