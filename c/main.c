
#include "logger.h"

void test(){
    ERR_FLOG("File Logger World!\n");
    WRN_FLOG("File Logger World!\n");
    INF_FLOG("File Logger World!\n");
    DBG_FLOG("File Logger World!\n");

    ERR_LOG("logger world!\n");
    WRN_LOG("logger world!\n");
    INF_LOG("logger world!\n");
    DBG_LOG("logger world!\n");
}

int main() {
    logger.open("test.log");
    ERR_FLOG("File Logger World!\n");
    WRN_FLOG("File Logger World!\n");
    INF_FLOG("File Logger World!\n");
    DBG_FLOG("File Logger World!\n");
    
    ERR_LOG("logger world!\n");
    WRN_LOG("logger world!\n");
    INF_LOG("logger world!\n");
    DBG_LOG("logger world!\n");
    test();

    logger.close("log.txt");
    return 0;
}