#include <iostream>
using namespace std;

int main() {
    int dayToday, monthToday, yearToday;
    int dayBirthday, monthBirthday, yearBirthday;

    // Get today's date
    cout << "Enter today's date (dd mm yyyy): ";
    cin >> dayToday >> monthToday >> yearToday;

    // Get birthday
    cout << "Enter your birth date (dd mm yyyy): ";
    cin >> dayBirthday >> monthBirthday >> yearBirthday;

    // Check if today is the person's birthday
    if (dayToday == dayBirthday && monthToday == monthBirthday) {
        cout << "Happy Birthday!" << endl;
    } else {
        cout << "Today is not your birthday." << endl;
    }

    return 0;
}