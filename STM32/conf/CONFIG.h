
#define CONF_IMU (1u)
#ifdef CONF_IMU
	#define IMU_TIMEOUT 0x100
	
	#define IMU_MEMORY_SIZE 0x01u
	#define IMU_DATA_SIZE 0x01u
	
	#define IMU_DATA_REGISTER_COUNTER 14
#endif

#define CONF_TCP (1u)
#ifdef CONF_TCP
#endif
