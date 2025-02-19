#ifndef DEVICE_REPOSITORY_IMPL_H
#define DEVICE_REPOSITORY_IMPL_H

#include "device_repository.h"

typedef struct {
    DeviceRepository base;
    Device* devices[100];
    int count;
} DeviceRepositoryImpl;

DeviceRepositoryImpl* create_device_repository_impl();
void destroy_device_repository_impl(DeviceRepositoryImpl* impl);

#endif // DEVICE_REPOSITORY_IMPL_H
