################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/sizeof\ multidimensional\ arrays.cpp 

OBJS += \
./src/sizeof\ multidimensional\ arrays.o 

CPP_DEPS += \
./src/sizeof\ multidimensional\ arrays.d 


# Each subdirectory must supply rules for building sources it contributes
src/sizeof\ multidimensional\ arrays.o: ../src/sizeof\ multidimensional\ arrays.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/sizeof multidimensional arrays.d" -MT"src/sizeof\ multidimensional\ arrays.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


