/*******************************************************************************
 * Copyright (c) 2001, 2019 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0 WITH Classpath-exception-2.0 OR LicenseRef-GPL-2.0 WITH Assembly-exception
 *******************************************************************************/

#ifndef SHCFLAGS_H
#define SHCFLAGS_H

/* @ddr_namespace: map_to_type=ShCFlags */

#include "j9comp.h" /* for J9CONST64 */

/* These are error codes */
#define J9SHR_RESOURCE_STORE_EXISTS  1
#define J9SHR_RESOURCE_STORE_FULL  2
#define J9SHR_RESOURCE_STORE_ERROR  3
#define J9SHR_RESOURCE_PARAMETER_ERROR 4
#define J9SHR_RESOURCE_TOO_MANY_UPDATES 5
#define J9SHR_RESOURCE_BUFFER_ALLOC_FAILED 6
#define J9SHR_RESOURCE_STORE_INVALIDATED  7
/* change below value for any new error codes added above */
#define J9SHR_RESOURCE_MAX_ERROR_VALUE 7

#define J9SHR_AOT_STORE_EXISTS  1
#define J9SHR_AOT_STORE_FULL  2
#define J9SHR_AOT_STORE_ERROR  3

#define J9SHR_DATA_TYPE_UNKNOWN  0
#define J9SHR_DATA_TYPE_HELPER  1
#define J9SHR_DATA_TYPE_POOL  2
#define J9SHR_DATA_TYPE_AOTHEADER 3
#define J9SHR_DATA_TYPE_JCL  4
#define J9SHR_DATA_TYPE_VM  5
#define J9SHR_DATA_TYPE_ROMSTRING  6
#define J9SHR_DATA_TYPE_CACHELET  7
#define J9SHR_DATA_TYPE_ZIPCACHE 8
#define J9SHR_DATA_TYPE_JITHINT 9
#define J9SHR_DATA_TYPE_STARTUP_HINTS 10
#define J9SHR_DATA_TYPE_AOTCLASSCHAIN 11
#define J9SHR_DATA_TYPE_AOTTHUNK 12
#define J9SHR_DATA_TYPE_MAX 12

#define J9SHR_ATTACHED_DATA_TYPE_UNKNOWN  0
#define J9SHR_ATTACHED_DATA_TYPE_JITPROFILE  1
#define J9SHR_ATTACHED_DATA_TYPE_JITHINT  2
#define J9SHR_ATTACHED_DATA_TYPE_MAX 2

