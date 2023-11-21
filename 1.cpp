#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<limits>
#include<string>

using namespace std;

struct Student {
    int id;
    string name;
    char sec;
    int total;
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int highTotal = 0;
        int highId = 0;
        string highestname;
        char highsec;
        for (int i = 0; i < 3; i++) {
            Student student;
            cin >> student.id >> student.name >> student.sec >> student.total;
            if (student.total > highTotal || (student.total == highTotal && highId > student.id)) {
                highTotal = student.total;
                highId = student.id;
                highestname = student.name;
                highsec = student.sec;
            }
        }
        cout << highId << " " << highestname << " " << highsec << " " << highTotal << endl;
    }

    return 0;
}