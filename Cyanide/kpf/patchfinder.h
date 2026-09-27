//
//  patchfinder.h
//  Cyanide
//
//  Created by seo on 3/26/26.
//

#ifndef patchfinder_h
#define patchfinder_h

#include <stdio.h>

// One-time bring-up of the ksafe mapped-address gate (kernel_map snapshot).
// Historical name — no kernelcache or XPF involved anymore.
int init_xpf(void);

#endif /* patchfinder_h */
