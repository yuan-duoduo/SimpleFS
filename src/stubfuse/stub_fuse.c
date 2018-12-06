#include "stub_fuse.h"
#include "inner_def.h"

int sfsGetattr(const char *, struct stat *, struct fuse_file_info *fi)
{
	int32_t result;
	return SFS_OK;
}

int sfsReaddir(const char *, void *, fuse_fill_dir_t, off_t,
			struct fuse_file_info *, enum fuse_readdir_flags)
{
	int32_t result;
	return SFS_OK;
}


