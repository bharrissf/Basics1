################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Multidimensional\ arrays.cpp 

OBJS += \
./src/Multidimensional\ arrays.o 

CPP_DEPS += \
./src/Multidimensional\ arrays.d 


# Each subdirectory must supply rules for building sources it contributes
src/Multidimensional\ arrays.o: ../src/Multidimensional\ arrays.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Multidimensional arrays.d" -MT"src/Multidimensional\ arrays.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


