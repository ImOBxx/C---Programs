#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Flight {
public:
    string no;
    string dest;
    int dtime;
    string status;
    int count;
    vector<Flight> flightList;

    Flight(string no, string dest, int dtime, string status, int count)
        : no(no), dest(dest), dtime(dtime), status(status), count(count) {}

    void flightDetails() {
        cout << "Enter Flight Number: ";
        cin >> no;
        cout << "Enter Flight Destination: ";
        cin >> dest;
        cout << "Enter Flight Time: ";
        cin >> dtime;
        flightList.push_back(Flight(no, dest, dtime, getStatus(dtime), 1));
    }

    void add() {
        count++;
        cout << "Flight Details Added Successfully." << endl;
    }

    void remove() {
        if (count > 0) {
            count--;
            cout << "Flight Cancelled Successfully." << endl;
        } else {
            cout << "No Flights Available." << endl;
        }
    }

    void check() {
        for (const auto &flight : flightList) {
            cout << "Flight Number: " << flight.no << endl;
            cout << "Flight Destination: " << flight.dest << endl;
            cout << "Flight Time: " << flight.dtime << endl;
            cout << "Status: " << flight.status << endl;
            cout << "Count: " << flight.count << endl;
            cout << endl;
        }
    }

    string getStatus(int time) {
        if (time < 800) {
            return "Flight Delayed";
        } else {
            return "On Time";
        }
    }

    void fstatus() {
        for (const auto &flight : flightList) {
            cout << "Flight Number: " << flight.no << " Status: " << flight.status << endl;
        }
    }
};

int main() {
    int choice;
    Flight obj("", "", 0, "", 0);

    while (true) {
        cout << "FLIGHT DETAILS: " << endl;
        cout << "1: Press One For Add A Flight." << endl;
        cout << "2: Press Two For Cancel A Flight." << endl;
        cout << "3: Press Three To Check Flights." << endl;
        cout << "4: Press Four To Check Flight Status" << endl;
        cout << "5: Press Five For EXIT." << endl;
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;

        switch (choice) {
            case 1:
                obj.flightDetails();
                obj.add();
                break;
            case 2:
                obj.remove();
                break;
            case 3:
                obj.check();
                break;
            case 4:
                obj.fstatus();
                break;
            case 5:
                cout << "Exiting the program." << endl;
                exit(0);
                break;
            default:
                cout << "Incorrect Choice." << endl;
                break;
        }
    }

    return 0;
}
