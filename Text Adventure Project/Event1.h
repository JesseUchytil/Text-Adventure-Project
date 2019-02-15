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
	bool runMathGame();
	void createAdditionProblem(int min, int max, int problem[3]);
	void createSubtractionProblem(int min, int max, int problem[3]);
	void createMultiplicationProblem(int min, int max, int problem[3]);
	void createDivisionProblem(int min, int max, int problem[3]);
	bool runEnglishGame();
public:
	Event1();
	void runEvent();
};