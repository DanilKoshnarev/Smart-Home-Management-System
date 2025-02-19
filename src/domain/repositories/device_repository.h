#ifndef DEVICE_REPOSITORY_H
#define DEVICE_REPOSITORY_H

#include "device.h"

typedef struct {
    void (*save)(Device* device);
    Device* (*find_by_id)(int id);
    Device** (*find_all)(int* count);
    void (*delete)(int id);
} DeviceRepository;

#endif // DEVICE_REPOSITORY_H