#define J9SHR_RUNTIMEFLAG_ENABLE_TIMESTAMP_CHECKS  1
#define J9SHR_RUNTIMEFLAG_ENABLE_LOCAL_CACHEING  2
#define J9SHR_RUNTIMEFLAG_ENABLE_URL_TIMESTAMP_CHECK  4
#define J9SHR_RUNTIMEFLAG_ENABLE_REDUCE_STORE_CONTENTION  8
#define J9SHR_RUNTIMEFLAG_ENABLE_SHAREANONYMOUSCLASSES 16
#define J9SHR_RUNTIMEFLAG_ENABLE_CACHE_NON_BOOT_CLASSES  32
#define J9SHR_RUNTIMEFLAG_ENABLE_TRACECOUNT  64
#define J9SHR_RUNTIMEFLAG_ENABLE_BYTECODEFIX  0x80
#define J9SHR_RUNTIMEFLAG_BYTECODE_AGENT_RUNNING  0x100
#define J9SHR_RUNTIMEFLAG_CACHE_INITIALIZATION_COMPLETE  0x200
#define J9SHR_RUNTIMEFLAG_DENY_CACHE_ACCESS  0x400
#define J9SHR_RUNTIMEFLAG_DENY_CACHE_UPDATES  0x800
#define J9SHR_RUNTIMEFLAG_DO_RESET_CLASSPATH_CACHE  0x1000
#define J9SHR_RUNTIMEFLAG_ENABLE_NONFATAL  0x2000
#define J9SHR_RUNTIMEFLAG_DO_DESTROY_CONFIG  0x4000
#define J9SHR_RUNTIMEFLAG_BLOCK_SPACE_FULL  0x8000
#define J9SHR_RUNTIMEFLAG_ENABLE_NESTED  0x10000
#define J9SHR_RUNTIMEFLAG_ENABLE_AOT  0x20000
#define J9SHR_RUNTIMEFLAG_ENABLE_PERSISTENT_CACHE  0x40000
#define J9SHR_RUNTIMEFLAG_ENABLE_GROUP_ACCESS  0x80000
#define J9SHR_RUNTIMEFLAG_ENABLE_DETAILED_STATS  0x100000
#define J9SHR_RUNTIMEFLAG_ENABLE_ROUND_TO_PAGE_SIZE  0x200000
#define J9SHR_RUNTIMEFLAG_ENABLE_MSYNC  0x400000
#define J9SHR_RUNTIMEFLAG_ENABLE_MPROTECT  0x800000
#define J9SHR_RUNTIMEFLAG_ENABLE_MPROTECT_ALL  0x1000000
#define J9SHR_RUNTIMEFLAG_ENABLE_CACHERETRANSFORMED  0x2000000
#define J9SHR_RUNTIMEFLAG_ENABLE_CACHEBOOTCLASSES  0x4000000
#define J9SHR_RUNTIMEFLAG_AUTOKILL_DIFF_BUILDID  0x8000000
#define J9SHR_RUNTIMEFLAG_ENABLE_READONLY  0x10000000
#define J9SHR_RUNTIMEFLAG_DETECT_NETWORK_CACHE  0x20000000
#define J9SHR_RUNTIMEFLAG_ENABLE_JITDATA 0x40000000
#define J9SHR_RUNTIMEFLAG_ENABLE_SEMAPHORE_CHECK  0x80000000
#define J9SHR_RUNTIMEFLAG_ENABLE_MPROTECT_RW J9CONST64(0x100000000)
#define J9SHR_RUNTIMEFLAG_VERIFY_TREE_AND_TREE_ACCESS J9CONST64(0x200000000)
#define J9SHR_RUNTIMEFLAG_ENABLE_STRING_TABLE_CHECK J9CONST64(0x400000000)
#define J9SHR_RUNTIMEFLAG_PERSISTENT_KEYWORD J9CONST64(0x800000000)
#define J9SHR_RUNTIMEFLAG_ENABLE_TEST_BAD_BUILDID J9CONST64(0x1000000000)
#define J9SHR_RUNTIMEFLAG_ENABLE_STATS J9CONST64(0x2000000000)
#define J9SHR_RUNTIMEFLAG_FORCE_DUMP_IF_CORRUPT J9CONST64(0x4000000000)
#define J9SHR_RUNTIMEFLAG_FAKE_CORRUPTION J9CONST64(0x8000000000)
#define J9SHR_RUNTIMEFLAG_DBG_EXTRA_CHECKS J9CONST64(0x10000000000)
#define J9SHR_RUNTIMEFLAG_CREATE_OLD_GEN J9CONST64(0x20000000000)
#define J9SHR_RUNTIMEFLAG_DISABLE_CORRUPT_CACHE_DUMPS J9CONST64(0x40000000000)
#define J9SHR_RUNTIMEFLAG_CHECK_STRINGTABLE_RESET_READONLY J9CONST64(0x80000000000)
#define J9SHR_RUNTIMEFLAG_CHECK_STRINGTABLE_RESET_READWRITE J9CONST64(0x100000000000)
#define J9SHR_RUNTIMEFLAG_ENABLE_BCI J9CONST64(0x200000000000)
#define J9SHR_RUNTIMEFLAG_ENABLE_SHAREUNSAFECLASSES J9CONST64(0x400000000000)
#define J9SHR_RUNTIMEFLAG_ADD_TEST_JITHINT J9CONST64(0x800000000000)
#define J9SHR_RUNTIMEFLAG_DISABLE_BCI J9CONST64(0x1000000000000)
#define J9SHR_RUNTIMEFLAG_ENABLE_STORAGEKEY_TESTING J9CONST64(0x2000000000000)
#define J9SHR_RUNTIMEFLAG_AOT_SPACE_FULL J9CONST64(0x4000000000000)
#define J9SHR_RUNTIMEFLAG_JIT_SPACE_FULL J9CONST64(0x8000000000000)
#define J9SHR_RUNTIMEFLAG_ENABLE_MPROTECT_PARTIAL_PAGES J9CONST64(0x10000000000000)
#define J9SHR_RUNTIMEFLAG_CACHEDIR_PRESENT J9CONST64(0x20000000000000)
#define J9SHR_RUNTIMEFLAG_RESTRICT_CLASSPATHS J9CONST64(0x40000000000000)
#define J9SHR_RUNTIMEFLAG_ALLOW_CLASSPATHS J9CONST64(0x80000000000000)
#define J9SHR_RUNTIMEFLAG_SNAPSHOT J9CONST64(0x100000000000000)
#define J9SHR_RUNTIMEFLAG_RESTORE J9CONST64(0x200000000000000)
#define J9SHR_RUNTIMEFLAG_RESTORE_CHECK J9CONST64(0x400000000000000)
#define J9SHR_RUNTIMEFLAG_DO_NOT_CREATE_CACHE J9CONST64(0x800000000000000)
#define J9SHR_RUNTIMEFLAG_ENABLE_MPROTECT_ONFIND J9CONST64(0x1000000000000000)
#define J9SHR_RUNTIMEFLAG_AVAILABLE_SPACE_FULL J9CONST64(0x2000000000000000)
#define J9SHR_RUNTIMEFLAG_MPROTECT_PARTIAL_PAGES_ON_STARTUP J9CONST64(0x4000000000000000)

