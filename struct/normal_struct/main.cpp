#include <cstdio>

// A struct and a class are the same, accept in a class, the default access control is private
struct ClockOfTheShortNow {
    void aYearGoesBy() { year++; }

    void aDecadePasses() { year += 10; }

    int getYear() { return year; }

   private:
    int year{0};
};

class ClockOfTheLongNow {
   public:
    ClockOfTheLongNow(int yearTime) { year = yearTime; }

    void aYearGoesBy() { year++; }

    void aDecadePasses() { year += 10; }

    int getYear() { return year; }

    ~ClockOfTheLongNow() { printf("the year is up \n"); }

   private:
    int year;
};

void handleClock(ClockOfTheLongNow* clock) {
    clock->aYearGoesBy();
}

void handleClockByReferance(ClockOfTheLongNow& clock){
    clock.aDecadePasses();
}

int main() {
    ClockOfTheLongNow clock{2023};

    for (int i = 0; i < 100; i++) {
        // clock.aYearGoesBy();
        handleClock(&clock);
        handleClockByReferance(clock);
        printf("year: %d \n", clock.getYear());
    }
}
