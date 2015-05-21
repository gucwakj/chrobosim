#ifndef CHROBOSIM_MACROS_
#define CHROBOSIM_MACROS_

#ifdef _WIN32
#include <windows.h>
#endif // _WIN32

#define EPSILON DBL_EPSILON
#define RECORD_ANGLE_ALLOC_SIZE 16
#define DEG2RAD(x) ((x) * M_PI / 180.0)
#define RAD2DEG(x) ((x) * 180.0 / M_PI)
#define angle2distance(radius, angle) ((radius) * (angle * 0.01745329251994329547))
#define distance2angle(radius, distance) (((distance)/(radius))*57.29577951308232286465)
#define DEPRECATED(from, to) fprintf(_stderr, "Warning: The function \"%s()\" is deprecated. Please use \"%s()\"\n" , from, to)

#ifdef _WIN32
#define DLLIMPORT __declspec(dllexport)
//   THREADS
#define THREAD_T HANDLE
#define THREAD_CANCEL(thread_handle) TerminateThread( thread_handle, 0)
#define THREAD_CREATE(thread_handle, function, arg) *(thread_handle) = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)function, arg, 0, NULL)
#define THREAD_JOIN(thread_handle) WaitForSingleObject(thread_handle, INFINITE)
//   MUTEX
#define MUTEX_T HANDLE
#define MUTEX_INIT(mutex) *mutex = CreateMutex(NULL, FALSE, NULL)
#define MUTEX_DESTROY(mutex)
#define MUTEX_LOCK(mutex) WaitForSingleObject(*mutex, INFINITE)
#define MUTEX_UNLOCK(mutex) ReleaseMutex(*mutex)
//   COND
#define COND_T HANDLE
#define COND_ACTION(cond, mutex, action) action; SetEvent(*cond)
#define COND_DESTROY(cond)
#define COND_INIT(cond) *cond = CreateEvent(NULL, TRUE, TRUE, NULL); ResetEvent(*cond)
#define COND_SIGNAL(cond) SetEvent(*cond)
#define COND_WAIT(cond , mutex) ResetEvent(*cond); ReleaseMutex(*mutex); WaitForSingleObject(*cond, INFINITE)
#else
#define DLLIMPORT
//   THREADS
#define THREAD_T pthread_t
#define THREAD_CANCEL(thread_handle) pthread_cancel(thread_handle)
#define THREAD_CREATE(thread_handle, function, arg) \
	while (pthread_create(thread_handle, NULL, function, (void*) arg) < 0) { \
		fprintf(stderr, "Error: pthread_create failed. Trying again...\n"); \
	}
#define THREAD_JOIN(thread_handle) pthread_join(thread_handle, NULL)
//   MUTEX
#define MUTEX_T pthread_mutex_t
#define MUTEX_INIT(mutex) pthread_mutex_init(mutex, NULL)
#define MUTEX_DESTROY(mutex) pthread_mutex_destroy(mutex)
#define MUTEX_LOCK(mutex) \
	if (pthread_mutex_lock(mutex)) { \
		fprintf(stderr, "Error: pthread lock error: %s:%d\n", __FILE__, __LINE__); \
	}
#define MUTEX_UNLOCK(mutex) pthread_mutex_unlock(mutex)
//   COND
#define COND_T pthread_cond_t
#define COND_ACTION(cond, mutex, action) pthread_mutex_lock(mutex); action; pthread_cond_signal(cond); pthread_mutex_unlock(mutex)
#define COND_DESTROY(cond) pthread_cond_destroy(cond)
#define COND_INIT(cond) pthread_cond_init(cond, NULL)
#define COND_SIGNAL(cond) pthread_cond_signal(cond)
#define COND_WAIT(cond, mutex) pthread_cond_wait(cond, mutex)
//   RWLOCK
#define RWLOCK_T pthread_rwlock_t
#define RWLOCK_INIT(rwlock) pthread_rwlock_init(rwlock, NULL)
#define RWLOCK_DESTROY(rwlock) pthread_rwlock_destroy(rwlock)
#define RWLOCK_RLOCK(rwlock) \
	if (pthread_rwlock_rdlock(rwlock)) { \
		fprintf(stderr, "Error: rwlock error: %s:%d\n", __FILE__, __LINE__); \
	}
#define RWLOCK_RUNLOCK(rwlock) \
	if (pthread_rwlock_unlock(rwlock)) { \
		fprintf(stderr, "Error: rwunlock error: %s:%d\n", __FILE__, __LINE__); \
	}
#define RWLOCK_WLOCK(rwlock) \
	if (pthread_rwlock_wrlock(rwlock)) { \
		fprintf(stderr, "Error: rwlock error: %s:%d\n", __FILE__, __LINE__); \
	}
#define RWLOCK_WUNLOCK(rwlock) \
	if (pthread_rwlock_unlock(rwlock)) { \
		fprintf(stderr, "Error: rwunlock error: %s:%d\n", __FILE__, __LINE__); \
	}
#endif

// recorded data
typedef double* robotRecordData_t;

#endif // CHROBOSIM_MACROS_

