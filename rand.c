#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <pthread.h>
#include <unistd.h>
//#define NUM_THREADS 7

// Thread safe random numbers by tempering the upper 32 bits
// of a 64 bit int. The calculations are based on a seed.
//
// Create a single seed per thread and use that for every call 
// lcg64_temper.
//
// credit: http://stackoverflow.com/a/19083740/2635342
static int32_t temper(int32_t x)
{
	x ^= x>>11;
	x ^= x<<7 & 0x9D2C5680;
	x ^= x<<15 & 0xEFC60000;
	x ^= x>>18;
	return x;
}

int32_t lcg64_temper(uint64_t *seed)
{
	*seed = 6364136223846793005ULL * *seed + 1;
	
return temper(*seed >> 32);
}

int threadFunction(void* data)
{
	int32_t id = *(int32_t*)data;
	printf("%d-th thread  up\n", id);

	uint64_t threadSeed = time(NULL) ^ id;

	int32_t n = lcg64_temper(&threadSeed) % 20 + 1;
	thrd_sleep(&(struct timespec){ .tv_sec = n }, NULL); // Sleep for a random number of seconds.

	printf("%d-th thread done\n", id);

	return 0;
}
