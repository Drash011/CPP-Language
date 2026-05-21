#include <iostream>
#include "Q-1-Time_Converter.cpp"

int main()
{
    Time_Converter time;

    time.setSecondsToTime();
    time.getSecondsToTime();

    time.setTimeToSeconds();
    time.getTimeToSeconds();

    return 0;
}