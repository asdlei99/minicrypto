// Mini cryptography library. Public domain. See "unlicense" statement at the end of this file.
// mini_crypto - v0.1 - TBD
//
// David Reid - davidreidsoftware@gmail.com

// ABOUT
// =====
//
//
//
// USAGE
// =====
// mini_crypto is a single-file library. To use it, do something like the following in one .c file.
//   #define MINI_CRYPTO_IMPLEMENTATION
//   #include "mini_crypto.h"

#ifndef mini_crypto_h
#define mini_crypto_h

#ifdef __cplusplus
extern "C" {
#endif

#if defined(_MSC_VER) && _MSC_VER < 1600
typedef   signed char    mc_int8;
typedef unsigned char    mc_uint8;
typedef   signed short   mc_int16;
typedef unsigned short   mc_uint16;
typedef   signed int     mc_int32;
typedef unsigned int     mc_uint32;
typedef   signed __int64 mc_int64;
typedef unsigned __int64 mc_uint64;
#else
#include <stdint.h>
typedef int8_t           mc_int8;
typedef uint8_t          mc_uint8;
typedef int16_t          mc_int16;
typedef uint16_t         mc_uint16;
typedef int32_t          mc_int32;
typedef uint32_t         mc_uint32;
typedef int64_t          mc_int64;
typedef uint64_t         mc_uint64;
#endif
typedef mc_uint8         mc_bool8;
typedef mc_uint32        mc_bool32;
#define MC_TRUE          1
#define MC_FALSE         0

typedef int mc_result;
#define MC_SUCCESS                                      0
#define MC_ERROR                                       -1      // A generic error.
#define MC_INVALID_ARGS                                -2
#define MC_OUT_OF_MEMORY                               -3

// SHA-256
mc_result mc_sha256(const void* pInput, size_t inputSizeInBytes, mc_uint32 pHashOut[8]);

#ifdef __cplusplus
}
#endif
#endif

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
//
// IMPLEMENTATION
//
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
#ifdef MINI_CRYPTO_IMPLEMENTATION
#include <assert.h>

void mc_sha256(const void* pInput, size_t inputSizeInBytes, mc_uint32 pHashOut[8])
{
    (void)pInput;
    (void)inputSizeInBytes;
    (void)pHashOut;
}
#endif