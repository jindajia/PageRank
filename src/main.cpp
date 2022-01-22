#include <iostream>
#include "mylib.h"
#include "graph.h"
#include "config.h"
#include "heap.h"
#include "rng.h"
#include "build.h"
int main() {
    config.graph_alias = "nethept";
    std::cout << config.get_graph_folder() << std::endl;
    std::cout << "Hello Easy C++ project!" << std::endl;
    std::cout << get_ram_size() << std::endl;
}