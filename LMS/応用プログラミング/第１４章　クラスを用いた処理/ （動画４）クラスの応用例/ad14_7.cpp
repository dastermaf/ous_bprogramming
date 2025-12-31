#include <chrono>  // For seconds
#include <ctime>
#include <iostream>
#include <thread>  // For sleep_for

using namespace std;

class SimpleTimer {
private:
    time_t start_time;

public:
    // Constructor: Start timing on creation
    SimpleTimer() {
        start_time = time(NULL);
        cout << "Timer started." << endl;
    }

    // Destructor: Display elapsed time on destruction
    ~SimpleTimer() {
        time_t end_time = time (NULL);
        cout << "Timer stopped. Elapsed: " << (end_time - start_time) << " sec" << endl;
    }
};

void heavy_task() {
    SimpleTimer timer; // Timing starts here

    cout << "Working..." << endl;
    // Sleep for 2 seconds (simulating work)
    this_thread::sleep_for(chrono::seconds(2));

}  // timer is destroyed here, and elapsed time is displayed

int main() {
    heavy_task();
    return 0;
}