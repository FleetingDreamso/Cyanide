//
//  patchfinder.m
//  Cyanide
//
//  Created by seo on 3/26/26.
//

#import <Foundation/Foundation.h>

#import "patchfinder.h"
#import "../kexploit/ksafe.h"

// One-time bring-up of the process viewer's mapped-address safety gate.
//
// ksafe needs no kernelcache, no symbols and no page tables: the check is a
// kernel_map vm_map_entry snapshot built from known struct offsets (see
// ksafe.m). The old translation-symbol machinery (static per-build offset
// table, on-device kernelcache grab via vnode swap, XPF resolution) was
// removed — page-table pages are SPTM-owned on T8140 and unreadable anyway.
int init_xpf(void) {
    ksafe_bringup();
    return 0;
}
