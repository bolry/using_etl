#ifndef UNIQUE_ETL_PROFILE_H_INCLUDED_DEKRA
#define UNIQUE_ETL_PROFILE_H_INCLUDED_DEKRA

#warning "this is to notify that I found my personal etl_profile.h"

#if __cplusplus < 201103L
#if 1
#   include "etl/profiles/armv5.h"
#else
#   define ETL_COMPILER_ARM5 /* Why do I need to define this for Linux platform? */
#   define ETL_NO_NULLPTR_SUPPORT 1 /* This should be automatically detected for C++03 */
#endif
#endif
#endif  // !UNIQUE_ETL_PROFILE_H_INCLUDED_DEKRA