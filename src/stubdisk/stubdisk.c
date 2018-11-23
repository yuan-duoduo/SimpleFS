#include <stdio.h>
#include <unistd.h>

#include "../include/inner_def.h"

static int32_t diskHandle = -1;
static uint32_t diskMaxLba = -1;


int32_t openStubDisk(char *diskFilePath)
{
	int32_t result;
	int32_t fid;

	if (NULL == diskFilePath)
	{
		printf("Open stub disk failed, diskFilePath(0x%p).",
			   diskFilePath);
		return SFS_INVAL;
	}

	if (-1 != diskHandle)
	{
		return SFS_OK;
	}

	fid = open(diskFilePath, O_WRONLY);
	if (-1 == fid)
	{
		printf("Open the file failed, filePath(%s), fid(%d).",
			   diskFilePath, fid);
		return SFS_ERROR;
	}

	diskHandle = fid;
	return SFS_OK;
}

int32_t closeStubDisk(void)
{
	int32_t result;
	
	if (-1 == diskHandle)
	{
		printf("The stub disk is not be initialized, diskHandle(%d).",
			   diskHandle);
		return SFS_ERROR;
	}

	result = close(diskHandle);
	if (SFS_OK != result)
	{
		printf("Close stub disk file failed, result(%d).", result);
	}

	return result;
}


/*
*/
int32_t getDiskHandle(int32_t *diskHandle)
{
	
}

int32_t writeDataToDisk(uint32_t diskLba, uint32_t len, void *data)
{
	return RETURN_OK;
}

int32_t readDataFromDisk(uint32_t diskLba, uint32_t len, void *data)
{
	return RETURN_OK;
}

