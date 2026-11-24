// coach.cpp — part of game-coach-ai.

#include "gamecoachai/coach.h"

#include <cstdio>

namespace gamecoachai {

Coach::Coach(const std::string& config_path)
    : config_path_(config_path) {}

void Coach::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Coach::run() {
    if (verbose_) std::fprintf(stderr, "[game-coach-ai] coach: run\n");
    // core logic lives here
    return true;
}

}  // namespace gamecoachai
