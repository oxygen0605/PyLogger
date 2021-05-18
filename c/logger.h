#ifndef __MyLogger_H_
#define __MyLogger_H_

#include <stdio.h>
//#include <stdlib.h>
#include <stdint.h>

typedef struct MyLogger {
    FILE* pfile;
    void (*open)(uint8_t* fname);
    void (*close)();
} MyLogger;
extern MyLogger logger;

/* File Log MACRO */
#ifdef FDBG_ON
#define FLOGE(...) fprintf(logger.pfile, "ERR:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define FLOGW(...) fprintf(logger.pfile, "WRN:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define FLOGI(...) fprintf(logger.pfile, "INF:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define FLOGD(...) fprintf(logger.pfile, "DBG:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)

#elif FINF_ON
#define FLOGE(...) fprintf(logger.pfile, "ERR:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define FLOGW(...) fprintf(logger.pfile, "WRN:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define FLOGI(...) fprintf(logger.pfile, "INF:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define FLOGD(...) 

#elif FWRN_ON
#define FLOGE(...) fprintf(logger.pfile, "ERR:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define FLOGW(...) fprintf(logger.pfile, "WRN:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define FLOGI(...) 
#define FLOGD(...) 

#elif FERR_ON
#define FLOGE(...) fprintf(logger.pfile, "ERR:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define FLOGW(...) 
#define FLOGI(...) 
#define FLOGD(...) 

#else
#define FLOGE(...) 
#define FLOGW(...) 
#define FLOGI(...) 
#define FLOGD(...) 

#endif // FDEG_ON


/* Print Log MACRO */
#ifdef PDBG_ON
#define PLOGE(...) fprintf(stdout, "ERR:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define PLOGW(...) fprintf(stdout, "WRN:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define PLOGI(...) fprintf(stdout, "INF:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define PLOGD(...) fprintf(stdout, "DBG:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)

#elif PINF_ON
#define PLOGE(...) fprintf(stdout, "ERR:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define PLOGW(...) fprintf(stdout, "WRN:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define PLOGI(...) fprintf(stdout, "INF:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define PLOGD(...) 

#elif PWRN_ON
#define PLOGE(...) fprintf(stdout, "ERR:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define PLOGW(...) fprintf(stdout, "WRN:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define PLOGI(...) 
#define PLOGD(...) 

#elif PERR_ON
#define PLOGE(...) fprintf(stdout, "ERR:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define PLOGW(...) 
#define PLOGI(...) 
#define PLOGD(...) 

#else
#define PLOGE(...) 
#define PLOGW(...) 
#define PLOGI(...) 
#define PLOGD(...) 


#endif // PDEG_ON


#endif // __MyLogger_H_