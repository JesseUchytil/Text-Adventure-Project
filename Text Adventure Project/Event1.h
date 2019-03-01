#pragma once
#include <string>
#include <iostream>
#include <cstdio>
#include <ctime>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 


class Event1 {
private:
	bool runMathGame();//runs the math game
	void createAdditionProblem(int min, int max, int problem[3]);//Creates an addition problem based on min and max numbers
	void createSubtractionProblem(int min, int max, int problem[3]);//Creates an subtraction problem based on min and max numbers
	void createMultiplicationProblem(int min, int max, int problem[3]);//Creates an multiplication problem based on min and max numbers
	void createDivisionProblem(int min, int max, int problem[3]);//Creates an division problem based on min and max numbers
public:
	Event1();//creates event 1
	void runEvent();//runs the event
};