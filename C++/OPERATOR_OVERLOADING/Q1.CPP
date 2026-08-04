//OPERATOR OVERLOADING
#include <bits/stdc++.h>
using namespace std;

class demo {
    int a;

public:
    void getdata() {
        cout << "Enter a no: ";
        cin >> a;
    }

    void putdata() {
        cout << "Value = " << a;
    }

    // Overloaded + operator for demo class
    demo operator+(demo bb) {
        demo cc;
        cc.a = a + bb.a;
        return cc;
    }
};

int main() {
    demo aa, bb, cc;
    
    // Get data for objects aa and bb
    aa.getdata();
    bb.getdata();

    // Use the overloaded + operator to get cc
    cc = aa + bb;

    // Print the values of aa, bb, and cc
    aa.putdata();
    cout << endl;

    bb.putdata();
    cout << endl;

    cc.putdata();
    cout << endl;

    return 0;
}
