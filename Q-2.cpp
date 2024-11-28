#include <iostream>
#include <iomanip> 

using namespace std;


struct Student {
    int roll_no;
    string name;
    int chem_m;
    int maths_m;
    int phy_m;
};

int main() {
    Student students[5]; 

   
    for (int i = 0; i < 5; i++) {
        cout << "Enter details of Student " << i + 1 << ":" << endl;
        cout << "Roll no => ";
        cin >> students[i].roll_no;
        cin.ignore(); 
        cout << "Name => ";
        getline(cin, students[i].name);
        cout << "Chemistry => ";
        cin >> students[i].chem_m;
        cout << "Mathematics => ";
        cin >> students[i].maths_m;
        cout << "Physics => ";
        cin >> students[i].phy_m;
    }

   
    cout << "\nMark Sheets:\n";
    for (int i = 0; i < 5; i++) {
        int total = students[i].chem_m + students[i].maths_m + students[i].phy_m;
        float percentage = (total / 300.0f) * 100;

        
        cout << students[i].name << " (" << students[i].roll_no << ")" << endl;
        cout << "Chemistry => " << students[i].chem_m << endl;
        cout << "Mathematics => " << students[i].maths_m << endl;
        cout << "Physics => " << students[i].phy_m << endl;
        cout << "Total => " << total << "/300" << endl;
        cout << "Percent => " << fixed << setprecision(2) << percentage << "%" << endl << endl;
    }

    return 0;
}