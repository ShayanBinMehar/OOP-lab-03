#include <iostream>

using namespace std;

class markerPen {
    private:
        string brand;
        string color;
        int inkLevel;
        bool refillability;
    
    public:
        void setValues(string brandp, string colorp, int inkLevelp, bool refillabilityp) {
            brand = brandp;
            color = colorp;
            inkLevel = inkLevelp;
            refillability = refillabilityp;
        }
        string getBrand() {
            return brand;
        }
        string getColor() {
            return color;
        }
        int getInkLevel() {
            return inkLevel;
        }
        bool setRefillability() {
            return refillability;
        }

        void refillMarker() {

            if(refillability == false) {

                cout << "Ink is full" << endl;
            }
            else {
                cout << "Ink is not full " << endl;
                inkLevel = 100;
                refillability = false;
                cout << "Ink is successfully filled to top" << endl;
            }
        }
        void useMarker() {
            //for each use of marker reduces 25% of ink

            inkLevel = inkLevel - 25;
            cout << "Ink level drops by 25%. Current ink level is " << inkLevel << endl;
            refillability = true;
        }
        void status() {
            cout << "Brand of the marker is " << brand << endl;
            cout << "Color of the marker is " << brand << endl;
            cout << "InkLevel of the marker is " << brand << endl;
            cout << "Refillability status of marker is " << brand << endl;
        }
        
};

int main() {
    
    markerPen m1;
    markerPen m2;

    m1.setValues("InkMaster", "Black", 100, false);
    m2.setValues("Casio", "Blue", 100, false);
    
    m1.status();
    m1.useMarker();
    m1.useMarker();
    m1.refillMarker();
    m1.status();

    m2.status();
    m2.useMarker();
    m2.refillMarker();
    m2.status();

    
}