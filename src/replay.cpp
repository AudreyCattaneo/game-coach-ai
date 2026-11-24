// replay.cpp — part of game-coach-ai.

#include "gamecoachai/replay.h"

#include <cstdio>

namespace gamecoachai {

Replay::Replay(const std::string& config_path)
    : config_path_(config_path) {}

void Replay::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Replay::run() {
    if (verbose_) std::fprintf(stderr, "[game-coach-ai] replay: run\n");
    // core logic lives here
    return true;
}

}  // namespace gamecoachai
