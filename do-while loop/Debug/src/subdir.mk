################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/do-while\ loop.cpp 

OBJS += \
./src/do-while\ loop.o 

CPP_DEPS += \
./src/do-while\ loop.d 


# Each subdirectory must supply rules for building sources it contributes
src/do-while\ loop.o: ../src/do-while\ loop.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/do-while loop.d" -MT"src/do-while\ loop.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


