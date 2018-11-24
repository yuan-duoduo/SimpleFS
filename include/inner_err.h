#ifndef __INNER_ERR_H__
#define __INNER_ERR_H__

#define ERR_LEFT_SHIFT			(31)

#define SFS_CAL_ERR(err)		((1 << ERR_LEFT_SHIFT) + err)

#define SFS_INVAL				SFS_CAL_ERR(1)	/* Invalid parameter. */
#define SFS_NOEXIST				SFS_CAL_ERR(2)  /* The file or dir is not exist. */
#define SFS_NOMEM				SFS_CAL_ERR(3)  /* Alloc memory failed. */

#endif
