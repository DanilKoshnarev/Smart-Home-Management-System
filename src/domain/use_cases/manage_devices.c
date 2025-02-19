#include "manage_devices.h"
#include <stdlib.h>

ManageDevices* create_manage_devices(DeviceRepository* device_repository) {
    ManageDevices* manage_devices = (ManageDevices*)malloc(sizeof(ManageDevices));
    manage_devices->device_repository = device_repository;
    return manage_devices;
}

void destroy_manage_devices(ManageDevices* manage_devices) {
    free(manage_devices);
}

void create_device_use_case(ManageDevices* manage_devices, int id, const char* name, const char* type, const char* status, int room_id) {
    Device* device = create_device(id, name, type, status, room_id);
    manage_devices->device_repository->save(device);
    destroy_device(device);
}

Device* view_device_use_case(ManageDevices* manage_devices, int id) {
    return manage_devices->device_repository->find_by_id(id);
}

Device** view_all_devices_use_case(ManageDevices* manage_devices, int* count) {
    return manage_devices->device_repository->find_all(count);
}

void remove_device_use_case(ManageDevices* manage_devices, int id) {
    manage_devices->device_repository->delete(id);
}
