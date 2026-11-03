#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int choice;
    cout << "Choose Lab (1 - Lab 1.6.1, 2 - Lab 1.7.1, 3 - Lab 1.7.2, 4 - Lab 1.7.3): ";
    cin >> choice;

    if (choice == 1) {
        //Lab 1.6.1 Logical data
        bool answer;
        int value;
        cout << "Enter a value: ";
        cin >> value;
        answer = (value >= 0 && value < 10) ||
            (value * 2 < 20 && value - 2 > -2) ||
            (value - 1 > 1 && value / 2 < 10) ||
            (value == 111);
        cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE: (") << endl;

    }
    else if (choice == 2) {
        //Lab 1.7.1 Printing data 
        double v1, v2, v3, v4, v5;
        cout << "Enter 5 float values: ";
        cin >> v1 >> v2 >> v3 >> v4 >> v5;

        cout << v1 << endl;
        cout << fixed << setprecision(2) << v2 << endl;
        cout << defaultfloat << v3 << endl;
        cout << fixed << setprecision(2) << v4 << endl;
        cout << (int)v5 << endl;

    }
    else if (choice == 3) {
        //Lab 1.7.2 Near zero float numbers 
        int a, b;
        cout << "Enter two integer numbers: ";
        cin >> a >> b;
        double res1 = 1.0 / a;
        double res2 = 1.0 / b;
        double epsilon = 0.000001;

        if (fabs(res1 - res2) < epsilon) {
            cout << "Results are equal (by 0.000001 epsilon)" << endl;
        }
        else {
            cout << "Results are not equal (by 0.000001 epsilon)" << endl;
        }

    }
    else if (choice == 4) {
        //Lab 1.7.3 Getting input from user (IP) 
        int n1, n2, n3, n4;
        cout << "Enter 4 IP numbers (1 to 255): ";
        cin >> n1 >> n2 >> n3 >> n4;
        cout << n1 << "." << n2 << "." << n3 << "." << n4 << endl;

    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}