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
	
virtual ~Person() = 0;
	
std::string getFirstName()const;
    
/**
 * @param value
 */
void setFirstName(const std::string& value);
    
std::string getLastName()const;
    
/**
 * @param value
 */
void setLastName(const std::string& value);
    
float getAge() const;
    
/**
 * @param value
 */
void setAge(float value);
    
void SaysHello() const;
    
virtual std::string ToString();
	
private: 
    float m_age;
    std::string m_firstName;
    std::string m_lastName;
};

#endif //_PERSON_H