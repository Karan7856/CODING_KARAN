//MINIMUM PRIORITY QUEUE
#include <bits/stdc++.h>
using namespace std;

int main() {
    int choice;

    // Min-priority queue: (priority, patient name)
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;

    cout << "Priority Queue System\n";
    cout << "1. Add patient\n2. Treat patient\n0. Exit\n";

    while (true) {
        cout << "Enter your choice: ";
        
        // Check for valid input
        if (!(cin >> choice)) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the line
            cout << "Invalid input. Please enter 1, 2, or 0.\n";
            continue; // Restart the loop
        }

        if (choice == 1) {
            int p;
            string m;
            cout << "Enter patient name and priority: ";
            cin >> m >> p;  // Read patient name and priority
            pq.push({p, m});  // Add patient to the queue

        } else if (choice == 2) {
            if (pq.empty()) {
                cout << "Error: Queue is empty.\n";
            } else {
                cout << "Patient with priority " << pq.top().first 
                     << " and name " << pq.top().second << " has been treated.\n";
                pq.pop();  // Remove the treated patient
            }

        } else if (choice == 0) {
            cout << "Exiting the system.\n";
            break;  // Exit the loop

        } else {
            cout << "Invalid choice. Please enter 1, 2, or 0.\n";
        }
    }

    return 0;
}
