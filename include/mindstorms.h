#ifndef MINDSTORMS_H_
#define MINDSTORMS_H_

#include <array.h>

#include "macros.h"
#include "robosim.h"

class DLLIMPORT CMindstorms {
	public:
		CMindstorms(void);
		virtual ~CMindstorms();
		int blinkLED(double delay, int num);
		int connect(...);		// deprecated
		int connectWithSerialID(const char *id);
		int delay(double milliseconds);
		int delaySeconds(double seconds);
		int disableRecordDataShift(void);		// deprecated
		int disconnect(void);
		int driveAngle(double angle);
		int driveAngleNB(double angle);
		int driveBackward(double angle);		// deprecated
		int driveBackwardNB(double angle);		// deprecated
		int driveDistance(double distance, double radius);
		int driveDistanceNB(double distance, double radius);
		int driveForeverNB(void);
		int driveForward(double angle);		// deprecated
		int driveForwardNB(double angle);		// deprecated
		int driveJointTo(int id, double angle);		// deprecated
		int driveJointToNB(int id, double angle);		// deprecated
		int driveTime(double seconds);
		int driveTimeNB(double seconds);
		int driveTo(double angle1, double angle2);		// deprecated
		int driveToNB(double angle1, double angle2);		// deprecated
		int drivexy(double x, double y, double radius, double trackwidth);
		int drivexyNB(double x, double y, double radius, double trackwidth);
		int drivexyTo(double x, double y, double radius, double trackwidth);
		int drivexyToNB(double x, double y, double radius, double trackwidth);
		int drivexyToArrayNB(double *px, double *py, int n, double radius, double trackwidth);		// undocumented: for drivexyToExprNB
		int drivexyToExpr(double x0, double xf, int n, char *expr, double radius, double trackwidth);
		int drivexyToExprNB(double x0, double xf, int n, char *expr, double radius, double trackwidth);
		int drivexyToFunc(double x0, double xf, int n, double (*func)(double x), double radius, double trackwidth);
		int drivexyToFuncNB(double x0, double xf, int n, double (*func)(double x), double radius, double trackwidth);
		int drivexyWait(void);
		int enableRecordDataShift(void);
		int getAccelerometerData(double &accel_x, double &accel_y, double &accel_z);
		int getBatteryVoltage(double &voltage);
		int getColor(string_t &color);		// deprecated
		int getColorName(char color[]);		// deprecated
		int getColorRGB(int &r, int &g, int &b);		//deprecated
		int getLEDColor(string_t &color);
		int getLEDColorName(char color[]);
		int getLEDColorRGB(int &r, int &g, int &b);
		int getDistance(double &distance, double radius);
		int getFormFactor(int &formFactor);
		int getID(void);
		int getJointAngle(int id, double &angle, ... );
		int getJointAngleAverage(int id, double &angle, ... );		// deprecated
		int getJointAngleInstant(int id, double &angle);
		int getJointAngles(double &angle1, double &angle2, double &angle3, double &angle4, ...);
		int getJointAnglesAverage(double &angle1, double &angle2, double &angle3, double &angle4, ...);		// deprecated
		int getJointAnglesInstant(double &angle1, double &angle2, double &angle3, double &angle4);
		int getJointMaxSpeed(int id, double &maxSpeed);
		int getJointSafetyAngle(double &angle);
		int getJointSafetyAngleTimeout(double &seconds);
		int getJointSpeed(int id, double &speed);
		int getJointSpeedRatio(int id, double &ratio);
		int getJointSpeeds(double &speed1, double &speed2, double &speed3, double &speed4);
		int getJointSpeedRatios(double &ratio1, double &ratio2, double &ratio3, double &ratio4);
		int getPosition(double &x, double &y, double &angle);
		int getxy(double &x, double &y);
		int holdJoint(int id);
		int holdJoints(void);
		int holdJointsAtExit(void);
		int isConnected(void);
		int isMoving(void);
		int isNotMoving(void);
		int jumpJointTo(int id, double angle);		// deprecated
		int jumpJointToNB(int id, double angle);		// deprecated
		int jumpTo(double angle1, double angle2);		// deprecated
		int jumpToNB(double angle1, double angle2);		// deprecated
		int line(double x1, double y1, double z1, double x2, double y2, double z2, int linewidth, char *color);
		int move(double angle1, double angle2, double angle3, ...);
		int moveNB(double angle1, double angle2, double angle3, ...);
		int moveBackward(double angle);		// deprecated
		int moveBackwardNB(double angle);		// deprecated
		int moveDistance(double distance, double radius);		// deprecated
		int moveDistanceNB(double distance, double radius);		// deprecated
		int moveForeverNB(void);
		int moveForward(double angle);		// deprecated
		int moveForwardNB(double angle);		// deprecated
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
		int moveTo(double angle1, double angle2, double angle3, ...);
		int moveToNB(double angle1, double angle2, double angle3, ...);
		int moveToByTrackPos(double angle1, double angle2, angle3, ...);
		int moveToByTrackPosNB(double angle1, double angle2, angle3, ...);
		int moveToZero(void);
		int moveToZeroNB(void);
		int moveWait(void);
		int movexy(double x, double y, double radius, double trackwidth);		// deprecated
		int movexyNB(double x, double y, double radius, double trackwidth);		// deprecated
		int movexyTo(double x, double y, double radius, double trackwidth);		// deprecated
		int movexyToNB(double x, double y, double radius, double trackwidth);		// deprecated
		int movexyToExpr(double x0, double xf, int n, char *expr, double radius, double trackwidth);		// deprecated
		int movexyToExprNB(double x0, double xf, int n, char *expr, double radius, double trackwidth);		// deprecated
		int movexyToFunc(double x0, double xf, int n, double (*func)(double x), double radius, double trackwidth);		// deprecated
		int movexyToFuncNB(double x0, double xf, int n, double (*func)(double x), double radius, double trackwidth);		// deprecated
		int movexyWait(void);		// deprecated
		int point(double x, double y, double z, int pointsize, char *color);
		int recordAngle(int id, double time[:], double angle[:], int num, double seconds, ...);		// deprecated
		int recordAngleBegin(int id, robotRecordData_t &time, robotRecordData_t &angle, double seconds, ...);
		int recordAngleEnd(int id, int &num);
		int recordAngles(double time[:], double angle1[:], double angle2[:], double angle3[:], double angle4[:], int num, double seconds, ...);		// deprecated
		int recordAnglesBegin(robotRecordData_t &time, robotRecordData_t &a2, robotRecordData_t &a3, double seconds, ...);
		int recordAnglesEnd(int &num);
		int recordDistanceBegin(robotRecordData_t &time, robotRecordData_t &distance, double radius, double seconds);
		int recordDistanceEnd(int &num);
		int recordDistanceOffset(double distance);
		int recordDistancesBegin(robotRecordData_t &time, robotRecordData_t &d1, robotRecordData_t &d2, robotRecordData_t &d3, robotRecordData_t &d4, double radius, double seconds, ...);		// deprecated
		int recordDistancesEnd(int &num);		// deprecated
		int recordNoDataShift(void);
		int recordWait(void);
		int recordxyBegin(robotRecordData_t &x, robotRecordData_t &y, double seconds, ...);
		int recordxyEnd(int &num);
		int relaxJoint(int id);
		int relaxJoints(void);
		int reset(void);		// deprecated
		int resetToZero(void);
		int resetToZeroNB(void);
		int setBuzzerFrequency(int frequency, double time);
		int setBuzzerFrequencyOff(void);
		int setBuzzerFrequencyOn(int frequency);
		int setColor(char *color);		// deprecated
		int setColorRGB(int r, int g, int b);		// deprecated
		int setExitState(int exitState);		// deprecated
		int setLEDColor(char *color);
		int setLEDColorRGB(int r, int g, int b);
		int setJointMovementStateNB(int id, int dir);		// deprecated
		int setJointMovementStateTime(int id, int dir, double seconds);		// deprecated
		int setJointMovementStateTimeNB(int id, int dir, double seconds);		// deprecated
		int setJointPower(int id, int power);		// deprecated
		int setJointSafetyAngle(double angle);
		int setJointSafetyAngleTimeout(double seconds);
		int setJointSpeed(int id, double speed);
		int setJointSpeeds(double speed1, double speed2, double speed3, ...);
		int setJointSpeedRatio(int id, double ratio);
		int setJointSpeedRatios(double ratios1, double ratios2, double ratios3, ...);
		int setMotorPower(int id, int power);		// deprecated
		int setMovementStateNB(int dir1, int dir2, int dir3);		// deprecated
		int setMovementStateTime(int dir1, int dir2, int dir3, double seconds);		// deprecated
		int setMovementStateTimeNB(int dir1, int dir2, int dir3, double seconds);		// deprecated
		int setSpeed(double speed, double radius);
		int setTwoWheelRobotSpeed(double speed, double radius);		// deprecated
		int stop(void);		// deprecated
		int stopAllJoints(void);		// deprecated
		int stopOneJoint(int id);		// deprecated
		int stopThreeJoints(int id1, int id2, int id3);		// deprecated
		int stopTwoJoints(int id1, int id2);		// deprecated
		int systemTime(double &time);
		int text(double x, double y, double z, char *text);
		int traceOff(void);
		int traceOn(void);
		int turnLeft(double angle, double radius, double trackwidth);
		int turnLeftNB(double angle, double radius, double trackwidth);
		int turnRight(double angle, double radius, double trackwidth);
		int turnRightNB(double angle, double radius, double trackwidth);
};

