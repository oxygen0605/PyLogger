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

#ifdef FDBG_ON
#define ERR_FLOG(...) fprintf(logger.pfile, "ERR:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define WRN_FLOG(...) fprintf(logger.pfile, "WRN:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define INF_FLOG(...) fprintf(logger.pfile, "INF:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define DBG_FLOG(...) fprintf(logger.pfile, "DBG:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)

#elif FINF_ON
#define ERR_FLOG(...) fprintf(logger.pfile, "ERR:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define WRN_FLOG(...) fprintf(logger.pfile, "WRN:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define INF_FLOG(...) fprintf(logger.pfile, "INF:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define DBG_FLOG(...) 

#elif FWRN_ON
#define ERR_FLOG(...) fprintf(logger.pfile, "ERR:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define WRN_FLOG(...) fprintf(logger.pfile, "WRN:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define INF_FLOG(...) 
#define DBG_FLOG(...) 

#elif FERR_ON
#define ERR_FLOG(...) fprintf(logger.pfile, "ERR:%s(%d) %s:", __FILE__, __LINE__, __func__), fprintf(logger.pfile, __VA_ARGS__)
#define WRN_FLOG(...) 
#define INF_FLOG(...) 
#define DBG_FLOG(...) 

#else
#define ERR_FLOG(...) 
#define WRN_FLOG(...) 
#define INF_FLOG(...) 
#define DBG_FLOG(...) 

#endif // FDEG_ON

#ifdef PDBG_ON
#define ERR_LOG(...) fprintf(stdout, "ERR:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define WRN_LOG(...) fprintf(stdout, "WRN:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define INF_LOG(...) fprintf(stdout, "INF:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define DBG_LOG(...) fprintf(stdout, "DBG:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)

#elif PINF_ON
#define ERR_LOG(...) fprintf(stdout, "ERR:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define WRN_LOG(...) fprintf(stdout, "WRN:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define INF_LOG(...) fprintf(stdout, "INF:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define DBG_LOG(...)

#elif PWRN_ON
#define ERR_LOG(...) fprintf(stdout, "ERR:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define WRN_LOG(...) fprintf(stdout, "WRN:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define INF_LOG(...) 
#define DBG_LOG(...)

#elif PERR_ON
#define ERR_LOG(...) fprintf(stdout, "ERR:%s(%d) %s:", __FILE__, __LINE__, __func__), printf(__VA_ARGS__)
#define WRN_LOG(...) 
#define INF_LOG(...) 
#define DBG_LOG(...)

#else
#define ERR_LOG(...) 
#define WRN_LOG(...) 
#define INF_LOG(...) 
#define DBG_LOG(...)


#endif // PDEG_ON


#endif // __MyLogger_H_