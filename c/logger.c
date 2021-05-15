
#include "logger.h"


void openLogfile(uint8_t* fname);
void closeLogfile();

MyLogger logger = {NULL, openLogfile, closeLogfile};

void openLogfile(uint8_t* fname){
    if (!logger.pfile) logger.pfile = fopen(fname, "a"); // overwrite
    fprintf(logger.pfile, "========= Logging Start ============\n");
}

void closeLogfile(){
    fprintf(logger.pfile, "========= Logging End ==============\n");
    if(logger.pfile) fclose(logger.pfile);
}
