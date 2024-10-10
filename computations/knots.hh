// ANSIA II
// (C) Copyright 2018-2024 Adryan Arsov
// Licensed under GNU GPL V3

#ifndef ANSIA_II__SPEED_H_
#define ANSIA_II__SPEED_H_

class Knots {
    int speed = 0;

    int AdvanceMeters() { // speed is in knots
        // 1 kts = 0.51 m/s
        return speed * 0.51;
    }
};

#endif ANSIA_II__SPEED_H_