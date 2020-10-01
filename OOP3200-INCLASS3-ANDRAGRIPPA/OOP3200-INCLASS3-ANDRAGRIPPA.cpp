/*************************************
 *Name: Andre Agrippa
 *Class: OOP3200
 *Date: 09/30/2020
 *Lesson 4 OOP 3200
 *
 ************************************/

#include <iostream>
#include <vector>
#include "Person.h"
#include "Professor.h"
#include "Student.h"


int main()
{
	//Person is abstract so we can't instantiate an object
	
	Student student = Student("Andre", "Agrippa", 21.0f, "AAA123");
	student.SaysHello();
	//student.Studies();

	std::cout << student.ToString() << std::endl;

	Professor professor = Professor("Jim", "Black", 32.5f, "JBJB123456");
	professor.SaysHello();
	professor.Teaches();

	std::cout << professor.ToString() << std::endl;
	
	/*Dynamic Memory Allocation with Obejects*/

	std::vector<Person*> people;
	people.push_back(new Professor("Dy", "Namic", 10.0F, "MEMORYALLOCA123"));
	people[0]->SaysHello();
	std::cout << people[0]->ToString() << std::endl;

	people.push_back(new Student("Dre", "Whew", 10.0F, "DRDRE123"));
	people[1]->SaysHello();
	std::cout << people[1]->ToString() << std::endl;
}

//end main

