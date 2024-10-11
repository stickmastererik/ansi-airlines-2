// ANSIA II
// (C) Copyright 2018-2024 Adryan Arsov
// Licensed under GNU GPL V3

#include <../libc/stdio.hh>

void log(std::string system, std::string text) {
    printf(("[ANSIAII::%s]: %s\n", system, text));
}

void rawlog(std::string text) {
    printf(("%s", text));
}