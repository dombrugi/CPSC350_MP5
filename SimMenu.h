#ifndef SIMMENU_H
#define SIMMENU_H


#include "LazyBST.h"

class SimMenu{
    public:
        SimMenu();
        virtual~ SimMenu();
        void simulateMenu();
        void addStudent();
        void addFaculty();
    private:
        int studentID;
        int facultyID;
        LazyBST<Student*> students;
        LazyBST<Faculty> facultyMembers;
};

#endif