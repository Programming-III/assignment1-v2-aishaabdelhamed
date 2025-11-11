#ifndef COURSE_H
#define COURSE_H

class Course{
    private:
   string courseCode;
   string coursename;
   int maxStudents;
   Student*student;
   int currentStudents;
    public:
        void addStudent(const Student& s);
        void displayCourseInfo();
};


#endif 














#endif
