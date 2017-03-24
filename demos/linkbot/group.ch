#include "linkbot.h"

CLinkbotI robot1;
CLinkbotI robot2;

CLinkbotIGroup group;
group.addRobot(robot1);
group.addRobot(robot2);

group.driveDistance(12, 1.75);

