#include "mindstorms.h"

CMindstorms robot1;
CMindstorms robot2;

CMindstormsGroup group;
group.addRobot(robot1);
group.addRobot(robot2);

group.driveDistance(12, 1.1);

