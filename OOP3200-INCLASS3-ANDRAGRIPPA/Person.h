/**
 * Project OOP3200-F2020-LESSON4
 * @author Andre Agrippa
 * @version 1.0
 */


#ifndef _PERSON_H
#define _PERSON_H

class Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 */
void Person(string first_name, string last_name, float age);
    
string getFirstName();
    
/**
 * @param value
 */
void setFirstName(string value);
    
string getLastName();
    
/**
 * @param value
 */
void setLastName(string value);
    
float getAge();
    
/**
 * @param value
 */
void setAge(float value);
    
void SaysHello();
    
string ToString();
private: 
    float m_age;
    string m_firstName;
    string m_lastName;
};

#endif //_PERSON_H