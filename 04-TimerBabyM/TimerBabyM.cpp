#include "Arduino.h"
#include "TimerBabyM.h"


TimerBabyM::TimerBabyM(){

}

void TimerBabyM::usrInit(void (*CallECG)(void*), void (*CallACCEL)(void*), void (*CallWIFI)(void*)){
	os_timer_setfn(&_TimerECG, CallECG, NULL);
    os_timer_arm(&_TimerECG, 1, true);

    os_timer_setfn(&_TimerACCEL, CallACCEL, NULL);
    os_timer_arm(&_TimerACCEL, 40000, true);

    os_timer_setfn(&_TimerWIFI, CallWIFI, NULL);
    os_timer_arm(&_TimerWIFI, 60000, true);
}
