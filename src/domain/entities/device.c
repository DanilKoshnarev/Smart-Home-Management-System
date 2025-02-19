#include "device.h"
#include <stdlib.h>
#include <string.h>

Device* create_device(int id, const char* name, const char* type, const char* status, int room_id) {
    Device* device = (Device*)malloc(sizeof(Device));
    device->id = id;
    strncpy(device->name, name, sizeof(device->name));
    strncpy(device->type, type, sizeof(device->type));
    strncpy(device->status, status, sizeof(device->status));
    device->room_id = room_id;
    return device;
}

void destroy_device(Device* device) {
    free(device);
}
