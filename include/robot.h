#ifndef ROBOT_H_
#define ROBOT_H_

class DLLIMPORT RoboSim {
	public:
		RoboSim(char *name, int pause);
		virtual ~RoboSim();
		static void *_dlhandle;
		static int _dlcount;
};

class DLLIMPORT Robot {
	public:
		Robot(int, int);
		virtual ~Robot();

		int blinkLED(double, int);
		int connect(...);
		int delay(double);
		int delaySeconds(double);
		int disableRecordDataShift(void);
		int disconnect(void);
		int driveBackward(double);
		int driveBackwardNB(double);
		int driveDistance(double, double);
		int driveDistanceNB(double, double);
		int driveForever(void);
		int driveForeverNB(void);
		int driveForward(double);
		int driveForwardNB(double);
		int driveTime(double);
		int driveTimeNB(double);
		int drivexy(double, double, double, double);
		int drivexyNB(double, double, double, double);
		int drivexyTo(double, double, double, double);
		int drivexyToNB(double, double, double, double);
		int drivexyToFunc(double, double, int, double (*func)(double), double, double);
		int drivexyToFuncNB(double, double, int, double (*func)(double), double, double);
		int drivexyToFuncSmooth(double, double, int, double (*func)(double), double, double);
		int drivexyToPoly(double, double, int, char*, double, double);
		int drivexyToPolyNB(double, double, int, char*, double, double);
		int drivexyToSmooth(double, double, double, double, double, double, double, double);
		int drivexyWait(void);
		int enableRecordDataShift(void);
		int getAccelerometerData(double&, double&, double&);
		int getBatteryVoltage(double&);
		int getDistance(double&, double);
		int getFormFactor(int&);
		int getID(void);
		int getJointAngle(int, double&, ...);
		int getJointAngleInstant(int, double&);
		int getJointMaxSpeed(int, double&);
		int getJointSafetyAngle(double&);
		int getJointSafetyAngleTimeout(double&);
		int getJointSpeed(int, double&);
		int getJointSpeedRatio(int, double&);
		int getLEDColorName(char[]);
		int getLEDColorRGB(int&, int&, int&);
		int getxy(double&, double&);
		int holdJoint(int);
		int holdJoints(void);
		int holdJointsAtExit(void);
		int isConnected(void);
		int isMoving(void);
		int isNotMoving(void);
		int moveForeverNB(void);
		int moveJoint(int, double);
		int moveJointNB(int, double);
		int moveJointByPowerNB(int, int);
		int moveJointForeverNB(int);
		int moveJointTime(int, double);
		int moveJointTimeNB(int, double);
		int moveJointTo(int, double);
		int moveJointToNB(int, double);
		int moveJointToByTrackPos(int, double);
		int moveJointToByTrackPosNB(int, double);
		int moveJointWait(int);
		int moveTime(double);
		int moveTimeNB(double);
		int moveToZero(void);
		int moveToZeroNB(void);
		int moveWait(void);
		int recordAngle(int, double[], double[], int, double, ...);
		int recordAngleBegin(int, robotRecordData_t&, robotRecordData_t&, double, ...);
		int recordAngleEnd(int, int&);
		int recordAnglesEnd(int&);
		int recordDistanceBegin(int, robotRecordData_t&, robotRecordData_t&, double, double, ...);
		int recordDistanceEnd(int, int&);
		int recordDistanceOffset(double);
		int recordDistancesEnd(int&);
		int recordWait(void);
		int recordxyBegin(robotRecordData_t&, robotRecordData_t&, double, ...);
		int recordxyEnd(int&);
		int relaxJoint(int id);
		int relaxJoints(void);
		int resetToZero(void);
		int resetToZeroNB(void);
		int setBuzzerFrequency(int, double);
		int setBuzzerFrequencyOff(void);
		int setBuzzerFrequencyOn(int);
		int setLEDColor(char*);
		int setLEDColorRGB(int, int, int);
		int setJointSafetyAngle(double);
		int setJointSafetyAngleTimeout(double);
		int setJointSpeed(int, double);
		int setJointSpeedRatio(int, double);
		int setSpeed(double, double);
		int systemTime(double&);
		int traceOff(void);
		int traceOn(void);
		int turnLeft(double, double, double);
		int turnLeftNB(double, double, double);
		int turnRight(double, double, double);
		int turnRightNB(double, double, double);
};

class DLLIMPORT RobotGroup {
	public:
		RobotGroup();
		virtual ~RobotGroup();
		int addRobot(Robot& robot);
		int addRobots(array Robot robots[], ...);

		int blinkLED(double delay, int num);
		int connect(void);
		int driveBackward(double angle);
		int driveBackwardNB(double angle);
		int driveDistance(double distance, double radius);
		int driveDistanceNB(double distance, double radius);
		int driveForeverNB(void);
		int driveForward(double angle);
		int driveForwardNB(double angle);
		int driveTime(double seconds);
		int driveTimeNB(double seconds);
		int holdJoint(int id);
		int holdJoints(void);
		int holdJointsAtExit(void);
		int isMoving(void);
		int isNotMoving(void);
		int moveForeverNB(void);
		int moveJoint(int id, double angle);
		int moveJointNB(int id, double angle);
		int moveJointByPowerNB(int id, int power);
		int moveJointForeverNB(int id);
		int moveJointTime(int id, double seconds);
		int moveJointTimeNB(int id, double seconds);
		int moveJointTo(int id, double angle);
		int moveJointToNB(int id, double angle);
		int moveJointToByTrackPos(int id, double angle);
		int moveJointToByTrackPosNB(int id, double angle);
		int moveJointWait(int id);
		int moveTime(double seconds);
		int moveTimeNB(double seconds);
		int moveToZero(void);
		int moveToZeroNB(void);
		int moveWait(void);
		int relaxJoint(int id);
		int relaxJoints(void);
		int reset(void);
		int resetToZero(void);
		int resetToZeroNB(void);
		int setBuzzerFrequency(int, double);
		int setBuzzerFrequencyOff(void);
		int setBuzzerFrequencyOn(int);
		int setLEDColor(char*);
		int setLEDColorRGB(int, int, int);
		int setJointSafetyAngle(double angle);
		int setJointSafetyAngleTimeout(double angle);
		int setJointSpeed(int id, double speed);
		int setJointSpeedRatio(int id, double ratio);
		int setSpeed(double speed, double radius);
		int traceOff(void);
		int traceOn(void);
		int turnLeft(double angle, double radius, double trackwidth);
		int turnLeftNB(double angle, double radius, double trackwidth);
		int turnRight(double angle, double radius, double trackwidth);
		int turnRightNB(double angle, double radius, double trackwidth);
};

void* RoboSim::_dlhandle = NULL;
int RoboSim::_dlcount = 0;
#pragma importf "robotgroup.chf"

#endif  // ROBOT_H_

