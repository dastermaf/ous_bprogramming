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
    /* BLANK */ {
        /* BLANK */
        cout << "Timer started." << endl;
    }

    // Destructor: Display elapsed time on destruction
    /* BLANK */ {
        /* BLANK */
        cout << "Timer stopped. Elapsed: " << (/* BLANK */) << " sec"
             << endl;
    }
};

void heavy_task() {
    /* BLANK */  // Timing starts here

    cout << "Working..." << endl;
    // Sleep for 2 seconds (simulating work)
    this_thread::sleep_for(chrono::seconds(2));

}  // timer is destroyed here, and elapsed time is displayed

int main() {
    /* BLANK */
    return 0;
}
