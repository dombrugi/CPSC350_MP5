#ifndef FACULTY_H
#define FACULTY_H

#include "DblList.h"

#include <iostream>
using namespace std;

class Faculty{
    public:
        Faculty();
        Faculty(int uniqueID, string name, string staffLevel, string department);
        virtual~ Faculty();
        void printInfo();
        string storeInfo();
        void addAdvisee(int studentID);
        int getID();
        DblList<int>* getAdvisees();
        //overloaded operators for checking greater than or less than
        bool operator>(Faculty other){
            return m_ID > other.m_ID;
        }
        bool operator<(Faculty other){
            return m_ID < other.m_ID;
        }
    private:
        int m_ID;
        string m_name;
        string m_position;
        string m_department;
        DblList<int>* studentIds;
};

#endif