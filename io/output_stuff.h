// ANSIA II
// (C) Copyright 2018-2024 Adryan Arsov
// Licensed under GNU GPL V3

#include <stdio.h>

void log(char* system, char* text) {
    printf(("[ANSIAII::%s]: %s\n", system, text));
}

void rawlog(char* text) {
    printf(("%s", text));
}