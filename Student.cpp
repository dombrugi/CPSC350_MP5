#include "Student.h"

//constructor
Student::Student(){
    m_ID = 0;
    m_name = " ";
    m_standing = " ";
    m_major = " ";
    m_GPA = 0.0;
    m_advisorID = 0;
}

//overloaded constructor
Student::Student(int uniqueID, string name, string gradeLevel, string major, double GPA, int advisor){
    m_ID = uniqueID;
    m_name = name;
    m_standing = gradeLevel;
    m_major = major;
    m_GPA = GPA;
    m_advisorID = advisor;
}

//destructor
Student::~Student(){

}

//returns a student's ID
int Student::getID(){
    return m_ID;
}

//sets a student's ID
void Student::setID(int ID){
    m_ID = ID;
}

//gets a student's advisor ID
int Student::getAdvisorID(){
    return m_advisorID;
}

//sets a student's advisor ID
void Student::setAdvisorID(int temp){
    m_advisorID = temp;
}

//print's a student info
void Student::printInfo(){
    cout << "ID Number: " << m_ID << endl;
    cout << "Name: " << m_name << endl;
    cout << "Standing: " << m_standing << endl;
    cout << "Major: " << m_major << endl;
    cout << "GPA: " << m_GPA << endl;
    cout << "Advisor ID: " << m_advisorID << endl;
    cout << endl;
}

//stores a student's info in a string for outputting to a file
string Student::storeInfo(){
    string result;
    result += "ID Number: " + to_string(m_ID) + "\n";
    result += "Name: " + m_name + "\n";
    result += "Standing: " + m_standing + "\n";
    result += "Major: " + m_major + "\n";
    result += "GPA: " + to_string(m_GPA) + "\n";
    result += "Advisor ID: " + to_string(m_advisorID) + "\n";
    result += "\n";
    return result;
}