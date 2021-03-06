#ifndef __tgui_movezscreenfuncs_H
#define __tgui_movezscreenfuncs_H


#include "tgui.h"


void		_tgui_MovezBackButtonPress(void *tguiobj, void *param);
void		_tgui_MovezStopButtonPress(void *tguiobj, void *param);
void		_tgui_MovezHomeButtonPress(void *tguiobj, void *param);
void		_tgui_StartHoming(void *tguiobj, void *param);
void		_tgui_MovezStepSelectButtonPress(void *tguiobj, void *param);
void		_tgui_MovezUpButtonPress(void *tguiobj, void *param);
void		_tgui_MovezDownButtonPress(void *tguiobj, void *param);
void		_tgui_MovezSetZ0ButtonPress(void *tguiobj, void *param);

void		_tgui_MovezUpdateHomed();

void		_tgui_MovezSetZHome(void *tguiobj, void *param);
void		_tgui_MovezSetZHomeLiftAsk(void *tguiobj, void *param);
void		_tgui_MovezSetZHomeLift(void *tguiobj, void *param);
void		_tgui_MovezScreenProcess(void *tguiobj, void *param);




#endif /*__tgui_movezscreenfuncs_H */

