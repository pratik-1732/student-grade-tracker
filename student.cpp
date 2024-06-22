#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    string fullName;
    string id;
    map<string, pair<int, int>> subjects;
    int marksObtained;
    int totalMarks;
    double percent;

public:
    student(string fullName, string id) : fullName(fullName), id(id), marksObtained(0), totalMarks(0), percent(0.00) {}

    // adding marks for subject
    void addSubjectMarks(string subject, int marks, int total)
    {
        subjects[subject] = make_pair(marks, total);
    }

    // calculating total marks and percentage
    void calculateTotalAndPercentage()
    {
        marksObtained = 0;
        totalMarks = 0;

        for (const auto &subject : subjects)
        {
            marksObtained += subject.second.first;
            totalMarks += subject.second.second;
        }

        percent = (static_cast<double>(marksObtained) / totalMarks) * 100;
    }

    // display student information
    void displayInfo() const
    {
        cout << "Full Name: " << fullName << ", Id: " << id << endl;
        cout << "Subjects and Marks:" << endl;
        for (const auto &subject : subjects)
        {
            cout << "  " << subject.first << ": " << subject.second.first << "/" << subject.second.second << endl;
        }
        cout << "Total Marks: " << marksObtained << "/" << totalMarks << endl;
        cout << "Percentage: " << percent << "%" << endl;
    }

    string getId() const
    {
        return id;
    }

    double getPercentage() const
    {
        return percent;
    }

    // calculating total marks and percentage before displaying info
    void prepareInfo()
    {
        calculateTotalAndPercentage();
    }
    void displayAdd();
};

void student::displayAdd()
{
    cout << "Enter new student information" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Enter full name: ";
    cin >>
}
// adding new student

student addStudent(vector<student> &students, string fullName, string id)
{
}
int main()
{
    vector<student> students;
    string fullName, id, subject;
    int marks, totalMarks, numSubjects;
    int choice;

    while (true)
    {
        cout << "------------------------------------" << endl;
        cout << "Student Management System" << endl;
        cout << "------------------------------------" << endl;
        cout << "1. Student Grades" << endl;
        cout << "2. Top 3 students in class" << endl;
        cout << "3. Add New Student" << endl;
        cout << "4. Delete Existing Student" << endl;
        cout << "5. Exit" << endl;
        cout << "------------------------------------" << endl;

        cout << "Enter Your Choice (1/2/3/4/5)- ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter student's full name: ";
            cin.ignore();
            getline(cin, fullName);

            cout << "Enter student's Id: ";
            cin >> id;

            student newStudent = addStudent(students, fullName, id);

            cout << "Enter number of subjects: ";
            cin >> numSubjects;

            for (int i = 0; i < numSubjects; i++)
            {
                cout << "Enter subject name: ";
                cin >> subject;

                cout << "Enter marks obtained: ";
                cin >> marks;

                cout << "Enter total marks: ";
                cin >> totalMarks;

                newStudent.addSubjectMarks(subject, marks, totalMarks);
            }
            break;
        }
        case 2:
        {
            cout << "Enter student's Id to remove: ";
            cin >> id;
            removeStudent(students, id);
            break;
        }
        case 3:
        {
            cout << "Enter student's ID to display: ";
            cin >> id;
            displayStudent(students, id);
            break;
        }
        case 4:
        {
            displayTopThreeStudents(students);
            break;
        }
        case 5:
        {
            return 0;
        }
        default:
        {
            cout << "Invalid choice. Please try again...." << endl;
            break;
        }
        }
    }

    return 0;
}