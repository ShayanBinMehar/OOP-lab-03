#include <iostream>

using namespace std;

class plannar {

    string months[30][12];

public:

    void addTask() {

        int month, day;
        string task;
        cout << "Enter the month to enter task" << endl;
        cin >> month;

        cout << "Enter the day of the month to enter task" << endl;
        cin >> day;

        cout << "Enter the task" << endl;
        cin >> task;

        months[day-1][month-1] = task;
    }
    void getTask() {

        int month, day;
        string task;
        cout << "Enter the month to get task" << endl;
        cin >> month;

        cout << "Enter the day of the month to get task" << endl;
        cin >> day;

        cout << "Task is *" << months[day-1][month-1] << "* of date "<< day << "/" << month << "/0000" << endl;            
    }
    void removeTask() {

        int month, day;
        string task;
        cout << "Enter the month to remove task" << endl;
        cin >> month;

        cout << "Enter the day of the month to remove task" << endl;
        cin >> day;

        months[day-1][month-1] = "";
    }
    void getCompleteRecord() {

        for(int x = 0; x < 12; x++) {

            cout << "Record for " << x+1 << " month" << endl;
            cout << "............................." << endl;
            
            for(int y = 0; y < 30; y++) {
                
                cout << "day " << y+1 << " ";
                cout << months[y][x] << endl; 
            }
        }
    }
};

int main() {
    plannar p1;
    p1.addTask();
    p1.addTask();
    p1.addTask();
    p1.getTask();
    p1.removeTask();
    p1.getCompleteRecord();
    

}