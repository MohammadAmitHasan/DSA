#include <bits/stdc++.h>
using namespace std;

int main() {
    list<string> addresses;
    string str;
    while (true) {
        cin >> str;
        if (str == "end") {
            break;
        }
        addresses.push_back(str);
    }

    auto it = addresses.begin();

    int q;
    cin >> q;

    string command;
    string address;

    for (int i = 0; i < q; i++) {
        cin >> command;

        if (command == "visit") {
            cin >> address;
            auto result = find(addresses.begin(), addresses.end(), address);
            if (result != addresses.end()) {
                cout << address << endl;
                it = result;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "next") {
            ++it;
            if (it != addresses.end()) {
                cout << *it << endl;
            } else {
                cout << "Not Available" << endl;
                --it;
            }
        } else if (command == "prev") {
            if (it != addresses.begin()) {
                --it;
                cout << *it << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}