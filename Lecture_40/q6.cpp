#include <iostream>
#include <string>
using namespace std;
template <typename T>
class ProgrammingLanguage
{
public:
    ProgrammingLanguage(const string &name) : languageName(name) {}
    void executeProgram(const string &program)
    {
        cout << languageName << " program output: " << execute(program) << endl;
    }
    virtual string execute(const string &program) = 0;

protected:
    string languageName;
};
template <typename T>
class CPlusPlus : public ProgrammingLanguage<T>
{
public:
    CPlusPlus() : ProgrammingLanguage<T>("C++") {}
    string execute(const string &program) override
    {
        return program;
    }
};

template <typename T>
class Java : public ProgrammingLanguage<T>
{
public:
    Java() : ProgrammingLanguage<T>("Java") {}
    string execute(const string &program) override
    {
        return program;
    }
};

template <typename T>
class Python : public ProgrammingLanguage<T>
{
public:
    Python() : ProgrammingLanguage<T>("Python") {}

    string execute(const string &program) override
    {
        return program;
    }
};

int main()
{
    string cppProgram, javaProgram, pythonProgram;
    getline(cin, cppProgram);
    getline(cin, javaProgram);
    getline(cin, pythonProgram);

    CPlusPlus<string> cpp;
    Java<string> java;
    Python<string> python;

    cpp.executeProgram(cppProgram);
    java.executeProgram(javaProgram);
    python.executeProgram(pythonProgram);

    return 0;
}
