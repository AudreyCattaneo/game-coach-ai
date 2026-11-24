// analyze.cpp — part of game-coach-ai.

#include "gamecoachai/analyze.h"

#include <cstdio>

namespace gamecoachai {

Analyze::Analyze(const std::string& config_path)
    : config_path_(config_path) {}

void Analyze::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Analyze::run() {
    if (verbose_) std::fprintf(stderr, "[game-coach-ai] analyze: run\n");
    // core logic lives here
    return true;
}

}  // namespace gamecoachai
