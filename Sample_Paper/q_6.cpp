// Q6. Consider a class 'Student' which contains the marks of 3 subjects. Develop a program in C++ to find the average marks of these 3 subjects for N students by using the concept of array of objects.
#include <iostream>
using namespace std;
class Student
{
    int maths;
    int science;
    int english;

public:
    Student(int m, int s, int e) : maths(m), science(s), english(e){};
    void avg()
    {
        int cal = (maths + science + english) / 3;
        cout << "Average : " << cal << endl;
    }
};
int main()
{
    int n;
    int maths;
    int science;
    int english;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> maths >> science >> english;
        Student stu(maths, science, english);
        stu.avg();
    }
    return 0;
}