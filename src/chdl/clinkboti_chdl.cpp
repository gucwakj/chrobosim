#include "../../../librobosim/include/linkbot.h"
#ifdef _WIN32
#include <windows.h>
#endif
#include <ch.h>

struct langflags {
	int tmp1;
	char *tmp2;
	int embedch;
};
extern struct langflags *e_lang;

EXPORTCH void CLinkbotI_CLinkbotI_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *c=new CLinkbotI();
	Ch_VaStart(interp, ap, varg);
	Ch_CppChangeThisPointer(interp, c, sizeof(CLinkbotI));
	Ch_VaEnd(interp, ap);
}

EXPORTCH void CLinkbotI_dCLinkbotI_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *c;
	Ch_VaStart(interp, ap, varg);
	c = Ch_VaArg(interp, ap, class CLinkbotI *);
	if(Ch_CppIsArrayElement(interp))
		c->~CLinkbotI();
	else
		delete c;
	Ch_VaEnd(interp, ap);
	return;
}

EXPORTCH int CLinkbotI_accelJointAngleNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double acceleration;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	acceleration = Ch_VaArg(interp, ap, double);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->accelJointAngleNB(id, acceleration, angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_accelJointCycloidalNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double angle;
	double timeout;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double);
	timeout = Ch_VaArg(interp, ap, double);
	retval = robot->accelJointCycloidalNB(id, angle, timeout);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_accelJointHarmonicNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double angle;
	double timeout;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double);
	timeout = Ch_VaArg(interp, ap, double);
	retval = robot->accelJointHarmonicNB(id, angle, timeout);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_accelJointSmoothNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double accel0;
	double accelf;
	double vmax;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	accel0 = Ch_VaArg(interp, ap, double);
	accelf = Ch_VaArg(interp, ap, double);
	vmax = Ch_VaArg(interp, ap, double);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->accelJointSmoothNB(id, accel0, accelf, vmax, angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_accelJointTimeNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double acceleration;
	double time;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	acceleration = Ch_VaArg(interp, ap, double);
	time = Ch_VaArg(interp, ap, double);
	retval = robot->accelJointTimeNB(id, acceleration, time);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_accelJointToVelocityNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double acceleration;
	double v;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	acceleration = Ch_VaArg(interp, ap, double);
	v = Ch_VaArg(interp, ap, double);
	retval = robot->accelJointToVelocityNB(id, acceleration, v);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_accelJointToMaxSpeedNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double acceleration;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	acceleration = Ch_VaArg(interp, ap, double);
	retval = robot->accelJointToMaxSpeedNB(id, acceleration);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_blinkLED_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double delay;
	int numBlinks;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	delay = Ch_VaArg(interp, ap, double);
	numBlinks = Ch_VaArg(interp, ap, int);
	retval = robot->blinkLED(delay, numBlinks);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_closeGripper_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->closeGripper();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_closeGripperNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->closeGripperNB();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_delay_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double milliseconds;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	milliseconds = Ch_VaArg(interp, ap, double);
	retval = robot->delay(milliseconds);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_delaySeconds_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double seconds;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	seconds = Ch_VaArg(interp, ap, double);
	retval = robot->delaySeconds(seconds);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_disableRecordDataShift_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->disableRecordDataShift();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_disconnect_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->disconnect();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_driveAccelCycloidalNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double radius;
	double distance;
	double timeout;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	radius = Ch_VaArg(interp, ap, double);
	distance = Ch_VaArg(interp, ap, double);
	timeout = Ch_VaArg(interp, ap, double);
	retval = robot->driveAccelCycloidalNB(radius, distance, timeout);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_driveAccelDistanceNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double radius;
	double acceleration;
	double distance;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	radius = Ch_VaArg(interp, ap, double);
	acceleration = Ch_VaArg(interp, ap, double);
	distance = Ch_VaArg(interp, ap, double);
	retval = robot->driveAccelDistanceNB(radius, acceleration, distance);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_driveAccelHarmonicNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double radius;
	double distance;
	double timeout;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	radius = Ch_VaArg(interp, ap, double);
	distance = Ch_VaArg(interp, ap, double);
	timeout = Ch_VaArg(interp, ap, double);
	retval = robot->driveAccelHarmonicNB(radius, distance, timeout);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_driveAccelSmoothNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double radius;
	double accel0;
	double accelf;
	double vmax;
	double distance;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	radius = Ch_VaArg(interp, ap, double);
	accel0 = Ch_VaArg(interp, ap, double);
	accelf = Ch_VaArg(interp, ap, double);
	vmax = Ch_VaArg(interp, ap, double);
	distance = Ch_VaArg(interp, ap, double);
	retval = robot->driveAccelSmoothNB(radius, accel0, accelf, vmax, distance);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_driveAccelTimeNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double radius;
	double acceleration;
	double timeout;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	radius = Ch_VaArg(interp, ap, double);
	acceleration = Ch_VaArg(interp, ap, double);
	timeout = Ch_VaArg(interp, ap, double);
	retval = robot->driveAccelTimeNB(radius, acceleration, timeout);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_driveAccelToMaxSpeedNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double radius;
	double acceleration;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	radius = Ch_VaArg(interp, ap, double);
	acceleration = Ch_VaArg(interp, ap, double);
	retval = robot->driveAccelToMaxSpeedNB(radius, acceleration);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_driveAccelToVelocityNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double radius;
	double acceleration;
	double v;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	radius = Ch_VaArg(interp, ap, double);
	acceleration = Ch_VaArg(interp, ap, double);
	v = Ch_VaArg(interp, ap, double);
	retval = robot->driveAccelToVelocityNB(radius, acceleration, v);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_driveAngle_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->driveAngle(angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_driveAngleNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->driveAngleNB(angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_driveDistance_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double distance;
	double radius;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	distance = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	retval = robot->driveDistance(distance, radius);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_driveDistanceNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double distance;
	double radius;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	distance = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	retval = robot->driveDistanceNB(distance, radius);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_driveForeverNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->driveForeverNB();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_driveTime_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double seconds;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	seconds = Ch_VaArg(interp, ap, double);
	retval = robot->driveTime(seconds);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_driveTimeNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double seconds;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	seconds = Ch_VaArg(interp, ap, double);
	retval = robot->driveTimeNB(seconds);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_drivexy_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double x;
	double y;
	double radius;
	double trackwidth;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	x = Ch_VaArg(interp, ap, double);
	y = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	trackwidth = Ch_VaArg(interp, ap, double);
	retval = robot->drivexy(x, y, radius, trackwidth);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_drivexyNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double x;
	double y;
	double radius;
	double trackwidth;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	x = Ch_VaArg(interp, ap, double);
	y = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	trackwidth = Ch_VaArg(interp, ap, double);
	retval = robot->drivexyNB(x, y, radius, trackwidth);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_drivexyTo_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double x;
	double y;
	double radius;
	double trackwidth;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	x = Ch_VaArg(interp, ap, double);
	y = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	trackwidth = Ch_VaArg(interp, ap, double);
	retval = robot->drivexyTo(x, y, radius, trackwidth);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_drivexyToNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double x;
	double y;
	double radius;
	double trackwidth;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	x = Ch_VaArg(interp, ap, double);
	y = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	trackwidth = Ch_VaArg(interp, ap, double);
	retval = robot->drivexyToNB(x, y, radius, trackwidth);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_drivexyToArrayNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double *px;
	double *py;
	double radius;
	double trackwidth;
	int n;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	px = Ch_VaArg(interp, ap, double*);
	py = Ch_VaArg(interp, ap, double*);
	n = Ch_VaArg(interp, ap, int);
	radius = Ch_VaArg(interp, ap, double);
	trackwidth = Ch_VaArg(interp, ap, double);
	retval = robot->drivexyToArrayNB(px, py, n, radius, trackwidth);
	Ch_VaEnd(interp, ap);
	return retval;
}

typedef double (*IdrivexyFuncHandle)(double);
static ChInterp_t interpI;
static double IdrivexyFunc_chdl_funarg(double x);
static void *IdrivexyFunc_chdl_funptr;
EXPORTCH int CLinkbotI_drivexyToFunc_chdl(void *varg) {
	ChVaList_t ap;
	class CLinkbotI *robot;
	double x0;
	double xf;
	int n;
	IdrivexyFuncHandle handle_ch, handle_c = NULL;
	double radius;
	double trackwidth;
	int retval;

	Ch_VaStart(interpI, ap, varg);
	robot = Ch_VaArg(interpI, ap, class CLinkbotI *);
	x0 = Ch_VaArg(interpI, ap, double);
	xf = Ch_VaArg(interpI, ap, double);
	n = Ch_VaArg(interpI, ap, int);
	handle_ch = Ch_VaArg(interpI, ap, IdrivexyFuncHandle);
	IdrivexyFunc_chdl_funptr = (void *)handle_ch;
	if (handle_ch != NULL) {
		handle_c = (IdrivexyFuncHandle)IdrivexyFunc_chdl_funarg;
	}
	radius = Ch_VaArg(interpI, ap, double);
	trackwidth = Ch_VaArg(interpI, ap, double);
	retval = robot->drivexyToFunc(x0, xf, n, handle_c, radius, trackwidth);
	Ch_VaEnd(interpI, ap);
	return retval;
}
static double IdrivexyFunc_chdl_funarg(double x) {
	double retval;
	Ch_CallFuncByAddr(interpI, IdrivexyFunc_chdl_funptr, &retval, x);
	return retval;
}

EXPORTCH int CLinkbotI_drivexyWait_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->drivexyWait();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_enableRecordDataShift_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->enableRecordDataShift();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getAccelerometerData_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double *x, *y, *z;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	x = Ch_VaArg(interp, ap, double *);
	y = Ch_VaArg(interp, ap, double *);
	z = Ch_VaArg(interp, ap, double *);
	retval = robot->getAccelerometerData(*x, *y, *z);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getBatteryVoltage_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double *voltage;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	voltage = Ch_VaArg(interp, ap, double *);
	retval = robot->getBatteryVoltage(*voltage);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getLEDColorName_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	char *color;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	color = Ch_VaArg(interp, ap, char *);
	retval = robot->getLEDColorName(color);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getLEDColorRGB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int *r, *g, *b;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	r = Ch_VaArg(interp, ap, int *);
	g = Ch_VaArg(interp, ap, int *);
	b = Ch_VaArg(interp, ap, int *);
	retval = robot->getLEDColorRGB(*r, *g, *b);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getDistance_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double *distance;
	double radius;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	distance = Ch_VaArg(interp, ap, double *);
	radius = Ch_VaArg(interp, ap, double);
	retval = robot->getDistance(*distance, radius);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getFormFactor_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int* formFactor;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	formFactor = Ch_VaArg(interp, ap, int *);
	retval = robot->getFormFactor(*formFactor);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getID_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->getID();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getJointAngle_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double* angle;
	int numReadings;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double *);
	if(Ch_VaCount(interp, ap) == 1) {
	  numReadings = Ch_VaArg(interp, ap, int);
	  retval = robot->getJointAngle(id, *angle, numReadings);
	}
	else {
	  retval = robot->getJointAngle(id, *angle);
	}
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getJointAngleInstant_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double* angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double *);
	retval = robot->getJointAngleInstant(id, *angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getJointAngles_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double* angle1;
	double* angle2;
	double* angle3;
	int numReadings;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle1 = Ch_VaArg(interp, ap, double *);
	angle2 = Ch_VaArg(interp, ap, double *);
	angle3 = Ch_VaArg(interp, ap, double *);
	if(Ch_VaCount(interp ,ap) == 1) {
	  numReadings = Ch_VaArg(interp, ap, int);
	  retval = robot->getJointAngles(*angle1, *angle2, *angle3, numReadings);
	} else {
	  retval = robot->getJointAngles(*angle1, *angle2, *angle3);
	}
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getJointAnglesInstant_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double* angle1;
	double* angle2;
	double* angle3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle1 = Ch_VaArg(interp, ap, double *);
	angle2 = Ch_VaArg(interp, ap, double *);
	angle3 = Ch_VaArg(interp, ap, double *);
	retval = robot->getJointAnglesInstant(*angle1, *angle2, *angle3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getJointMaxSpeed_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double *speed;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	speed = Ch_VaArg(interp, ap, double *);
	retval = robot->getJointMaxSpeed(id, *speed);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getJointSafetyAngle_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double* angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle = Ch_VaArg(interp, ap, double *);
	retval = robot->getJointSafetyAngle(*angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getJointSafetyAngleTimeout_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double* seconds;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	seconds = Ch_VaArg(interp, ap, double *);
	retval = robot->getJointSafetyAngleTimeout(*seconds);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getJointSpeed_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double *speed;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	speed = Ch_VaArg(interp, ap, double *);
	retval = robot->getJointSpeed(id, *speed);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getJointSpeeds_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double *speed1;
	double *speed2;
	double *speed3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	speed1 = Ch_VaArg(interp, ap, double *);
	speed2 = Ch_VaArg(interp, ap, double *);
	speed3 = Ch_VaArg(interp, ap, double *);
	retval = robot->getJointSpeeds(*speed1, *speed2, *speed3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getJointSpeedRatio_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double *speed;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	speed = Ch_VaArg(interp, ap, double *);
	retval = robot->getJointSpeedRatio(id, *speed);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getJointSpeedRatios_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double *ratio1;
	double *ratio2;
	double *ratio3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	ratio1 = Ch_VaArg(interp, ap, double *);
	ratio2 = Ch_VaArg(interp, ap, double *);
	ratio3 = Ch_VaArg(interp, ap, double *);
	retval = robot->getJointSpeedRatios(*ratio1, *ratio2, *ratio3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getPosition_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double *x;
	double *y;
	double *angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	x = Ch_VaArg(interp, ap, double *);
	y = Ch_VaArg(interp, ap, double *);
	angle = Ch_VaArg(interp, ap, double *);
	retval = robot->getPosition(*x, *y, *angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_getxy_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double *x;
	double *y;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	x = Ch_VaArg(interp, ap, double *);
	y = Ch_VaArg(interp, ap, double *);
	retval = robot->getxy(*x, *y);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_holdJoint_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	retval = robot->holdJoint(id);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_holdJoints_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->holdJoints();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_holdJointsAtExit_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->holdJointsAtExit();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_isConnected_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->isConnected();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_isMoving_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->isMoving();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_isNotMoving_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->isNotMoving();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_move_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double angle1;
	double angle2;
	double angle3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle1 = Ch_VaArg(interp, ap, double);
	angle2 = Ch_VaArg(interp, ap, double);
	angle3 = Ch_VaArg(interp, ap, double);
	retval = robot->move(angle1, angle2, angle3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double angle1;
	double angle2;
	double angle3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle1 = Ch_VaArg(interp, ap, double);
	angle2 = Ch_VaArg(interp, ap, double);
	angle3 = Ch_VaArg(interp, ap, double);
	retval = robot->moveNB(angle1, angle2, angle3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveForeverNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->moveForeverNB();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveJoint_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->moveJoint(id, angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveJointNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->moveJointNB(id, angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveJointByPowerNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	int power;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	power = Ch_VaArg(interp, ap, int);
	retval = robot->moveJointByPowerNB(id, power);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveJointForeverNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint );
	retval = robot->moveJointForeverNB(id);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveJointTime_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double seconds;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	seconds = Ch_VaArg(interp, ap, double);
	retval = robot->moveJointTime(id, seconds);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveJointTimeNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double seconds;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	seconds = Ch_VaArg(interp, ap, double);
	retval = robot->moveJointTimeNB(id, seconds);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveJointTo_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->moveJointTo(id, angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveJointToNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->moveJointToNB(id, angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveJointToByTrackPos_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->moveJointToByTrackPos(id, angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveJointToByTrackPosNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->moveJointToByTrackPosNB(id, angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveJointWait_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	retval = robot->moveJointWait(id);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveTime_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double seconds;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	seconds = Ch_VaArg(interp, ap, double);
	retval = robot->moveTime(seconds);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveTimeNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double seconds;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	seconds = Ch_VaArg(interp, ap, double);
	retval = robot->moveTimeNB(seconds);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveTo_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double angle1;
	double angle2;
	double angle3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle1 = Ch_VaArg(interp, ap, double);
	angle2 = Ch_VaArg(interp, ap, double);
	angle3 = Ch_VaArg(interp, ap, double);
	retval = robot->moveTo(angle1, angle2, angle3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveToNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double angle1;
	double angle2;
	double angle3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle1 = Ch_VaArg(interp, ap, double);
	angle2 = Ch_VaArg(interp, ap, double);
	angle3 = Ch_VaArg(interp, ap, double);
	retval = robot->moveToNB(angle1, angle2, angle3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveToByTrackPos_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double angle1;
	double angle2;
	double angle3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle1 = Ch_VaArg(interp, ap, double);
	angle2 = Ch_VaArg(interp, ap, double);
	angle3 = Ch_VaArg(interp, ap, double);
	retval = robot->moveToByTrackPos(angle1, angle2, angle3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveToByTrackPosNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double angle1;
	double angle2;
	double angle3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle1 = Ch_VaArg(interp, ap, double);
	angle2 = Ch_VaArg(interp, ap, double);
	angle3 = Ch_VaArg(interp, ap, double);
	retval = robot->moveToByTrackPosNB(angle1, angle2, angle3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveToZero_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->moveToZero();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveToZeroNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->moveToZeroNB();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_moveWait_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->moveWait();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_openGripper_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->openGripper(angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_openGripperNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->openGripperNB(angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_recordAngle_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double* time;
	double* angle;
	int num;
	double seconds;
	int shiftData;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	time = Ch_VaArg(interp, ap, double*);
	angle = Ch_VaArg(interp, ap, double*);
	num = Ch_VaArg(interp, ap, int);
	seconds = Ch_VaArg(interp, ap, double);
	if(Ch_VaCount(interp, ap) == 1) {
	  shiftData = Ch_VaArg(interp, ap, int);
	  retval = robot->recordAngle(id, time, angle, num, seconds, shiftData);
	} else {
	  retval = robot->recordAngle(id, time, angle, num, seconds);
	}
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_recordAngleBegin_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double** time;
	double** angle;
	double seconds;
	int shiftData;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	time = Ch_VaArg(interp, ap, double**);
	angle = Ch_VaArg(interp, ap, double**);
	seconds = Ch_VaArg(interp, ap, double);
	if(Ch_VaCount(interp, ap) == 1) {
	  shiftData = Ch_VaArg(interp, ap, int);
	  retval = robot->recordAngleBegin(id, *time, *angle, seconds, shiftData);
	} else {
	  retval = robot->recordAngleBegin(id, *time, *angle, seconds);
	}
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_recordAngleEnd_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	int *num;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	num = Ch_VaArg(interp, ap, int* );
	retval = robot->recordAngleEnd(id, *num);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_recordAngles_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double* time;
	double* angle1;
	double* angle2;
	double* angle3;
	int num;
	double seconds;
	int shiftData;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	time = Ch_VaArg(interp, ap, double*);
	angle1 = Ch_VaArg(interp, ap, double*);
	angle2 = Ch_VaArg(interp, ap, double*);
	angle3 = Ch_VaArg(interp, ap, double*);
	num = Ch_VaArg(interp, ap, int);
	seconds = Ch_VaArg(interp, ap, double);
	if(Ch_VaCount(interp, ap) == 1) {
	  shiftData = Ch_VaArg(interp, ap, int);
	  retval = robot->recordAngles(time, angle1, angle2, angle3, num, seconds, shiftData);
	} else {
	  retval = robot->recordAngles(time, angle1, angle2, angle3, num, seconds);
	}
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_recordAnglesBegin_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double** time;
	double** angle1;
	double** angle2;
	double** angle3;
	double seconds;
	int shiftData;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	time = Ch_VaArg(interp, ap, double**);
	angle1 = Ch_VaArg(interp, ap, double**);
	angle2 = Ch_VaArg(interp, ap, double**);
	angle3 = Ch_VaArg(interp, ap, double**);
	seconds = Ch_VaArg(interp, ap, double);
	if(Ch_VaCount(interp, ap) == 1) {
		shiftData = Ch_VaArg(interp, ap, int);
		retval = robot->recordAnglesBegin(*time, *angle1, *angle2, *angle3, seconds, shiftData);
	}
	else {
		retval = robot->recordAnglesBegin(*time, *angle1, *angle2, *angle3, seconds);
	}
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_recordAnglesEnd_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;
	int *num;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	num = Ch_VaArg(interp, ap, int*);
	retval = robot->recordAnglesEnd(*num);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_recordDistanceBegin_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double** time;
	double** angle;
	double radius;
	double seconds;
	int shiftData;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	time = Ch_VaArg(interp, ap, double**);
	angle = Ch_VaArg(interp, ap, double**);
	radius = Ch_VaArg(interp, ap, double);
	seconds = Ch_VaArg(interp, ap, double);
	if(Ch_VaCount(interp, ap) == 1) {
		shiftData = Ch_VaArg(interp, ap, int);
		retval = robot->recordDistanceBegin(id, *time, *angle, radius, seconds, shiftData);
	} else {
		retval = robot->recordDistanceBegin(id, *time, *angle, radius, seconds);
	}
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_recordDistanceEnd_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	int *num;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	num = Ch_VaArg(interp, ap, int* );
	retval = robot->recordDistanceEnd(id, *num);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_recordDistanceOffset_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double distance;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	distance = Ch_VaArg(interp, ap, double);
	retval = robot->recordDistanceOffset(distance);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_recordDistancesBegin_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double** time;
	double** angle1;
	double** angle2;
	double** angle3;
	double radius;
	double seconds;
	int shiftData;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	time = Ch_VaArg(interp, ap, double**);
	angle1 = Ch_VaArg(interp, ap, double**);
	angle2 = Ch_VaArg(interp, ap, double**);
	angle3 = Ch_VaArg(interp, ap, double**);
	radius = Ch_VaArg(interp, ap, double);
	seconds = Ch_VaArg(interp, ap, double);
	if(Ch_VaCount(interp, ap) == 1) {
		shiftData = Ch_VaArg(interp, ap, int);
		retval = robot->recordDistancesBegin(*time, *angle1, *angle2, *angle3, radius, seconds, shiftData);
	}
	else {
		retval = robot->recordDistancesBegin(*time, *angle1, *angle2, *angle3, radius, seconds);
	}
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_recordDistancesEnd_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;
	int *num;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	num = Ch_VaArg(interp, ap, int*);
	retval = robot->recordDistancesEnd(*num);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_recordWait_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->recordWait();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_recordxyBegin_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double** x;
	double** y;
	double seconds;
	int shiftData;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	x = Ch_VaArg(interp, ap, double**);
	y = Ch_VaArg(interp, ap, double**);
	seconds = Ch_VaArg(interp, ap, double);
	if (Ch_VaCount(interp, ap) == 1) {
		shiftData = Ch_VaArg(interp, ap, int);
		retval = robot->recordxyBegin(*x, *y, seconds, shiftData);
	}
	else {
		retval = robot->recordxyBegin(*x, *y, seconds);
	}
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_recordxyEnd_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;
	int *num;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	num = Ch_VaArg(interp, ap, int *);
	retval = robot->recordxyEnd(*num);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_relaxJoint_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	retval = robot->relaxJoint(id);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_relaxJoints_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->relaxJoints();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_resetToZero_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->resetToZero();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_resetToZeroNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->resetToZeroNB();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_setBuzzerFrequency_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int frequency;
	double time;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	frequency = Ch_VaArg(interp, ap, int);
	time = Ch_VaArg(interp, ap, double);
	retval = robot->setBuzzerFrequency(frequency, time);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_setBuzzerFrequencyOff_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->setBuzzerFrequencyOff();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_setBuzzerFrequencyOn_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int frequency;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	frequency = Ch_VaArg(interp, ap, int);
	retval = robot->setBuzzerFrequencyOn(frequency);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_setLEDColor_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	char *color;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	color = Ch_VaArg(interp, ap, char *);
	retval = robot->setLEDColor(color);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_setLEDColorRGB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int r, g, b;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	r = Ch_VaArg(interp, ap, int);
	g = Ch_VaArg(interp, ap, int);
	b = Ch_VaArg(interp, ap, int);
	retval = robot->setLEDColorRGB(r, g, b);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_setJointSafetyAngle_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->setJointSafetyAngle(angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_setJointSafetyAngleTimeout_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double seconds;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	seconds = Ch_VaArg(interp, ap, double);
	retval = robot->setJointSafetyAngleTimeout(seconds);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_setJointSpeed_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double speed;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	speed = Ch_VaArg(interp, ap, double);
	retval = robot->setJointSpeed(id, speed);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_setJointSpeeds_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double speed1;
	double speed2;
	double speed3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	speed1 = Ch_VaArg(interp, ap, double);
	speed2 = Ch_VaArg(interp, ap, double);
	speed3 = Ch_VaArg(interp, ap, double);
	retval = robot->setJointSpeeds(speed1, speed2, speed3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_setJointSpeedRatio_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	rsLinkbot::Bodies::Joint id;
	double speed;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	speed = Ch_VaArg(interp, ap, double);
	retval = robot->setJointSpeedRatio(id, speed);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_setJointSpeedRatios_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double ratio1;
	double ratio2;
	double ratio3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	ratio1 = Ch_VaArg(interp, ap, double );
	ratio2 = Ch_VaArg(interp, ap, double );
	ratio3 = Ch_VaArg(interp, ap, double );
	retval = robot->setJointSpeedRatios(ratio1, ratio2, ratio3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_setSpeed_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double speed;
	double radius;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	speed = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	retval = robot->setSpeed(speed, radius);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_systemTime_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double *systemTime;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	systemTime = Ch_VaArg(interp, ap, double *);
	retval = robot->systemTime(*systemTime);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_traceOff_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->traceOff();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_traceOn_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = robot->traceOn();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_turnLeft_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double angle;
	double radius;
	double trackwidth;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	trackwidth = Ch_VaArg(interp, ap, double);
	retval = robot->turnLeft(angle, radius, trackwidth);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_turnLeftNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double angle;
	double radius;
	double trackwidth;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	trackwidth = Ch_VaArg(interp, ap, double);
	retval = robot->turnLeftNB(angle, radius, trackwidth);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_turnRight_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double angle;
	double radius;
	double trackwidth;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	trackwidth = Ch_VaArg(interp, ap, double);
	retval = robot->turnRight(angle, radius, trackwidth);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotI_turnRightNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotI *robot;
	double angle;
	double radius;
	double trackwidth;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	angle = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	trackwidth = Ch_VaArg(interp, ap, double);
	retval = robot->turnRightNB(angle, radius, trackwidth);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH void CLinkbotIGroup_CLinkbotIGroup_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *c=new CLinkbotIGroup();
	Ch_VaStart(interp, ap, varg);
	Ch_CppChangeThisPointer(interp, c, sizeof(CLinkbotIGroup));
	Ch_VaEnd(interp, ap);
}

EXPORTCH void CLinkbotIGroup_dCLinkbotIGroup_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *c;
	Ch_VaStart(interp, ap, varg);
	c = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	if(Ch_CppIsArrayElement(interp))
		c->~CLinkbotIGroup();
	else
		delete c;
	Ch_VaEnd(interp, ap);
	return;
}

EXPORTCH int CLinkbotIGroup_accelJointAngleNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double acceleration;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	acceleration = Ch_VaArg(interp, ap, double);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->accelJointAngleNB(id, acceleration, angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_accelJointCycloidalNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double angle;
	double timeout;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double);
	timeout = Ch_VaArg(interp, ap, double);
	retval = robot->accelJointCycloidalNB(id, angle, timeout);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_accelJointHarmonicNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double angle;
	double timeout;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double);
	timeout = Ch_VaArg(interp, ap, double);
	retval = robot->accelJointHarmonicNB(id, angle, timeout);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_accelJointSmoothNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double accel0;
	double accelf;
	double vmax;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	accel0 = Ch_VaArg(interp, ap, double);
	accelf = Ch_VaArg(interp, ap, double);
	vmax = Ch_VaArg(interp, ap, double);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->accelJointSmoothNB(id, accel0, accelf, vmax, angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_accelJointTimeNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double acceleration;
	double time;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	acceleration = Ch_VaArg(interp, ap, double);
	time = Ch_VaArg(interp, ap, double);
	retval = robot->accelJointTimeNB(id, acceleration, time);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_accelJointToVelocityNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double acceleration;
	double v;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	acceleration = Ch_VaArg(interp, ap, double);
	v = Ch_VaArg(interp, ap, double);
	retval = robot->accelJointToVelocityNB(id, acceleration, v);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_accelJointToMaxSpeedNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double acceleration;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	acceleration = Ch_VaArg(interp, ap, double);
	retval = robot->accelJointToMaxSpeedNB(id, acceleration);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_addRobot_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *group;
	class CLinkbotI *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	group = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	retval = group->addRobot(*robot);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_addRobots_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *group;
	class CLinkbotI *robot;
	int num;
	int retval;

	Ch_VaStart(interp, ap, varg);
	group = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	robot = Ch_VaArg(interp, ap, class CLinkbotI *);
	num = Ch_VaArg(interp, ap, int);
	retval = group->addRobots(robot, num);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_blinkLED_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double delay;
	int numBlinks;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	delay = Ch_VaArg(interp, ap, double);
	numBlinks = Ch_VaArg(interp, ap, int);
	retval = robot->blinkLED(delay, numBlinks);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_closeGripper_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->closeGripper();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_closeGripperNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->closeGripperNB();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_driveAccelCycloidalNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double radius;
	double distance;
	double timeout;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	radius = Ch_VaArg(interp, ap, double);
	distance = Ch_VaArg(interp, ap, double);
	timeout = Ch_VaArg(interp, ap, double);
	retval = robot->driveAccelCycloidalNB(radius, distance, timeout);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_driveAccelDistanceNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double radius;
	double acceleration;
	double distance;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	radius = Ch_VaArg(interp, ap, double);
	acceleration = Ch_VaArg(interp, ap, double);
	distance = Ch_VaArg(interp, ap, double);
	retval = robot->driveAccelDistanceNB(radius, acceleration, distance);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_driveAccelHarmonicNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double radius;
	double distance;
	double timeout;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	radius = Ch_VaArg(interp, ap, double);
	distance = Ch_VaArg(interp, ap, double);
	timeout = Ch_VaArg(interp, ap, double);
	retval = robot->driveAccelHarmonicNB(radius, distance, timeout);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_driveAccelSmoothNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double radius;
	double accel0;
	double accelf;
	double vmax;
	double distance;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	radius = Ch_VaArg(interp, ap, double);
	accel0 = Ch_VaArg(interp, ap, double);
	accelf = Ch_VaArg(interp, ap, double);
	vmax = Ch_VaArg(interp, ap, double);
	distance = Ch_VaArg(interp, ap, double);
	retval = robot->driveAccelSmoothNB(radius, accel0, accelf, vmax, distance);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_driveAccelTimeNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double radius;
	double acceleration;
	double timeout;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	radius = Ch_VaArg(interp, ap, double);
	acceleration = Ch_VaArg(interp, ap, double);
	timeout = Ch_VaArg(interp, ap, double);
	retval = robot->driveAccelTimeNB(radius, acceleration, timeout);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_driveAccelToMaxSpeedNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double radius;
	double acceleration;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	radius = Ch_VaArg(interp, ap, double);
	acceleration = Ch_VaArg(interp, ap, double);
	retval = robot->driveAccelToMaxSpeedNB(radius, acceleration);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_driveAccelToVelocityNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double radius;
	double acceleration;
	double v;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	radius = Ch_VaArg(interp, ap, double);
	acceleration = Ch_VaArg(interp, ap, double);
	v = Ch_VaArg(interp, ap, double);
	retval = robot->driveAccelToVelocityNB(radius, acceleration, v);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_driveAngle_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->driveAngle(angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_driveAngleNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->driveAngleNB(angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_driveDistance_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double distance;
	double radius;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	distance = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	retval = robot->driveDistance(distance, radius);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_driveDistanceNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double distance;
	double radius;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	distance = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	retval = robot->driveDistanceNB(distance, radius);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_driveForeverNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->driveForeverNB();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_driveTime_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double seconds;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	seconds = Ch_VaArg(interp, ap, double );
	retval = robot->driveTime(seconds);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_driveTimeNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double seconds;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	seconds = Ch_VaArg(interp, ap, double );
	retval = robot->driveTimeNB(seconds);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_holdJoint_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	retval = robot->holdJoint(id);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_holdJoints_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->holdJoints();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_holdJointsAtExit_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->holdJointsAtExit();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_isMoving_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->isMoving();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_isNotMoving_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->isNotMoving();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_move_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double angle1;
	double angle2;
	double angle3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	angle1 = Ch_VaArg(interp, ap, double);
	angle2 = Ch_VaArg(interp, ap, double);
	angle3 = Ch_VaArg(interp, ap, double);
	retval = robot->move(angle1, angle2, angle3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double angle1;
	double angle2;
	double angle3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	angle1 = Ch_VaArg(interp, ap, double);
	angle2 = Ch_VaArg(interp, ap, double);
	angle3 = Ch_VaArg(interp, ap, double);
	retval = robot->moveNB(angle1, angle2, angle3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveForeverNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->moveForeverNB();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveJoint_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->moveJoint(id, angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveJointNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->moveJointNB(id, angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveJointByPowerNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	int power;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	power = Ch_VaArg(interp, ap, int);
	retval = robot->moveJointByPowerNB(id, power);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveJointForeverNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint );
	retval = robot->moveJointForeverNB(id);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveJointTime_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double seconds;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	seconds = Ch_VaArg(interp, ap, double);
	retval = robot->moveJointTime(id, seconds);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveJointTimeNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double seconds;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	seconds = Ch_VaArg(interp, ap, double);
	retval = robot->moveJointTimeNB(id, seconds);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveJointTo_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->moveJointTo(id, angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveJointToNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->moveJointToNB(id, angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveJointToByTrackPos_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->moveJointToByTrackPos(id, angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveJointToByTrackPosNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->moveJointToByTrackPosNB(id, angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveJointWait_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	retval = robot->moveJointWait(id);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveTime_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double seconds;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	seconds = Ch_VaArg(interp, ap, double );
	retval = robot->moveTime(seconds);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveTimeNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double seconds;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	seconds = Ch_VaArg(interp, ap, double );
	retval = robot->moveTimeNB(seconds);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveTo_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double angle1;
	double angle2;
	double angle3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	angle1 = Ch_VaArg(interp, ap, double);
	angle2 = Ch_VaArg(interp, ap, double);
	angle3 = Ch_VaArg(interp, ap, double);
	retval = robot->moveTo(angle1, angle2, angle3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveToNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double angle1;
	double angle2;
	double angle3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	angle1 = Ch_VaArg(interp, ap, double);
	angle2 = Ch_VaArg(interp, ap, double);
	angle3 = Ch_VaArg(interp, ap, double);
	retval = robot->moveToNB(angle1, angle2, angle3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveToByTrackPos_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double angle1;
	double angle2;
	double angle3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	angle1 = Ch_VaArg(interp, ap, double);
	angle2 = Ch_VaArg(interp, ap, double);
	angle3 = Ch_VaArg(interp, ap, double);
	retval = robot->moveToByTrackPos(angle1, angle2, angle3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveToByTrackPosNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double angle1;
	double angle2;
	double angle3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	angle1 = Ch_VaArg(interp, ap, double);
	angle2 = Ch_VaArg(interp, ap, double);
	angle3 = Ch_VaArg(interp, ap, double);
	retval = robot->moveToByTrackPosNB(angle1, angle2, angle3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveToZero_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->moveToZero();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveToZeroNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->moveToZeroNB();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_moveWait_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->moveWait();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_openGripper_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->openGripper(angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_openGripperNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->openGripperNB(angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_relaxJoint_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	retval = robot->relaxJoint(id);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_relaxJoints_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->relaxJoints();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_resetToZero_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->resetToZero();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_resetToZeroNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->resetToZeroNB();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_setBuzzerFrequency_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int frequency;
	double time;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	frequency = Ch_VaArg(interp, ap, int);
	time = Ch_VaArg(interp, ap, double);
	retval = robot->setBuzzerFrequency(frequency, time);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_setBuzzerFrequencyOff_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->setBuzzerFrequencyOff();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_setBuzzerFrequencyOn_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int frequency;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	frequency = Ch_VaArg(interp, ap, int);
	retval = robot->setBuzzerFrequencyOn(frequency);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_setLEDColor_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	char *color;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	color = Ch_VaArg(interp, ap, char *);
	retval = robot->setLEDColor(color);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_setLEDColorRGB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int r, g, b;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	r = Ch_VaArg(interp, ap, int);
	g = Ch_VaArg(interp, ap, int);
	b = Ch_VaArg(interp, ap, int);
	retval = robot->setLEDColorRGB(r, g, b);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_setJointSafetyAngle_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->setJointSafetyAngle(angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_setJointSafetyAngleTimeout_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double angle;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	angle = Ch_VaArg(interp, ap, double);
	retval = robot->setJointSafetyAngleTimeout(angle);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_setJointSpeed_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double speed;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	speed = Ch_VaArg(interp, ap, double);
	retval = robot->setJointSpeed(id, speed);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_setJointSpeeds_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double speed1, speed2, speed3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	speed1 = Ch_VaArg(interp, ap, double);
	speed2 = Ch_VaArg(interp, ap, double);
	speed3 = Ch_VaArg(interp, ap, double);
	retval = robot->setJointSpeeds(speed1, speed2, speed3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_setJointSpeedRatio_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	rsLinkbot::Bodies::Joint id;
	double speed;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	id = Ch_VaArg(interp, ap, rsLinkbot::Bodies::Joint);
	speed = Ch_VaArg(interp, ap, double);
	retval = robot->setJointSpeedRatio(id, speed);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_setJointSpeedRatios_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double ratio1;
	double ratio2;
	double ratio3;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	ratio1 = Ch_VaArg(interp, ap, double);
	ratio2 = Ch_VaArg(interp, ap, double);
	ratio3 = Ch_VaArg(interp, ap, double);
	retval = robot->setJointSpeedRatios(ratio1, ratio2, ratio3);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_setSpeed_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double speed;
	double radius;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	speed = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	retval = robot->setSpeed(speed, radius);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_traceOff_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->traceOff();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_traceOn_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	retval = robot->traceOn();
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_turnLeft_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double angle;
	double radius;
	double trackwidth;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	angle = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	trackwidth = Ch_VaArg(interp, ap, double);
	retval = robot->turnLeft(angle, radius, trackwidth);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_turnLeftNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double angle;
	double radius;
	double trackwidth;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	angle = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	trackwidth = Ch_VaArg(interp, ap, double);
	retval = robot->turnLeftNB(angle, radius, trackwidth);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_turnRight_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double angle;
	double radius;
	double trackwidth;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	angle = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	trackwidth = Ch_VaArg(interp, ap, double);
	retval = robot->turnRight(angle, radius, trackwidth);
	Ch_VaEnd(interp, ap);
	return retval;
}

EXPORTCH int CLinkbotIGroup_turnRightNB_chdl(void *varg) {
	ChInterp_t interp;
	ChVaList_t ap;
	class CLinkbotIGroup *robot;
	double angle;
	double radius;
	double trackwidth;
	int retval;

	Ch_VaStart(interp, ap, varg);
	robot = Ch_VaArg(interp, ap, class CLinkbotIGroup *);
	angle = Ch_VaArg(interp, ap, double);
	radius = Ch_VaArg(interp, ap, double);
	trackwidth = Ch_VaArg(interp, ap, double);
	retval = robot->turnRightNB(angle, radius, trackwidth);
	Ch_VaEnd(interp, ap);
	return retval;
}
