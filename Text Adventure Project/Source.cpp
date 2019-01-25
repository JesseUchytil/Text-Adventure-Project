#include <string>
#include <iostream>
#include "Event1.h"
#include "Event2.h"
#include "Event3.h"
#include "Event4.h"
#include "IntroEvent.h"
#include "OutroEvent.h"

using namespace std;

int main() {//Congrats!  You downloaded the correct program and opened it correctly.
	IntroEvent intEvt;
	OutroEvent outEvt;
	Event1 evt1;
	Event2 evt2;
	Event3 evt3;
	Event4 evt4;

	intEvt.runEvent();
	evt1.runEvent();
	evt2.runEvent();
	evt3.runEvent();
	evt4.runEvent();
	outEvt.runEvent();

	int asdf = 0;

	cin >> asdf;

	return 0;
}