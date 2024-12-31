//
//  BluetoothFileExchange.c
//  BluetoothFileExchange
//
//  Created by Henrique  on 31/12/24.
//

#include <mach/mach_types.h>

kern_return_t BluetoothFileExchange_start(kmod_info_t * ki, void *d);
kern_return_t BluetoothFileExchange_stop(kmod_info_t *ki, void *d);

kern_return_t BluetoothFileExchange_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t BluetoothFileExchange_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
