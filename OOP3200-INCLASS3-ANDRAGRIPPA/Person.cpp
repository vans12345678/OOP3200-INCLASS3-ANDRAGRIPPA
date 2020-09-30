/**
 * Project OOP3200-F2020-LESSON4
 * @author Andre Agrippa
 * @version 1.0
 */


#include "Person.h"


#include <iostream>
#include <ostream>

/**
 * Person implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 */
Person::Person(std::string first_name, std::string last_name, float age) {

}

/**
 * @return std::string
 */
std::string Person::getFirstName()const  {
    return m_firstName;
}

/**
 * @param value
 */
void Person::setFirstName(const std::string& value) {
    m_firstName = value;
}

/**
 * @return std::string
 */
std::string Person::getLastName() const{
    return m_lastName;
}

/**
 * @param value
 */
void Person::setLastName(const std::string& value) {
    m_lastName = value;
}

/**
 * @return float
 */
float Person::getAge() {
    return m_age;
}

/**
 * @param value
 */
void Person::setAge(const float value) {
    m_age = value;
}

/**
 * @return void
 */
void Person::SaysHello() {
    std::cout << getFirstName() << " says Hello!" << std::endl;
}

/**
 * @return std::string
 */
std::string Person::ToString() {
    std::string output_string;

    output_string += "----------------------------------------------------\n";
    output_string += "First Name    :" + getFirstName();
    output_string += "Last Name     :" + getLastName();
    output_string += "Age           :" + std::to_string(getAge()) + "\n";
    output_string += "----------------------------------------------------\n\n";
    return std::string();
}