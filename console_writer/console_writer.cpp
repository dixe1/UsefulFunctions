#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include "console_writer.h"

void write(const std::string& x, int y, int z, int color) {
    if (color != 0) {
        std::cout << "\033[" << color << "m";
        for (size_t i = 0; i < x.length(); i++) {
            std::cout << x[i];
            std::this_thread::sleep_for(std::chrono::milliseconds(y));
            if (x[i] == ' ') {
                std::this_thread::sleep_for(std::chrono::milliseconds(z));
            }
        }
        std::cout << "\033[0m";
    }
    else {
        for (size_t i = 0; i < x.length(); i++) {
            std::cout << x[i];
            std::this_thread::sleep_for(std::chrono::microseconds(y));
            if (x[i] == ' ') {
                std::this_thread::sleep_for(std::chrono::microseconds(z));
            }
        }
    }
}
