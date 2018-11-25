#ifndef __STUB_FUSE_H__
#define __STUB_FUSE_H__

#include <fuse.h>

/* Date: 2018-11-25
** 定义SFS文件系统操作集
*/
struct fuse_operations sfsOps = {
    .getattr    =   ou_getattr,
    .readdir    =   ou_readdir,
    .create     =   ou_create,
    .unlink     =   ou_unlink,
};


#endif

