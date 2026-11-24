// main.cpp — entry point. Wires config and subsystems together.

#include "gamecoachai/settings.h"
#include "gamecoachai/replay.h"
#include "gamecoachai/analyze.h"
#include "gamecoachai/coach.h"
#include "gamecoachai/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    gamecoachai::Settings settings = gamecoachai::Settings::load_default();
    gamecoachai::Replay replay(settings.store_path);
    gamecoachai::Analyze analyze(settings.store_path);
    gamecoachai::Coach coach(settings.store_path);
    gamecoachai::Cli cli(settings.store_path);
    std::fprintf(stderr, "[game-coach-ai] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
