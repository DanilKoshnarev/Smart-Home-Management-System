#include "domain/entities/device.h"
#include "infrastructure/persistence/device_repository_impl.h"
#include "domain/use_cases/manage_devices.h"
#include "presentation/controllers/device_controller.h"
#include <stdio.h>

int main() {
    DeviceRepositoryImpl* device_repository_impl = create_device_repository_impl();
    ManageDevices* manage_devices = create_manage_devices((DeviceRepository*)device_repository_impl);
    DeviceController* device_controller = create_device_controller(manage_devices);

    
    create_device_action(device_controller, 1, "Living Room Light", "Light", "On", 1);
    create_device_action(device_controller, 2, "Thermostat", "Climate Control", "Off", 2);

    printf("All devices:\n");
    view_all_devices_action(device_controller);

    printf("\nView device with ID 1:\n");
    view_device_action(device_controller, 1);
    destroy_device_controller(device_controller);
    destroy_manage_devices(manage_devices);
    destroy_device_repository_impl(device_repository_impl);

    return 0;
}
