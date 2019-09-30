//
// Created by 范軒瑋 on 2019-09-25.
//

#include <unistd.h>
#include <iostream>
#include "include/Logger.h"
#include "include/ProgressBar.h"
#include "include/utils/color.h"

int main() {
    constexpr int test_size = 100000;
    logging::ProgressBar* progressBar = new logging::ProgressBar("testing", test_size);
    for (int i = 0; i < test_size; i++) {
        progressBar->update();
        // sleep(1);
    }
    std::cout << std::endl;
    delete progressBar;
    return 0;
}
