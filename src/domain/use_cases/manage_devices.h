#ifndef MANAGE_DEVICES_H
#define MANAGE_DEVICES_H

#include "device.h"
#include "device_repository.h"

typedef struct {
    DeviceRepository* device_repository;
} ManageDevices;

ManageDevices* create_manage_devices(DeviceRepository* device_repository);
void destroy_manage_devices(ManageDevices* manage_devices);

void create_device_use_case(ManageDevices* manage_devices, int id, const char* name, const char* type, const char* status, int room_id);
Device* view_device_use_case(ManageDevices* manage_devices, int id);
Device** view_all_devices_use_case(ManageDevices* manage_devices, int* count);
void remove_device_use_case(ManageDevices* manage_devices, int id);

#endif // MANAGE_DEVICES_H
