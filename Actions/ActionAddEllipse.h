#ifndef ACTION_ADD_ELPS_H
#define ACTION_ADD_ELPS_H

#include "Action.h"

//Add Ellipse Action class
class ActionAddEllipse : public Action
{
public:
	ActionAddEllipse(ApplicationManager* pApp);

	//Add Ellipse to the ApplicationManager
	virtual void Execute();

};

#endif