# c_10_truncation_type_casting

## DESCRIPTION

If we calculate floating point numbers in languages we have to be careful of truncation. Truncation means that the decimal part of the number is truncated (eliminated). This can give us wrong results after calculations (division with integer numbers). If we divide two numbers and we save the result as integer type we truncate the result. If we want to have the decimal part of the result, we should use float type. But it is not enough to declare the result as float if we divide two integer numbers. We should use type casting in that case. With type casting we convert one of the two integers to floating point before the division, so the compiler will be aware that we want to divide floating point numbers.


## INSTALL LIBRARIES

The source code uses the cs50 library what you can download [HERE](https://github.com/cs50/libcs50).

To install the cs50 library follow the steps:

1. Open git bash terminal and change the current working directory to `src`:  
   > cd ./libsc50/src

2. Compile the cs50.c source into .o with:
   > gcc -c cs50.c -o cs50.o

3. Make the library archive:  
   > ar rcs libcs50.a cs50.o

4. Copy the `libcs50.a` file into your compiler's `lib` directory

5. Copy the `cs50.h` file into your compiler's `include` directory

## COMPILE AND RUN THE CODE

The code is written in C, the compiler used to generate the exe is: `gcc Rev10, Built by MSYS2 project 12.2.0`

Run the below code in terminal (git bash) to compile the source:

> gcc commandLineArgument.c -lcs50 -o ./build/commandLineArgument

To run the executable run the below code in terminal (git bash):

> ./build/commandLineArgument.exe
