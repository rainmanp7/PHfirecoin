// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2014-2017 XDN-project developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <new>

#include "hash.h"

#if defined(WIN32)
#include <Windows.h>
#else
//#include <sys/mman.h>
#include <sys/mman.h>
#endif

using std::bad_alloc;

namespace Crypto {

  enum {
    MAP_SIZE = SLOW_HASH_CONTEXT_SIZE + ((-SLOW_HASH_CONTEXT_SIZE) & 0xfff)
  };

#if defined(WIN32)

  cn_context::cn_context() {
    data = VirtualAlloc(nullptr, MAP_SIZE, MEM_COMMIT, PAGE_READWRITE);
    if (data == nullptr) {
      throw bad_alloc();
    }
  }

  cn_context::~cn_context() {
    if (!VirtualFree(data, 0, MEM_RELEASE)) {
      throw bad_alloc();
    }
  }

#else

  cn_context::cn_context() {
#if !defined(__APPLE__)
    data = mmap(nullptr, MAP_SIZE, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_POPULATE, -1, 0);
#else
    data = mmap(nullptr, MAP_SIZE, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANON, -1, 0);
#endif
    if (data == MAP_FAILED) {
      throw bad_alloc();
    }
    mlock(data, MAP_SIZE);
  }
//rainmanp7
// reconstituted the trow becasue of bad allocation block that equals 0
  cn_context::~cn_context() {
    if (munmap(data, MAP_SIZE) != 0) {
      std::bad_alloc();
    }
      mlock(data, MAP_SIZE);
  }

#endif

}
