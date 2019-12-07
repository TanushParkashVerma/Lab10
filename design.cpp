//
// Created by tanus on 2019-12-02.
//

#include "design.hpp"

/*design constructor*/
design::design() {}

/*method test1() to run */
void design::test1() {
    int number = 6;
    vector<int> vector = {25, 45, 20, 10, 30};
    heap<int> patients(vector);

    /*Test print function*/
    cout << "Patients:" << patients << endl;
    cout << "Size: " << patients.size() << endl;
    cout << endl;

    /*Test Push function*/
    cout << "Pushing: " << number << endl;
    patients.push(number);
    cout << "Patients:" << patients << endl;
    cout << "Size: " << patients.size() << endl;
    cout << endl;

    /*Test Pop function*/
    cout << "Poping: " << patients.pop() << endl;
    cout << "Patients:" << patients << endl;
    cout << "Size: " << patients.size() << endl;
    cout << endl;

    /*Test Pop function*/
    cout << "Poping: " << patients.pop() << endl;
    cout << "Patients:" << patients << endl;
    cout << "Size: " << patients.size() << endl;
    cout << endl;

    /*Test clear function*/
    cout << "Patients before clear:" << patients << endl;
    patients.clear();
    cout << "Check if empty: " << patients.is_empty() << endl;
    cout << "Size: " << patients.size() << endl;
    cout << endl;

}

/*method test2() to run */
void design::test2() {
    set<double> dataContainer;
    int size = 5;
    double value = 13.34;

    while (size > 0) {
        double number;
        cout << "Enter a Patient number." << endl;
        cin >> number;
        dataContainer.insert(number);
        --size;
    }
    heap<double> patients(dataContainer);

    /*Test print function*/
    cout << "Patients:" << patients << endl;
    cout << "Size: " << patients.size() << endl;
    cout << endl;

    /*Test Push function*/
    cout << "Pushing: " << value << endl;
    patients.push(value);
    cout << "Patients:" << patients << endl;
    cout << "Size: " << patients.size() << endl;
    cout << endl;

    /*Test Pop function*/
    cout << "Poping: " << patients.pop() << endl;
    cout << "Patients:" << patients << endl;
    cout << "Size: " << patients.size() << endl;
    cout << endl;

    /*Test Pop function*/
    cout << "Poping: " << patients.pop() << endl;
    cout << "Patients:" << patients << endl;
    cout << "Size: " << patients.size() << endl;
    cout << endl;

    /*Test clear function*/
    cout << "Patients before clear:" << patients << endl;
    patients.clear();
    cout << "Check if empty: " << patients.is_empty() << endl;
    cout << "Size: " << patients.size() << endl;
    cout << endl;

}
