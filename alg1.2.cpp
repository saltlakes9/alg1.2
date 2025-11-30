// alg1.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    cout << "=== DATA STRUCTURES EXAMPLES ===" << endl;

    array<double, 5> productPrices = { 25.50, 15.75, 30.00, 12.25, 45.90 };
    cout << "\n1. ARRAY - Product Prices:" << endl;
    cout << "First product: " << productPrices[0] << " UAH" << endl;
    cout << "Last product: " << productPrices[4] << " UAH" << endl;
    double maxPrice = *max_element(productPrices.begin(), productPrices.end());
    cout << "Highest price: " << maxPrice << " UAH" << endl;

    vector<string> studentList;
    cout << "\n2. VECTOR - Student List:" << endl;
    studentList.push_back("Anna Ivanenko");
    studentList.push_back("Petro Petrenko");
    studentList.push_back("Maria Sydorenko");
    studentList.push_back("Oleksiy Kovalenko");
    studentList.pop_back();
    cout << "First student: " << studentList[0] << endl;
    cout << "Total students: " << studentList.size() << endl;
    if (find(studentList.begin(), studentList.end(), "Petro Petrenko") != studentList.end()) {
        cout << "Student found!" << endl;
    }

    queue<string> customerQueue;
    cout << "\n3. QUEUE - Customer Service:" << endl;
    customerQueue.push("Customer #1");
    customerQueue.push("Customer #2");
    customerQueue.push("Customer #3");
    cout << "Queue size: " << customerQueue.size() << endl;
    while (!customerQueue.empty()) {
        cout << "Serving: " << customerQueue.front() << endl;
        customerQueue.pop();
    }

    stack<string> actionStack;
    cout << "\n4. STACK - Action History:" << endl;
    actionStack.push("Create document");
    actionStack.push("Edit text");
    actionStack.push("Add image");
    actionStack.push("Save file");
    cout << "History size: " << actionStack.size() << endl;
    cout << "Undo: " << actionStack.top() << endl;
    actionStack.pop();
    cout << "Next action: " << actionStack.top() << endl;

    map<int, string> studentDatabase;
    cout << "\n5. MAP - Student Database:" << endl;
    studentDatabase[101] = "Anna Ivanenko - 85 points";
    studentDatabase[102] = "Petro Petrenko - 92 points";
    studentDatabase[103] = "Maria Sydorenko - 78 points";
    cout << "Student 102: " << studentDatabase[102] << endl;
    studentDatabase.erase(103);
    cout << "Records after deletion: " << studentDatabase.size() << endl;

    unordered_map<string, int> productInventory;
    cout << "\n6. UNORDERED_MAP - Product Inventory:" << endl;
    productInventory["Laptop"] = 5;
    productInventory["Mouse"] = 15;
    productInventory["Keyboard"] = 8;
    productInventory["Monitor"] = 3;
    productInventory["Laptop"] += 2;
    cout << "Monitors in stock: " << productInventory["Monitor"] << endl;
    productInventory.erase("Mouse");
    cout << "Products in inventory: " << productInventory.size() << endl;

    set<string> uniqueCities;
    cout << "\n7. SET - Unique Cities:" << endl;
    uniqueCities.insert("Kyiv");
    uniqueCities.insert("Lviv");
    uniqueCities.insert("Odesa");
    uniqueCities.insert("Kharkiv");
    uniqueCities.insert("Kyiv");
    if (uniqueCities.find("Lviv") != uniqueCities.end()) {
        cout << "City found in set" << endl;
    }
    uniqueCities.erase("Odesa");
    cout << "Unique cities count: " << uniqueCities.size() << endl;
    cout << "Cities: ";
    for (const auto& city : uniqueCities) {
        cout << city << " ";
    }
    cout << endl;

    cout << "\n=== PROGRAM FINISHED ===" << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
