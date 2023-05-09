#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student{
    public:
        Student();
        Student(int uniqueID, string name, string gradeLevel, string major, double GPA, int advisor);
        virtual~ Student();
        int getID();
        void setID(int ID);
        void printInfo();
        string storeInfo();
        int getAdvisorID();
        void setAdvisorID(int temp);
        //overloaded operators for greater than and less than
        bool operator>(Student other){
            return m_ID > other.m_ID;
        }
        bool operator<(Student other){
            return m_ID < other.m_ID;
        }
    private:
        int m_ID;
        string m_name;
        string m_standing;
        string m_major;
        double m_GPA;
        int m_advisorID;
};

#endif