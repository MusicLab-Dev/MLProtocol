/**
 * @ Author: Matthieu Moinvaziri
 * @ Description: Benchmark of the Packet class
 */

#include <benchmark/benchmark.h>

#include <MLProtocol/Packet.hpp>

using namespace ML::Protocol;

static void PacketCreationDestruction(benchmark::State &state)
{
    for (auto _ : state) {
        Packet instance;
        benchmark::DoNotOptimize(instance);
    }
}

BENCHMARK(PacketCreationDestruction);