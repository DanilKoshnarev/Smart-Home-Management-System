#ifndef DEVICE_CONTROLLER_H
#define DEVICE_CONTROLLER_H

#include "manage_devices.h"

typedef struct {
    ManageDevices* manage_devices;
} DeviceController;

DeviceController* create_device_controller(ManageDevices* manage_devices);
void destroy_device_controller(DeviceController* controller);

void create_device_action(DeviceController* controller, int id, const char* name, const char* type, const char* status, int room_id);
void view_device_action(DeviceController* controller, int id);
void view_all_devices_action(DeviceController* controller);

#endif // DEVICE_CONTROLLER_H
