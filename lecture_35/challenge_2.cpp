#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Course
{
public:
    string name;
    int grade;
    Course(string name, int grade) : name(name), grade(grade) {}
};

class Student
{
public:
    string name;
    vector<Course> courses;

    Student(string name) : name(name) {}

    void add_course(string name, int grade)
    {
        Course course(name, grade);
        courses.push_back(course);
    }

    void display_info()
    {
        cout << "Name: " << name << "\nCourses:\n";
        for (const Course &course : courses)
        {
            cout << "  " << course.name << ": " << course.grade << "\n";
        }
    }
};

int main()
{
    std::string student_name;
    int num_courses;

    // Input
    getline(std::cin, student_name);
    cin >> num_courses;
    cin.ignore(); // Consume the newline after num_courses

    // Creating student object
    Student *student = new Student(student_name);

    // Adding courses
    for (int i = 0; i < num_courses; ++i)
    {
        string course_name;
        int course_grade;
        getline(std::cin, course_name);
        cin >> course_grade;
        cin.ignore(); // Consume the newline after course_grade

        student->add_course(course_name, course_grade);
    }

    // Output
    student->display_info();

    return 0;
}