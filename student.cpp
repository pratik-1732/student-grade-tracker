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

    // calculate total marks and percentage before displaying info
    void prepareInfo() const
    {
        const_cast<student *>(this)->calculateTotalAndPercentage();
    }
};

// adding new student
student addStudent(vector<student> &students, string fullName, string id)
{
    student newStudent(fullName, id);
    students.push_back(newStudent);
    return newStudent;
}

// removing student
void removeStudent(vector<student> &students, const string &id)
{
    auto it = remove_if(students.begin(), students.end(), [&](student &student)
                        { return student.getId() == id; });
    if (it != students.end())
    {
        students.erase(it, students.end());
        cout << "Student with ID " << id << " removed successfully." << endl;
    }
    else
    {
        cout << "Student with ID " << id << " not found." << endl;
    }
}

// display a specific student's information by id
void displayStudent(const vector<student> &students, const string &id)
{
    for (const auto &student : students)
    {
        if (student.getId() == id)
        {
            student.prepareInfo();
            student.displayInfo();
            return;
        }
    }
    cout << "Student with ID " << id << " not found." << endl;
}

// display the top three students based on percentage
bool compare(const student &a, const student &b)
{
    return a.getPercentage() > b.getPercentage();
}
void topThreeStudents(vector<student> &students)
{
    for (auto &student : students)
    {
        student.prepareInfo();
    }

    sort(students.begin(), students.end(), compare);

    int count = 0;
    cout << "Top Three Students Are " << endl;
    for (const auto &student : students)
    {
        if (count < 3)
        {
            student.displayInfo();
            count++;
        }
        else
        {
            break;
        }
    }
    cout << "Congratulations on your outstanding performance! Your hard work and dedication have truly paid off, and you are an inspiration to your classmates." << endl;
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
        cout << "1. Add New Student" << endl;
        cout << "2. Top 3 students in class" << endl;
        cout << "3. Student Info" << endl;
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
            topThreeStudents(students);
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

            cout << "Enter student's Id to remove: ";
            cin >> id;
            removeStudent(students, id);
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