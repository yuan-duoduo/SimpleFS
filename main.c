#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fuse.h>

#define MAX_MOUNT_DIR_LEN	(64)

int32_t main(int32_t argc, char *argv[])
{
	int32_t result;
	char mountDir[MAX_MOUNT_DIR_LEN] = "/mnt/fuse";

	result = fuse_main(argc, argv, &sfsOps, NULL);
	if (SFS_OK != result)
	{
		printf("Run fuse main failed, result(%d).", result);
		return 0;
	}

	while 
}


