/**
 * Project OOP3200-F2020-LESSON4
 * @author Andre Agrippa
 * @version 1.0
 */

#pragma once
#ifndef _STUDENT_H
#define _STUDENT_H

#include "Person.h"
#include <string>


class Student: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param student_id
 */
Student(std::string first_name, std::string last_name, float age, std::string student_id);
    
std::string getStudentID() const;
    
/**
 * @param value
 */
void setStudentID(std::string value);
void Studies() const;

void Studies();
    
std::string ToString() override;

	
private: 
    std::string m_studentID;
};

#endif //_STUDENT_H