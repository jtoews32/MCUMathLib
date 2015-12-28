#include "Math.h"

/*

#include "Init_Config.h"
#include "PDD_Includes.h"
#include "Events.h"
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

 */

#ifdef __cplusplus
extern "C" {
#endif

register unsigned int reg_apsr 			__asm("apsr");
register unsigned int reg_basepri 		__asm("basepri");
register unsigned int reg_basepri_max 	__asm("basepri_max");
register unsigned int reg_control 		__asm("control");
register unsigned int reg_eapsr 		__asm("eapsr");
register unsigned int reg_epsr 			__asm("epsr");
register unsigned int reg_faultmask	 	__asm("faultmask");
register unsigned int reg_iapsr 		__asm("iapsr");
register unsigned int reg_iepsr 		__asm("iepsr");
register unsigned int reg_ipsr 			__asm("ipsr");
register unsigned int reg_msp 			__asm("msp");
register unsigned int reg_primask 		__asm("primask");
register unsigned int reg_psp 			__asm("psp");
register unsigned int reg_spr 			__asm("psr");

// test some basic equations.
__attribute__((always_inline)) static inline signed long add( signed long exp1,  signed long exp2)
{
	signed long result;

	/*
    int src = 1;
     int dst;


     asm ("mov %1, %0\n\t"
         "add $1, %0"
         : "=r" (dst)
         : "r" (src));

     printf("%d\n", dst);
     */

	int test= 0, new = 0;

	__asm volatile ("add %0, %1, %2"
	        :  "=r"(result)
	        : "r" (test), "r" (new));

		// [result] , "[result]" (old)



	/*
	__asm volatile ( "adds %0, %1, %2"
			: "=r" ( result )
			: "r" ( exp1 ), "r" ( exp2 )
		);
	*/

	return result;
}

/*
 *
 *  VADD.F32  {Sd,} Sn, Sm
 *  VDIV.F32   {Sd,} Sn, Sm
 *
 *
 *
 *
 */




__attribute__( ( always_inline ) ) static inline unsigned char subtract( signed long exp1,  signed long exp2)
{
	/*
	uint8_t ucReturn;

	__asm volatile ( "clz %0, %1" : "=r" ( ucReturn ) : "r" ( ulBitmap ) );
	return ucReturn;
	*/

	return 1;
}



/*
__attribute__((naked, no_instrument_function)) void WAIT1_Wait10Cycles(void)
{

  __asm (

   "nop   \n\t"
   "nop   \n\t"
   "nop   \n\t"
   "bx lr \n\t"
  );
}

#define PE_DEBUGHALT() \
  __asm( "BKPT 255") \


#define PE_NOP() \
  __asm( "NOP") \


void vPortValidateInterruptPriority( void )
{
	uint32_t ulCurrentInterrupt;
	uint8_t ucCurrentPriority;

    __asm volatile( "mrs %0, ipsr" : "=r"( ulCurrentInterrupt ) );
}

__attribute__( ( always_inline ) ) static inline unsigned char ucPortCountLeadingZeros( unsigned long ulBitmap )
{
  uint8_t ucReturn;

	__asm volatile ( "clz %0, %1" : "=r" ( ucReturn ) : "r" ( ulBitmap ) );
	return ucReturn;
}

void hello() {
	int addr = 0;

	__asm (
	"mov	r0,%0\n\t"
	"cmp	r0,#0\n\t"
	"beq	skip_sp\n\t"
	"mov	sp,r0\n\t"
	"sub	sp,#4\n\t"
	"mov	r0,#0\n\t"
	"mvn	r0,r0\n\t"
	"str	r0,[sp,#0]\n\t"
	"add	sp,#4\n\t"
	"skip_sp:\n\t"
	::"r"(addr));
}
*/
// Little endian to big endian
// REV R1, R0
// REVH R2, R0


// BFC (Bit Field Clear)
// BFI (Bit Field Insert)
// RBIT R0, R

// Saturaiton alg
// SSAT R1, #16, R0
// USAT R1, #16, R0


// SVC <immed>

// Enter sleep mode
// WFI		wait for interrupt
// WFE		wait for event

// SEV




//register unsigned int reg_apsr __asm("apsr");
//reg_apsr = reg_apsr & 0xF7FFFFFFUL; // Clear Q bit in APSR


/*

Section 1 WHOLE NUMBERS
Unit 1 Addition of Whole Numbers
Unit 2 Subtraction of Whole Numbers
Unit 3 Multiplication of Whole Numbers
Unit 4 Division of Whole Numbers
Unit 5 Combined Operations with Whole Numbers
Section 2 COMMON FRACTIONS
Unit 6 Addition of Common Fractions
Unit 7 Subtraction of Common Fractions
Unit 8 Multiplication of Common Fractions
Unit 9 Division of Common Fractions
Unit 10 Combined Operations with Common Fractions
Section 3 DECIMAL FRACTIONS
Unit 11 Addition of Decimal Fractions
Unit 12 Subtraction of Decimal Fractions
Unit 13 Multiplication of Decimal Fractions
Unit 14 Multiplication of Decimal Fractions
Unit 15 Decimal and Common Fraction Equivalents
Unit 16 Combined Operations with Decimal Fractions
Section 4 PERCENTS, AVERAGES, AND ESTIMATES
Unit 17 Percent and Percentage
Unit 18 Interest
Unit 19 Discount
Unit 20 Averages and Estimates
Unit 21 Combined Problems with Percents, Averages, and Estimates
Section 5 POWERS AND ROOTS
Unit 22 Powers
Unit 23 Roots
Unit 24 Combined Operations with Powers and Roots
Unit 25 Metric Measure and Scientific Notation
Section 6 MEASURE
Unit 26 Length Measure
Unit 27 Area Measure
Unit 28 Volume and Mass Measure
Unit 29 Energy and Temperature Measure
Unit 30 Combined Problems in Measure
Section 7 RATIO AND PROPORTION
Unit 31 Ratio
Unit 32 Proportion
Unit 33 Combined Problems with Ratio and Proportion
Section 8 FORMULAS
Unit 34 Representation in Formulas
Unit 35 Rearrangement in Formulas
Unit 36 General Simple Formulas
Unit 37 Ohm's Law Formulas
Unit 38 Power Formulas
Unit 39 Combined Problems on Formulas
Section 9 TRIGONOMETRY
Unit 40 Right Triangles
Unit 41 Trigonometric Functions
Unit 42 Plane Vectors
Unit 43 Rotating Vectors
Unit 44 Combined Problems in Trigonometry
Unit 45 Number Systems

*/

#ifdef __cplusplus
}  /* extern "C" */
#endif

