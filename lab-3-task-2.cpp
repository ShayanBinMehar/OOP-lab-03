#include <iostream>

using namespace std;

class teaMug {

private:

    string brand;
    string color;
    int capacity;
    int currentFillLevel;

public:

    void setValues(string brandp, string colorp, int capacityp, int currentFillLevelp) {
        brand = brandp;
        color = colorp;
        capacity = capacityp;
        currentFillLevel = currentFillLevelp;
    }
    string getBrand(){
        return brand;
    }
    string getColor() {
        return color;
    }
    int getCapacity() {
        return capacity;
    }
    int getCurrentFillLevel() {
        return currentFillLevel;
    }

    void sipTea() {
        //Per sip reduces 4%

        if(currentFillLevel == 0) {
            cout << "The mug is empty" << endl;
        }
        else{
            currentFillLevel -= 4;
            cout << "Sip taken. Yummy!" << endl;
        }
    }
    void refilMug() {

        if(currentFillLevel < capacity) {
            cout << "Tea level in the mug is low. Refilling it........" << endl;
            currentFillLevel = capacity;
            cout << "Refill done........." << endl;
        }
    }
    void cupStatus() {

        if(currentFillLevel == 0) {
            cout << "Mug is empty. Kindly refill it" << endl;
        }
        else{
            cout << "Cup level is " << currentFillLevel << endl;
        }
    }
};


int main() {
    teaMug m1;
    m1.setValues("Drop", "Black", 100, 0);

    m1.refilMug();
    m1.sipTea();
    m1.sipTea();
    m1.sipTea();
    m1.sipTea();
    m1.sipTea();
    m1.cupStatus();
    m1.refilMug();
    
}