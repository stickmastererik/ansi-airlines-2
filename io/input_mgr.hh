// ANSIA II
// (C) Copyright 2018-2024 Adryan Arsov
// Licensed under GNU GPL V3

#ifndef ANSIA_II_INPUT_H_
#define ANSIA_II_INPUT_H_

#include <iostream>
#include <set>

#include "../external/elements.hh"

std::string KeysKB[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0", " "};

class Key {
    public:
        std::string KeyCode;
        bool Pressed;

        Key::Key(std::string keycode_I, bool pressed_I) {
            KeyCode = keycode_I;
            Pressed = pressed_I;
        };
};

static Key RandKey = Key("NULL", false);

class Input {
    public:
        static Key Keys[];

        static void Init() {
            for (int i = 0; i < sizeof(KeysKB); i++) {
                Key CurrentKey = Key(KeysKB[i], false);
                Keys[elementsin(Keys) + 1] = CurrentKey;
            }
        }

        static bool IsPressed(std::string KeyCode) {
            bool psd = false;
            for (int i = 0; i < elementsin(Keys); i++) {
                Key CurrentKey = Keys[i];

                if (CurrentKey.KeyCode == KeyCode) {
                    psd = CurrentKey.Pressed;
                }
            }

            return psd;
        }
};

#endif ANSIA_II_INPUT_H_