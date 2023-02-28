//
// Created by Katerina Dimitrova on 28.02.23.
//

#ifndef OOP_TIME_H
#define OOP_TIME_H



 class Time {
    int hour;
    int minutes;
    int seconds;

public:
    Time ();
    Time get_diff (const Time other) const;



};
#endif //OOP_TIME_H
