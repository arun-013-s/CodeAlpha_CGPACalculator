📌 Project Overview

The CGPA Calculator is a simple C++ console-based application developed as part of the CodeAlpha C++ Programming Internship.

The program calculates the student's CGPA based on the grades and credit hours of multiple courses.

🎯 Features
Accepts the number of courses.
Accepts course name, grade, and credit hours.
Converts grades into corresponding grade points.
Calculates weighted grade points.
Calculates total credit hours.
Calculates the final CGPA.
Displays individual course details and the final CGPA.
Validates invalid grade inputs.
🛠️ Technologies Used
Programming Language: C++
Application Type: Console Application
Compiler: Any standard C++ compiler
📊 Grade Point System
## 📊 Grade Point System

| Grade | Grade Point |
|-------|-------------|
| A     | 10          |
| B     | 8           |
| C     | 7           |
| D     | 6           |
| E     | 5           |
| F     | 0           |

🧮 CGPA Calculation

The CGPA is calculated using:

CGPA = Total Weighted Grade Points / Total Credit Hours

Where:

Weighted Grade Points = Grade Point × Credit Hours

▶️ How to Run
Clone or download this repository.
Open the project in a C++ IDE or code editor.
Compile the CGPA_Calculator.cpp file.
Run the program.
Enter the required course details.
The program will display the final CGPA.
Using g++
g++ CGPA_Calculator.cpp -o CGPA_Calculator
./CGPA_Calculator
📂 Project Structure
CodeAlpha_CGPACalculator/
│
├── CGPA_Calculator.cpp
└── README.md
💡 Sample Calculation

For a student with:

4-credit course with Grade A → 10 × 4 = 40
3-credit course with Grade A → 10 × 3 = 30
3-credit course with Grade B → 8 × 3 = 24
2-credit course with Grade B → 8 × 2 = 16

Total Grade Points = 110

Total Credit Hours = 12

CGPA = 110 / 12 = 9.17

📚 Learning Outcomes

Through this project, I practiced:

C++ functions
Arrays
Loops
Conditional statements
Switch statements
User input and output
Basic calculations
Input validation
Console-based application development
👨‍💻 Internship

Program: C++ Programming Internship
Organization: CodeAlpha
Task: CGPA Calculator

📌 Author

Arun S

This project was developed for educational and internship purposes.
