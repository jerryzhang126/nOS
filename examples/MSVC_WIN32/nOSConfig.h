/* Define to value other than 0 to enable debug code. */
#define NOS_CONFIG_DEBUG                        1

/* Define to value other than 0 to enable arguments checking in nOS API. */
#define NOS_CONFIG_SAFE                         1

/* Highest priority a thread can take (up to 255).
 * Set to 0 to enable a cooperative scheduling
 * with all threads at the same priority. */
#define NOS_CONFIG_HIGHEST_THREAD_PRIO          31

/* Size of ticks counter for sleep/timeout in bits (can be 8, 16, 32 and 64). */
#define NOS_CONFIG_TICK_COUNT_WIDTH             16

/* Number of ticks per second (not used in scheduler for the moment). */
#define NOS_CONFIG_TICKS_PER_SECOND             10

/* Enable or disable preemptive scheduler (set to 0 to enable a cooperative scheduling). */
#define NOS_CONFIG_SCHED_PREEMPTIVE_ENABLE      1
/* Enable or disable round-robin scheduler (for threads of the same priority). */
#define NOS_CONFIG_SCHED_ROUND_ROBIN_ENABLE     1
/* Enable or disable lock/unlock scheduler. */
#define NOS_CONFIG_SCHED_LOCK_ENABLE            1

/* Enable or disable sleeping from running thread. */
#define NOS_CONFIG_SLEEP_ENABLE                 1
/* Enable or disable sleeping until specified from running thread. */
#define NOS_CONFIG_SLEEP_UNTIL_ENABLE           1

/* Enable or disable thread resume/suspend at run-time. */
#define NOS_CONFIG_THREAD_SUSPEND_ENABLE        1
/* Enable or disable thread deletion at run-time. */
#define NOS_CONFIG_THREAD_DELETE_ENABLE         1
/* Enable or disable thread set/get priority at run-time. */
#define NOS_CONFIG_THREAD_SET_PRIO_ENABLE       1
/* Enable or disable thread naming (useful for debugging). */
#define NOS_CONFIG_THREAD_NAME_ENABLE			1

/* Enable or disable semaphore. */
#define NOS_CONFIG_SEM_ENABLE                   1
/* Enable or disable semaphore deletion at run-time. */
#define NOS_CONFIG_SEM_DELETE_ENABLE            1
/* Semaphore count width in bits (can be 8, 16, 32 or 64) */
#define NOS_CONFIG_SEM_COUNT_WIDTH              16

/* Enable or disable mutex. */
#define NOS_CONFIG_MUTEX_ENABLE                 1
/* Enable or disable mutex deletion at run-time. */
#define NOS_CONFIG_MUTEX_DELETE_ENABLE          1
/* Enable or disable recursive mutex */
#define NOS_CONFIG_MUTEX_RECURSIVE_ENABLE       1

/* Enable or disable flag. */
#define NOS_CONFIG_FLAG_ENABLE                  1
/* Enable or disable flag deletion at run-time. */
#define NOS_CONFIG_FLAG_DELETE_ENABLE           1
/* Size of flag in bits (can be 8, 16, 32 or 64) */
#define NOS_CONFIG_FLAG_NB_BITS                 32

/* Enable or disable queue. */
#define NOS_CONFIG_QUEUE_ENABLE                 1
/* Enable or disable queue deletion at run-time. */
#define NOS_CONFIG_QUEUE_DELETE_ENABLE          1

/* Enable or disable mem. */
#define NOS_CONFIG_MEM_ENABLE                   1
/* Enable or disable mem deletion at run-time. */
#define NOS_CONFIG_MEM_DELETE_ENABLE            1
/* Enable or disable sanity check of pointer when it is freed. */
#define NOS_CONFIG_MEM_SANITY_CHECK_ENABLE      1

/* Enable or disable timer thread with callback. */
#define NOS_CONFIG_TIMER_ENABLE                 1
/* Let timer thread taking care of timer process or not
 * (if 0, application is responsible to call nOS_TimerProcess) */
#define NOS_CONFIG_TIMER_THREAD_ENABLE          1
/* Enable or disable dynamic timer deletion */
#define NOS_CONFIG_TIMER_DELETE_ENABLE          1
/* Priority of timer thread. */
#define NOS_CONFIG_TIMER_THREAD_PRIO            1
/* Stack size of timer thread. */
#define NOS_CONFIG_TIMER_THREAD_STACK_SIZE      0
/* Timer counter width in bits (can be 8, 16, 32 or 64) */
#define NOS_CONFIG_TIMER_COUNT_WIDTH            16

/* Enable or disable time management. */
#define NOS_CONFIG_TIME_ENABLE                  1
/* Enable or disable time waiting from running thread. */
#define NOS_CONFIG_TIME_WAIT_ENABLE             1
/* Time ticks per second */
#define NOS_CONFIG_TIME_TICKS_PER_SECOND        NOS_CONFIG_TICKS_PER_SECOND
/* Time ticks counter width in bits (can be 32 or 64). */
#define NOS_CONFIG_TIME_COUNT_WIDTH             32
