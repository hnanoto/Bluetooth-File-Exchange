//
//  Bluetooth_File_Exchange.c
//  Bluetooth File Exchange
//
//  Created by Henrique on 17/10/23.
//

#include <mach/mach_types.h>

kern_return_t Bluetooth_File_Exchange_start(kmod_info_t * ki, void *d);
kern_return_t Bluetooth_File_Exchange_stop(kmod_info_t *ki, void *d);

kern_return_t Bluetooth_File_Exchange_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t Bluetooth_File_Exchange_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