#define J9SHR_VERBOSEFLAG_ENABLE_VERBOSE_DEFAULT  1
#define J9SHR_VERBOSEFLAG_ENABLE_VERBOSE  2
#define J9SHR_VERBOSEFLAG_ENABLE_VERBOSE_IO  4
#define J9SHR_VERBOSEFLAG_ENABLE_VERBOSE_HELPER  8
#define J9SHR_VERBOSEFLAG_ENABLE_VERBOSE_AOT  16
#define J9SHR_VERBOSEFLAG_ENABLE_VERBOSE_DATA  32
#define J9SHR_VERBOSEFLAG_ENABLE_VERBOSE_INTERN  64
#define J9SHR_VERBOSEFLAG_ENABLE_VERBOSE_PAGES  0x80
#define J9SHR_VERBOSEFLAG_ENABLE_VERBOSE_JITDATA  0x100

/* flags used by J9SharedLocalStartupHints.localStartupHintFlags */
#define J9SHR_LOCAL_STARTUPHINTS_FLAG_FETCHED	1
#define J9SHR_LOCAL_STARTUPHINTS_FLAG_STORE_HEAPSIZES	2
#define J9SHR_LOCAL_STARTUPHINTS_FLAG_OVERWRITE_HEAPSIZES	4
#define J9SHR_LOCAL_STARTUPHINTS_FLAG_WRITE_HINTS (J9SHR_LOCAL_STARTUPHINTS_FLAG_STORE_HEAPSIZES | J9SHR_LOCAL_STARTUPHINTS_FLAG_OVERWRITE_HEAPSIZES)
#define J9SHR_LOCAL_STARTUPHINTS_FLAG_OVERWRITE_HINTS (J9SHR_LOCAL_STARTUPHINTS_FLAG_OVERWRITE_HEAPSIZES)

/* flags used by J9SharedStartupHintsDataDescriptor->flags */
#define J9SHR_STARTUPHINTS_HEAPSIZES_SET	1


#define J9SHR_LOADTYPE_NORMAL  1
#define J9SHR_LOADTYPE_REDEFINED  2
#define J9SHR_LOADTYPE_RETRANSFORMED  3

#define J9SHR_HEADER_STRING_TABLE_INITIALIZED 1


#define J9SHR_EXTRA_FLAGS_NO_LINE_NUMBERS 0x1
#define J9SHR_EXTRA_FLAGS_NO_LINE_NUMBER_CONTENT 0x2
#define J9SHR_EXTRA_FLAGS_LINE_NUMBER_CONTENT 0x4
#define J9SHR_EXTRA_FLAGS_BCI_ENABLED 0x8
/* Unused 0x10 */
#define J9SHR_EXTRA_FLAGS_AOT_HEADER_PRESENT 0x20
#define J9SHR_EXTRA_FLAGS_MPROTECT_PARTIAL_PAGES 0x40
#define J9SHR_EXTRA_FLAGS_RESTRICT_CLASSPATHS 0x80
#define J9SHR_EXTRA_FLAGS_MPROTECT_PARTIAL_PAGES_ON_STARTUP 0x100

#define J9SHR_RESOURCE_TYPE_UNKNOWN 0
#define J9SHR_ATTACHED_DATA_NO_FLAGS 0

#define J9SHR_AOT_METHOD_FLAG_INVALIDATED 1

/* Following flags are used to indicate cache is full */
#define J9SHR_BLOCK_SPACE_FULL 		0x1
#define J9SHR_AOT_SPACE_FULL		0x2
#define J9SHR_JIT_SPACE_FULL		0x4
#define J9SHR_AVAILABLE_SPACE_FULL	0x8

#define J9SHR_ALL_CACHE_FULL_BITS (J9SHR_BLOCK_SPACE_FULL | J9SHR_AOT_SPACE_FULL | J9SHR_JIT_SPACE_FULL | J9SHR_AVAILABLE_SPACE_FULL)

/* The following flags are used by the return code of SH_CompositeCacheImpl::tryAdjustMinMaxSizes() to indicate whether
 * softMaxBytes/minAOT/maxAOT/minJIT/maxJIT have been adjusted in the cache header
 */
#define J9SHR_SOFTMX_ADJUSTED	0x1
#define J9SHR_MIN_AOT_ADJUSTED	0x2
#define J9SHR_MAX_AOT_ADJUSTED	0x4
#define J9SHR_MIN_JIT_ADJUSTED	0x8
#define J9SHR_MAX_JIT_ADJUSTED	0x10

#endif /* SHCFLAGS_H */
