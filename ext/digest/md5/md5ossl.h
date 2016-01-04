/* $Id: md5ossl.h 49564 2015-02-11 02:09:23Z nobu $ */

#ifndef MD5OSSL_H_INCLUDED
#define MD5OSSL_H_INCLUDED

#include <stddef.h>
#include <openssl/md5.h>

#define MD5_BLOCK_LENGTH	MD5_CBLOCK

static DEFINE_FINISH_FUNC_FROM_FINAL(MD5);
#undef MD5_Finish
#define MD5_Finish rb_digest_MD5_finish

#endif
