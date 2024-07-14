# Student Grade Tracker

## Overview

The Student Grade Tracker is a C++ program designed to manage and analyze grades for a class. It allows users to input student information including name and ID, along with their grades for assignments and exams. The program calculates overall grades, class averages, performs basic statistical analysis, and displays the top three students in the class based on their grades.

## Features

- **Input Student Information:** Users can input student details including name, ID, and grades for assignments and exams.
- **Calculate Overall Grades:** The program computes overall grades for each student based on their assignment and exam scores.
- **Class Averages:** Calculates and displays averages for assignments, exams, and overall grades across all students.
- **Statistical Analysis:** Provides basic statistical analysis such as minimum, maximum, and average grades.
- **Display Top Students:** Identifies and displays the top three students in the class based on their overall grades.

## Installation and Usage

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/your-username/student-grade-tracker.git
   ```

2. **Navigate to the Project Directory:**
   ```bash
   cd student-grade-tracker
   ```

3. **Compile the Program:**
   Ensure you have a C++ compiler installed that supports C++11 or higher.
   ```bash
   g++ -o student_grade_tracker main.cpp
   ```

4. **Run the Program:**
   ```bash
   ./student_grade_tracker
   ```

5. **Follow On-Screen Instructions:**
   - Enter the number of students.
   - Input each student's name, ID, grades for assignments, and exams as prompted.
   - View the calculated class averages, statistical analysis, and top three students.

## Example Output

Here's an example of what the program output might look like:

```plaintext
Welcome to Student Grade Tracker!

Enter number of students: 3

Student 1:
Name: John Doe
ID: 101
Enter grades for assignments (out of 100): 90 85 95 88
Enter grades for exams (out of 100): 85 90

Student 2:
Name: Jane Smith
ID: 102
Enter grades for assignments (out of 100): 95 92 88 90
Enter grades for exams (out of 100): 88 85

Student 3:
Name: Michael Johnson
ID: 103
Enter grades for assignments (out of 100): 85 88 92 90
Enter grades for exams (out of 100): 90 92

Class Average:
- Assignments: 90.00
- Exams: 88.00
- Overall Grades: 88.33

Statistical Analysis:
- Minimum Overall Grade: 85.00
- Maximum Overall Grade: 90.33
- Average Overall Grade: 88.00

Top Students:
1. Jane Smith (ID: 102) - Overall Grade: 90.33
2. Michael Johnson (ID: 103) - Overall Grade: 88.67
3. John Doe (ID: 101) - Overall Grade: 87.00
```

## Contribution

Contributions are welcome! Here are some ideas for contributions:

- Implement more advanced statistical analysis features.
- Enhance user interface and input validation.
- Add sorting options for displaying student information.
- Improve error handling and edge case scenarios.

If you'd like to contribute, please fork the repository and create a pull request. Feel free to open an issue to discuss any new features or improvements.
