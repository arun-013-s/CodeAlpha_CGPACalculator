#include <iostream>
#include <iomanip>
using namespace std;

float getGradePoint(char grade)
{
    switch (grade)
    {
        case 'A':
        case 'a':
            return 10.0;

        case 'B':
        case 'b':
            return 8.0;

        case 'C':
        case 'c':
            return 7.0;

        case 'D':
        case 'd':
            return 6.0;

        case 'E':
        case 'e':
            return 5.0;

        case 'F':
        case 'f':
            return 0.0;

        default:
            return -1.0;
    }
}

int main()
{
    int n;

    cout << "===== CGPA CALCULATOR =====\n";

    cout << "Enter number of courses: ";
    cin >> n;

    string courseName[20];
    char grade[20];
    float credit[20], gradePoint[20], weightedPoint[20];

    float totalCredits = 0;
    float totalGradePoints = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter course name: ";
        cin >> courseName[i];

        cout << "Enter grade (A/B/C/D/E/F): ";
        cin >> grade[i];

        gradePoint[i] = getGradePoint(grade[i]);

        if (gradePoint[i] == -1)
        {
            cout << "Invalid grade! Please enter a valid grade.\n";
            i--;
            continue;
        }

        cout << "Enter credit hours: ";
        cin >> credit[i];

        weightedPoint[i] = gradePoint[i] * credit[i];

        totalCredits += credit[i];
        totalGradePoints += weightedPoint[i];
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n===== COURSE DETAILS =====\n";

    cout << left << setw(15) << "Course"
         << setw(10) << "Grade"
         << setw(15) << "Credits"
         << "Grade Points" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << left << setw(15) << courseName[i]
             << setw(10) << grade[i]
             << setw(15) << credit[i]
             << weightedPoint[i] << endl;
    }

    cout << "\nTotal Credits      : " << totalCredits;
    cout << "\nTotal Grade Points : " << totalGradePoints;
    cout << "\nFinal CGPA         : "
         << fixed << setprecision(2) << cgpa << endl;

    return 0;
}
