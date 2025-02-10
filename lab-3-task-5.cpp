#include <iostream>
#include <string>

using namespace std;

const int MAX_ITEMS = 20; 

class GroceryStore {
public:
    
    string items[MAX_ITEMS];
    int prices[MAX_ITEMS];
    int counter = 0;

    void addItem() {
        
        if (counter < MAX_ITEMS) { 
            string item;
            int price;
            
            cout << "Enter the item to add in the list: ";
            cin >> item;
            
            cout << "Enter the price for the item: ";
            cin >> price;

            items[counter] = item;
            prices[counter] = price;
            counter++;
        } else {
            
            cout << "Inventory is full. Cannot add more items." << endl;
        }
    }

    void updatePrice() {
        string item;
        cout << "Enter the item to update the price: ";
        cin >> item;

        for (int x = 0; x < counter; x++) {
            
            if (item == items[x]) {
                cout << "Enter the new price for this item: ";
                cin >> prices[x];
                return; 
            }
        }
        cout << "Item not found in the list." << endl;
    }

    void viewInventory() {
        cout << "Inventory:" << endl;
        
        for (int x = 0; x < counter; x++) {
            cout << x + 1 << ". " << items[x] << " - $" << prices[x] << endl;
        }
    }

    void generateReceipt() {
        string item;
        cout << "Enter the item for purchase: ";
        cin >> item;

        bool found = false;
        for (int x = 0; x < counter; x++) {
            if (item == items[x]) {
                cout << "Congratulations, you purchased " << items[x] << " for $" << prices[x] << endl;
                found = true;
                break; 
            }
        }
        if (found == false) {
            cout << "Item not found in the list." << endl;
        }
    }
};

int main() {
    GroceryStore store;
    store.addItem();
    store.addItem();
    store.addItem();
    store.viewInventory();
    store.updatePrice();
    store.generateReceipt();

    return 0;
}