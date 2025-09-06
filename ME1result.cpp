#include<iostream>
using namespace std;

int main() {
    string name;
    int rollNo, semester;
    string institution = "Amritsar Group of Colleges";
    int marks[5];
    int total = 0;
    float percent;
    string grade;

    // Input student details
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Roll No: ";
    cin >> rollNo;
    cout << "Enter Semester: ";
    cin >> semester;

    // Input marks
    cout << "Enter marks out of 100 for 5 subjects:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    // Calculate percentage
    percent = (float)total / 5;

    // Determine grade
    if(percent >= 95) {
        grade = "A+";
    } else if(percent >= 85 && percent <= 94) {
        grade = "A";
    } else if(percent >= 80 && percent <= 84) {
        grade = "B+";
    } else if(percent >= 75 && percent <= 79) {
        grade = "B";
    } else if(percent >= 60 && percent <= 74) {
        grade = "C";
    } else {
        grade = "Fail";
    }

    // Output
    cout << "\n ---Student Result---" << endl;
    cout << "Name- " << name << endl;
    cout << "Roll no.- " << rollNo << endl;
    cout << "Semester- " << semester << endl;
    cout << "Institution- " << institution << endl;

    cout << "Marks in each subject:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": " << marks[i] << endl;
    }

    cout << "Total marks- " << total << endl;
    cout << "Percent- " << percent << "%" << endl;
    cout << "Grade- " << grade << endl;

    return 0;
}