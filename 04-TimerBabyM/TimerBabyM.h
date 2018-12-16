#ifndef TIMERBABYM_H
#define TIMERBABYM_H

#include "Arduino.h"
extern "C"{
#include "user_interface.h"
}

class TimerBabyM{
public:
	TimerBabyM();
	void  usrInit(void (*CallECG)(void*), void (*CallACCEL)(void*), void (*CallWIFI)(void*));
	os_timer_t _TimerECG;
	os_timer_t _TimerACCEL;
	os_timer_t _TimerWIFI;


	bool _timeoutECG{false};
	bool _timeoutACCEL{false};
	bool _timeoutWIFI{false};
};

#endif