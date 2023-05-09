#include "Faculty.h"

//constructor
Faculty::Faculty(){
    m_ID = 0;
    m_name = " ";
    m_position = " ";
    m_department = " ";
    studentIds = new DblList<int>();
}

//overloaded constructor 
Faculty::Faculty(int uniqueID, string name, string staffLevel, string department){
    m_ID = uniqueID;
    m_name = name;
    m_position = staffLevel;
    m_department = department;
    studentIds = new DblList<int>();
}

//destructor
Faculty::~Faculty(){
    // delete studentIds; for some reason when I do this it creates a seg fault, that's why I commented it out
}

//prints the faculty member's info 
void Faculty::printInfo(){
    cout << "ID Number: " << m_ID << endl;
    cout << "Name: " << m_name << endl;
    cout << "Position: " << m_position << endl;
    cout << "Department: " << m_department << endl;
    cout << "List of student IDs: " << endl;
    for(int i = 0; i < studentIds->size(); i++){
        if(i != studentIds->size() - 1){
            cout << studentIds->get(i) << ", ";
        } else {
            cout << studentIds->get(i) << "." << endl;
        }
    }
    cout << endl;
}

//stores the faculty member's info for outputting to the file
string Faculty::storeInfo(){
    string result;
    result += "ID Number: " + to_string(m_ID) + "\n";
    result += "Name: " + m_name + "\n";
    result += "Position: " + m_position + "\n";
    result += "Department: " + m_department + "\n";
    result += "List of student IDs: ";
    for(int i = 0; i < studentIds->size(); i++){
        if(i != studentIds->size() - 1){
            result += to_string(studentIds->get(i)) + ", ";
        } else {
            result += to_string(studentIds->get(i)) + "." + "\n";
        }
    }
    result += "\n";
    return result;
}

//gets the ID of the faculty member
int Faculty::getID(){
    return m_ID;
}

//returns the list of student IDs
DblList<int>* Faculty::getAdvisees(){
    return studentIds;
}

//adds a student ID to the list of IDs
void Faculty::addAdvisee(int studentID){
    studentIds->addBack(studentID);
}
