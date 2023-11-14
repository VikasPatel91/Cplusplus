#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int age;
    int numCourses;
    string *courses;

public:
    // Dynamic constructor
    Student(const string &studentName, int studentAge, int num) : name(studentName), age(studentAge), numCourses(num)
    {
        courses = new string[numCourses];
    }

    // Destructor to deallocate memory
    ~Student()
    {
        delete[] courses;
    }

    // Setter method for courses
    void setCourses(const string *courseNames)
    {
        for (int i = 0; i < numCourses; ++i)
        {
            courses[i] = courseNames[i];
        }
    }

    // Display student details
    void displayDetails() const
    {
        cout << "Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Courses:";
        for (int i = 0; i < numCourses; ++i)
        {
            cout << " " << courses[i];
        }
        cout << endl;
    }

    // Check if the student is enrolled in a specific course
    bool isEnrolled(const string &courseName) const
    {
        for (int i = 0; i < numCourses; ++i)
        {
            if (courses[i] == courseName)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    string name;
    int age;
    int numCourses;

    // Input student information
    getline(cin, name);
    cin >> age >> numCourses;
    cin.ignore(); // Consume newline character

    // Input course names
    string *courseNames = new string[numCourses];
    for (int i = 0; i < numCourses; ++i)
    {
        getline(cin, courseNames[i]);
    }

    // Create a student object
    Student student(name, age, numCourses);
    student.setCourses(courseNames);

    // Display student details
    student.displayDetails();

    // Check if the student is enrolled in a specific course
    string checkCourse;
    getline(cin, checkCourse);
    cout << "Is the student enrolled in " << checkCourse << "? " << (student.isEnrolled(checkCourse) ? "Yes" : "No") << endl;

    // Deallocate memory
    delete[] courseNames;

    return 0;
}
