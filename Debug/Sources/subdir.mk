################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Sources/Events.c \
../Sources/Math.c \
../Sources/main.c 

OBJS += \
./Sources/Events.o \
./Sources/Math.o \
./Sources/main.o 

C_DEPS += \
./Sources/Events.d \
./Sources/Math.d \
./Sources/main.d 


# Each subdirectory must supply rules for building sources it contributes
Sources/%.o: ../Sources/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/MCUMathLib/Static_Code/Peripherals" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/MCUMathLib/Static_Code/System" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/MCUMathLib/Static_Code/PDD" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/MCUMathLib/Static_Code/IO_Map" -I"/home/jtoews/Desktop/keplercpp/ProcessorExpert/lib/Kinetis/pdd/inc" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/MCUMathLib/Sources" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/MCUMathLib/Generated_Code" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/MCUMathLib/Static_Code\Peripherals" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/MCUMathLib/Static_Code\System" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/MCUMathLib/Static_Code\PDD" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/MCUMathLib/Static_Code\IO_Map" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


