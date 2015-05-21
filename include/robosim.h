#ifndef ROBOSIM_H_
#define ROBOSIM_H_

#include "macros.h"
#pragma package <chrobosim>
#define dDOUBLE
#define ENABLE_GRAPHICS
#define ROBOT_NEUTRAL 0
#define ROBOT_HOLD 1
#define ROBOT_POSITIVE 2
#define ROBOT_NEGATIVE 3
#define ROBOT_FORWARD 2
#define ROBOT_BACKWARD 3
#define ROBOT_JOINT1 0
#define ROBOT_JOINT2 1
#define ROBOT_JOINT3 2

class DLLIMPORT RoboSim {
	public:
		RoboSim(char *name, int pause);
		virtual ~RoboSim();
		static void *_dlhandle;
		static int _dlcount;
};

void* RoboSim::_dlhandle = NULL;
int RoboSim::_dlcount = 0;

#endif  // ROBOSIM_H_
