#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>

struct TIME {
    int hour;
    int minute;
};

struct TRAIN_INFO {
    int train_no;
    std::string train_name;
    TIME departure_time;
    TIME arrival_time;
    std::string start_station;
    std::string end_station;
};

// Function to print the time in HH:MM format
void printTime(const TIME& time) {
    std::cout << std::setw(2) << std::setfill('0') << time.hour << ":"
              << std::setw(2) << std::setfill('0') << time.minute;
}

// Function to compare two times
bool isTimeLessThan(const TIME& t1, const TIME& t2) {
    return (t1.hour < t2.hour) || (t1.hour == t2.hour && t1.minute < t2.minute);
}

// Function to check if time t1 is within one hour of time t2
bool isWithinOneHour(const TIME& t1, const TIME& t2) {
    int t1_minutes = t1.hour * 60 + t1.minute;
    int t2_minutes = t2.hour * 60 + t2.minute;
    return (t1_minutes >= t2_minutes && t1_minutes <= t2_minutes + 60);
}

// Function to list all trains sorted by train number
void listAllTrains(const std::vector<TRAIN_INFO>& timetable) {
    std::vector<TRAIN_INFO> sorted_timetable = timetable;
    std::sort(sorted_timetable.begin(), sorted_timetable.end(), [](const TRAIN_INFO& a, const TRAIN_INFO& b) {
        return a.train_no < b.train_no;
    });
    for (const auto& train : sorted_timetable) {
        std::cout << "Train No: " << train.train_no << ", Train Name: " << train.train_name << "\n";
        std::cout << "Departure Time: "; printTime(train.departure_time); std::cout << "\n";
        std::cout << "Arrival Time: "; printTime(train.arrival_time); std::cout << "\n";
        std::cout << "Start Station: " << train.start_station << ", End Station: " << train.end_station << "\n\n";
    }
}

// Function to list all trains departing from a particular station
void listTrainsFromStation(const std::vector<TRAIN_INFO>& timetable, const std::string& station) {
    for (const auto& train : timetable) {
        if (train.start_station == station) {
            std::cout << "Train No: " << train.train_no << ", Train Name: " << train.train_name << "\n";
            std::cout << "Departure Time: "; printTime(train.departure_time); std::cout << "\n";
            std::cout << "Arrival Time: "; printTime(train.arrival_time); std::cout << "\n";
            std::cout << "Start Station: " << train.start_station << ", End Station: " << train.end_station << "\n\n";
        }
    }
}

// Function to list all trains departing from a particular station at a particular time
void listTrainsFromStationAtTime(const std::vector<TRAIN_INFO>& timetable, const std::string& station, const TIME& time) {
    for (const auto& train : timetable) {
        if (train.start_station == station && train.departure_time.hour == time.hour && train.departure_time.minute == time.minute) {
            std::cout << "Train No: " << train.train_no << ", Train Name: " << train.train_name << "\n";
            std::cout << "Departure Time: "; printTime(train.departure_time); std::cout << "\n";
            std::cout << "Arrival Time: "; printTime(train.arrival_time); std::cout << "\n";
            std::cout << "Start Station: " << train.start_station << ", End Station: " << train.end_station << "\n\n";
        }
    }
}

// Function to list all trains departing from a particular station within the next one hour of a given time
void listTrainsFromStationWithinOneHour(const std::vector<TRAIN_INFO>& timetable, const std::string& station, const TIME& time) {
    for (const auto& train : timetable) {
        if (train.start_station == station && isWithinOneHour(train.departure_time, time)) {
            std::cout << "Train No: " << train.train_no << ", Train Name: " << train.train_name << "\n";
            std::cout << "Departure Time: "; printTime(train.departure_time); std::cout << "\n";
            std::cout << "Arrival Time: "; printTime(train.arrival_time); std::cout << "\n";
            std::cout << "Start Station: " << train.start_station << ", End Station: " << train.end_station << "\n\n";
        }
    }
}

// Function to list all trains between a pair of start station and end station
void listTrainsBetweenStations(const std::vector<TRAIN_INFO>& timetable, const std::string& start_station, const std::string& end_station) {
    for (const auto& train : timetable) {
        if (train.start_station == start_station && train.end_station == end_station) {
            std::cout << "Train No: " << train.train_no << ", Train Name: " << train.train_name << "\n";
            std::cout << "Departure Time: "; printTime(train.departure_time); std::cout << "\n";
            std::cout << "Arrival Time: "; printTime(train.arrival_time); std::cout << "\n";
            std::cout << "Start Station: " << train.start_station << ", End Station: " << train.end_station << "\n\n";
        }
    }
}

int main() {
    // Sample train timetable
    std::vector<TRAIN_INFO> timetable = {
        {101, "Express A", {10, 30}, {14, 45}, "Station X", "Station Y"},
        {102, "Express B", {11, 00}, {15, 00}, "Station X", "Station Z"},
        {103, "Express C", {12, 15}, {16, 30}, "Station Y", "Station Z"},
        {104, "Express D", {13, 45}, {17, 20}, "Station X", "Station Y"},
        {105, "Express E", {14, 30}, {18, 00}, "Station Z", "Station X"}
    };

    // List all trains sorted by train number
    std::cout << "All trains sorted by train number:\n";
    listAllTrains(timetable);

    // List all trains departing from "Station X"
    std::cout << "\nTrains departing from Station X:\n";
    listTrainsFromStation(timetable, "Station X");

    // List all trains departing from "Station X" at 11:00
    std::cout << "\nTrains departing from Station X at 11:00:\n";
    TIME time = {11, 00};
    listTrainsFromStationAtTime(timetable, "Station X", time);

    // List all trains departing from "Station X" within one hour of 10:30
    std::cout << "\nTrains departing from Station X within one hour of 10:30:\n";
    TIME current_time = {10, 30};
    listTrainsFromStationWithinOneHour(timetable, "Station X", current_time);

    // List all trains between "Station X" and "Station Y"
    std::cout << "\nTrains between Station X and Station Y:\n";
    listTrainsBetweenStations(timetable, "Station X", "Station Y");

    return 0;
}
