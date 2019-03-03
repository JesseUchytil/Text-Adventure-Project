#include <string>
#include <iostream>
#include "Event1.h"
#include "Event2.h"
#include "Event3.h"
#include "Event4.h"
#include "IntroEvent.h"
#include "OutroEvent.h"

using namespace std;

int main() {
	IntroEvent intEvt;//Declare all events
	OutroEvent outEvt;
	Event1 evt1;
	Event2 evt2;
	Event3 evt3;
	Event4 evt4;

	intEvt.runEvent();//run each event in order
	evt1.runEvent();
	evt2.runEvent();
	evt3.runEvent();
	evt4.runEvent();
	outEvt.runEvent();

	int asdf = 0;

	cin >> asdf;//pause the console to prevent exit until user wants it.

	return 0;
}