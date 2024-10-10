// ANSIA II
// (C) Copyright 2018-2024 Adryan Arsov
// Licensed under GNU GPL V3

#include "computations/knots.hh"
#include "io/input_mgr.hh"
#include "io/output_stuff.h" // c file (output)

#include <unistd.h>

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

int framesTGO = 15;

int main(int argc, char* argv) {
    while (true) {
        rawlog("=========== Frame Report (%i/15) ===========\n");
        
        if (yaw) {
            rawlog("yaw: yes\n");
        } else {
            rawlog("yaw: no\n");
        }
        
        sleep(0.1);
    }
}