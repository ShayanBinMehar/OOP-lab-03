#include <iostream>

using namespace std;

class laptop {

    string brand;
    string model;
    string processor;
    int ram;
    int storage;
    bool isOn = false;

public:

    void setValues(string brandp, string modelp, string processerp, int ramp, int storagep) {

        brand = brandp;
        model = modelp;
        processor = processerp;
        ram = ramp;
        storage = storagep;
    }
    void turnOn() {
        isOn = true;
        cout << "Laptop is turn on" << endl;
    }
    void turnOff() {
        isOn = false;
        cout << "Laptop is turn off" << endl;
    }
    void runProgram() {

        if(isOn == true) {
            cout << "Program is running..." << endl;
        }
        else {
            cout << "Laptop is off, Program not running" << endl;
        }
    }
     void checkSpecifications() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Processor: " << processor << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
    }

};

int main() {

    laptop bilal;
    laptop ayesha;

    bilal.setValues("Intel", "2020 special edition", "i7-12100f", 16, 1000);
    ayesha.setValues("Alienware", "2024 gaming edition", "i7-14100", 32, 2000);
    
    bilal.runProgram();
    ayesha.runProgram();

    bilal.turnOn();
    ayesha.turnOn();

    bilal.runProgram();
    ayesha.runProgram();

    bilal.checkSpecifications();
    ayesha.checkSpecifications();

    bilal.turnOff();
    ayesha.turnOff();
    
}