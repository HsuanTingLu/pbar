//
// Created by 范軒瑋 on 2019-09-25.
//

#include "include/ProcessBar.h"
#include "include/Logger.h"
#include <unistd.h>

int main() {
    log::ProcessBar *processBar = new log::ProcessBar("testing", 10);
    for(int i = 0; i < 10; i ++) {
        processBar->update();
        sleep(1);
    }
    return 0;
}
