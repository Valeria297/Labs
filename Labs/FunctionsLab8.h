#pragma once

#include <iostream>
#include <math.h>
using namespace std;

typedef int (*func)(int a);

int rez1(func a);
int func1(int x);
int rez2(func a);
int func2(int x);
int factorial(int i);