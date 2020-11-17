/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include "e_afalg_err.h"

#ifndef OPENSSL_NO_ERR

static ERR_STRING_DATA AFALG_str_reasons[] = {
    {ERR_PACK(0, 0, AFALG_R_EVENTFD_FAILED), "eventfd failed"},
    {ERR_PACK(0, 0, AFALG_R_FAILED_TO_GET_PLATFORM_INFO),
    "failed to get platform info"},
    {ERR_PACK(0, 0, AFALG_R_INIT_FAILED), "init failed"},
    {ERR_PACK(0, 0, AFALG_R_IO_SETUP_FAILED), "io setup failed"},
    {ERR_PACK(0, 0, AFALG_R_KERNEL_DOES_NOT_SUPPORT_AFALG),
    "kernel does not support afalg"},
    {ERR_PACK(0, 0, AFALG_R_KERNEL_DOES_NOT_SUPPORT_ASYNC_AFALG),
    "kernel does not support async afalg"},
    {ERR_PACK(0, 0, AFALG_R_MEM_ALLOC_FAILED), "mem alloc failed"},
    {ERR_PACK(0, 0, AFALG_R_SOCKET_ACCEPT_FAILED), "socket accept failed"},
    {ERR_PACK(0, 0, AFALG_R_SOCKET_BIND_FAILED), "socket bind failed"},
    {ERR_PACK(0, 0, AFALG_R_SOCKET_CREATE_FAILED), "socket create failed"},
    {ERR_PACK(0, 0, AFALG_R_SOCKET_OPERATION_FAILED),
    "socket operation failed"},
    {ERR_PACK(0, 0, AFALG_R_SOCKET_SET_KEY_FAILED), "socket set key failed"},
    {0, NULL}
};

#endif

static int lib_code = 0;
static int error_loaded = 0;

static int ERR_load_AFALG_strings(void)
{
    if (lib_code == 0)
        lib_code = ERR_get_next_error_library();

    if (!error_loaded) {
#ifndef OPENSSL_NO_ERR
        ERR_load_strings(lib_code, AFALG_str_reasons);
#endif
        error_loaded = 1;
    }
    return 1;
}

static void ERR_unload_AFALG_strings(void)
{
    if (error_loaded) {
#ifndef OPENSSL_NO_ERR
        ERR_unload_strings(lib_code, AFALG_str_reasons);
#endif
        error_loaded = 0;
    }
}

static void ERR_AFALG_error(int function, int reason, char *file, int line)
{
    if (lib_code == 0)
        lib_code = ERR_get_next_error_library();
    ERR_raise(lib_code, reason);
    ERR_set_debug(file, line, NULL);
}
