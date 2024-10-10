// ANSIA II
// (C) Copyright 2018-2024 Adryan Arsov
// Licensed under GNU GPL V3

#include "computations/knots.hh"
#include "input/input_mgr.hh"

int position_mts[] = {0, 0};

bool roll = false; // L/R
bool pitch = false; // U/D
bool yaw = false; // F/B

char rollDir = 'n'; // n = none, l = left, r = right
char pitchDir = 'n'; // n = none, u = up, d = down

bool yawForward = false;

int throttle = 0; // speed

Knots PlaneSpeed;

void UpdatePlaneInfo() {
    if (Input::IsPressed("t")) {
        yaw = true;
        yawForward = true;
    } else if (Input::IsPressed("g")) {
        yaw = true;
        yawForward = false;
    } else {
        yaw = false;
        yawForward = false;
    }

    if (Input::IsPressed("q")) {
        throttle += 0.5;
    } else if (Input::IsPressed("a")) {
        throttle -= 0.5;
    }

    if (Input::IsPressed("f")) {
        rollDir = 'l';
    } else if (Input::IsPressed("h")) {
        rollDir = 'r';
    } else {
        rollDir = 'n';
    }
}