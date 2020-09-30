/**
 * Project OOP3200-F2020-LESSON4
 * @author Andre Agrippa
 * @version 1.0
 */

#pragma once
#ifndef _PERSON_H
#define _PERSON_H
#include <string>

class Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 */
Person(std::string first_name, std::string last_name, float age);
    
std::string getFirstName();
    
/**
 * @param value
 */
void setFirstName(std::string value);
    
std::string getLastName();
    
/**
 * @param value
 */
void setLastName(std::string value);
    
float getAge();
    
/**
 * @param value
 */
void setAge(float value);
    
void SaysHello();
    
virtual std::string ToString() = 0;
	
private: 
    float m_age;
    std::string m_firstName;
    std::string m_lastName;
};

#endif //_PERSON_H