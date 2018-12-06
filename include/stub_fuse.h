#ifndef __STUB_FUSE_H__
#define __STUB_FUSE_H__

#include <fuse.h>
#include <fuse_common.h>



/* Date: 2018-11-25
** 定义SFS文件系统操作集
*/
struct fuse_operations sfsOps = {
    .getattr    =   sfsGetattr,
    .readdir    =   sfsReaddir,
    .create     =   sfs_create,
    .unlink     =   sfs_unlink,
};


#endif

