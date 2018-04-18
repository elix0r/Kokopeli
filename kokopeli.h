#ifndef KOKO_H
#define KOKO_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <CL/cl.h>

#define GPU_LOGGER "koko.cl"
#define KERNEL_FUNC "printer_gpu"
#define VRAM_LIMIT 10485760

typedef struct kokopeli {
	cl_context ctx;
	cl_device_id dev;
	cl_platform_id platform;
	cl_command_queue cq;
	cl_program program;
	cl_kernel kernel;
} * koko;

char * buffA, buffB;
cl_mem in, out;
cl_int err;
size_t global_size = 2;
size_t local_size = 0;


#endif