class DLLIMPORT CMindstormsGroup {
	public:
		CMindstormsGroup(void);
		virtual ~CMindstormsGroup();
		int addRobot(CMindstorms& robot);
		int addRobots(array CMindstorms robots[], ...);
		int blinkLED(double delay, int num);
		int connect(void);		// deprecated
		int driveAngle(double angle);
		int driveAngleNB(double angle);
		int driveBackward(double angle);		// deprecated
		int driveBackwardNB(double angle);		// deprecated
		int driveDistance(double distance, double radius);
		int driveDistanceNB(double distance, double radius);
		int driveForeverNB(void);
		int driveForward(double angle);		// deprecated
		int driveForwardNB(double angle);		// deprecated
		int driveJointTo(int id, double angle);		// deprecated
		int driveJointToNB(int id, double angle);		// deprecated
		int driveTime(double seconds);
		int driveTimeNB(double seconds);
		int driveTo(double angle1, double angle2);		// deprecated
		int driveToNB(double angle1, double angle2);		// deprecated
		int holdJoint(int id);
		int holdJoints(void);
		int holdJointsAtExit(void);
		int isMoving(void);
		int isNotMoving(void);
		int jumpJointTo(int id, double angle);		// deprecated
		int jumpJointToNB(int id, double angle);		// deprecated
		int jumpTo(double angle1, double angle2);		// deprecated
		int jumpToNB(double angle1, double angle2);		// deprecated
		int move(double angle1, double angle2, double angle3, ...);
		int moveNB(double angle1, double angle2, double angle3, ...);
		int moveBackward(double angle);		// deprecated
		int moveBackwardNB(double angle);		// deprecated
		int moveDistance(double distance, double radius);		// deprecated
		int moveDistanceNB(double distance, double radius);		// deprecated
		int moveForeverNB(void);
		int moveForward(double angle);		// deprecated
		int moveForwardNB(double angle);		// deprecated
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
		int moveTo(double angle1, double angle2, double angle3, ...);
		int moveToNB(double angle1, double angle2, double angle3, ...);
		int moveToByTrackPos(double angle1, double angle2, double angle3, ...);
		int moveToByTrackPosNB(double angle1, double angle2, double angle3, ...);
		int moveToZero(void);
		int moveToZeroNB(void);
		int moveWait(void);
		int relaxJoint(int id);
		int relaxJoints(void);
		int reset(void);		// deprecated
		int resetToZero(void);
		int resetToZeroNB(void);
		int setBuzzerFrequency(int frequency, double time);
		int setBuzzerFrequencyOff(void);
		int setBuzzerFrequencyOn(int frequency);
		int setColor(char *color);		// deprecated
		int setColorRGB(int r, int g, int b);		// deprecated
		int setExitState(int exitState);		// deprecated
		int setLEDColor(char *color);
		int setLEDColorRGB(int r, int g, int b);
		int setJointMovementStateNB(int id, int dir);		// deprecated
		int setJointMovementStateTime(int id, int dir, double seconds);		// deprecated
		int setJointMovementStateTimeNB(int id, int dir, double seconds);		// deprecated
		int setJointPower(int id, int power);		// deprecated
		int setJointSafetyAngle(double angle);
		int setJointSafetyAngleTimeout(double seconds);
		int setJointSpeed(int id, double speed);
		int setJointSpeeds(double speed1, double speed2, double speed3, ...);
		int setJointSpeedRatio(int id, double ratio);
		int setJointSpeedRatios(double ratios1, double ratios2, double ratio3, ...);
		int setMotorPower(int id, int power);		// deprecated
		int setMovementStateNB(int dir1, int dir2, int dir3);		// deprecated
		int setMovementStateTime(int dir1, int dir2, int dir3, double seconds);		// deprecated
		int setMovementStateTimeNB(int dir1, int dir2, int dir3, double seconds);		// deprecated
		int setSpeed(double speed, double radius);
		int setTwoWheelRobotSpeed(double speed, double radius);		// deprecated
		int stop(void);		// deprecated
		int stopAllJoints(void);		// deprecated
		int stopOneJoint(int id);		// deprecated
		int stopThreeJoints(int id1, int id2, int id3);		// deprecated
		int stopTwoJoints(int id1, int id2);		// deprecated
		int traceOff(void);
		int traceOn(void);
		int turnLeft(double angle, double radius, double trackwidth);
		int turnLeftNB(double angle, double radius, double trackwidth);
		int turnRight(double angle, double radius, double trackwidth);
		int turnRightNB(double angle, double radius, double trackwidth);
};

#pragma importf "cmindstorms.chf"

#endif // MINDSTORMS_H_

