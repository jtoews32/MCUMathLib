#ifdef __MATH_H
#define __MATH_H


#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

// void LogToLoggerFile(int16_t x);
#ifdef __cplusplus
extern "C" {
#endif

// static

// __attribute__ ((always_inline))  inline int addInt( int  exp1, int exp2);


uint32_t add32(uint32_t exp1, uint32_t exp2);
uint32_t multU32ret64(uint32_t exp1, uint32_t exp2)


#ifdef __cplusplus
}  /* extern "C" */
#endif

#endif
