
#include "logger.h"

void test(){
    FLOGE("File Logger World!\n");
    FLOGW("File Logger World!\n");
    FLOGI("File Logger World!\n");
    FLOGD("File Logger World!\n");

    PLOGE("logger world!\n");
    PLOGW("logger world!\n");
    PLOGI("logger world!\n");
    PLOGD("logger world!\n");
}

int main() {
    logger.open("test.log");
    
    
    FLOGE("File Logger World!\n");
    FLOGW("File Logger World!\n");
    FLOGI("File Logger World!\n");
    FLOGD("File Logger World!\n");

    PLOGE("logger world!\n");
    PLOGW("logger world!\n");
    PLOGI("logger world!\n");
    PLOGD("logger world!\n");
    
    test();

    logger.close("log.txt");
    return 0;
}