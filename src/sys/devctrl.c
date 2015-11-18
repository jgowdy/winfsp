/**
 * @file sys/devctrl.c
 *
 * @copyright 2015 Bill Zissimopoulos
 */

#include <sys/driver.h>

DRIVER_DISPATCH FspDeviceControl;

#ifdef ALLOC_PRAGMA
#pragma alloc_text(PAGE, FspDeviceControl)
#endif

NTSTATUS
FspDeviceControl(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp)
{
    FSP_ENTER(PAGED_CODE());

    Irp->IoStatus.Status = STATUS_INVALID_DEVICE_REQUEST;
    IoCompleteRequest(Irp, IO_NO_INCREMENT);
    Result = STATUS_INVALID_DEVICE_REQUEST;

    FSP_LEAVE("", 0);
}