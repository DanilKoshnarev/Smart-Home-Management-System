#include "device_controller.h"
#include <stdio.h>

DeviceController* create_device_controller(ManageDevices* manage_devices) {
    DeviceController* controller = (DeviceController*)malloc(sizeof(DeviceController));
    controller->manage_devices = manage_devices;
    return controller;
}

void destroy_device_controller(DeviceController* controller) {
    free(controller);
}

void create_device_action(DeviceController* controller, int id, const char* name, const char* type, const char* status, int room_id) {
    create_device_use_case(controller->manage_devices, id, name, type, status, room_id);
    printf("Device created successfully\n");
}

void view_device_action(DeviceController* controller, int id) {
    Device* device = view_device_use_case(controller->manage_devices, id);
    if (device != NULL) {
        printf("Device ID: %d\n", device->id);
        printf("Name: %s\n", device->name);
        printf("Type: %s\n", device->type);
        printf("Status: %s\n", device->status);
        printf("Room ID: %d\n", device->room_id);
    } else {
        printf("Device not found\n");
    }
}

void view_all_devices_action(DeviceController* controller) {
    int count;
    Device** devices = view_all_devices_use_case(controller->manage_devices, &count);
    for (int i = 0; i < count; i++) {
        printf("Device ID: %d\n", devices[i]->id);
        printf("Name: %s\n", devices[i]->name);
        printf("Type: %s\n", devices[i]->type);
        printf("Status: %s\n", devices[i]->status);
        printf("Room ID: %d\n", devices[i]->room_id);
        printf("\n");
    }
}
