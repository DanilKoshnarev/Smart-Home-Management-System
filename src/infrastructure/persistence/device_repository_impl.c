#include "device_repository_impl.h"
#include <stdlib.h>
#include <string.h>

static void save(Device* device);
static Device* find_by_id(int id);
static Device** find_all(int* count);
static void delete(int id);

DeviceRepositoryImpl* create_device_repository_impl() {
    DeviceRepositoryImpl* impl = (DeviceRepositoryImpl*)malloc(sizeof(DeviceRepositoryImpl));
    impl->base.save = save;
    impl->base.find_by_id = find_by_id;
    impl->base.find_all = find_all;
    impl->base.delete = delete;
    impl->count = 0;
    return impl;
}

void destroy_device_repository_impl(DeviceRepositoryImpl* impl) {
    for (int i = 0; i < impl->count; i++) {
        destroy_device(impl->devices[i]);
    }
    free(impl);
}

static void save(Device* device) {
    DeviceRepositoryImpl* impl = (DeviceRepositoryImpl*)device->repository;
    impl->devices[impl->count++] = device;
}

static Device* find_by_id(int id) {
    DeviceRepositoryImpl* impl = (DeviceRepositoryImpl*)device->repository;
    for (int i = 0; i < impl->count; i++) {
        if (impl->devices[i]->id == id) {
            return impl->devices[i];
        }
    }
    return NULL;
}

static Device** find_all(int* count) {
    DeviceRepositoryImpl* impl = (DeviceRepositoryImpl*)device->repository;
    *count = impl->count;
    return impl->devices;
}

static void delete(int id) {
    DeviceRepositoryImpl* impl = (DeviceRepositoryImpl*)device->repository;
    for (int i = 0; i < impl->count; i++) {
        if (impl->devices[i]->id == id) {
            destroy_device(impl->devices[i]);
            memmove(&impl->devices[i], &impl->devices[i + 1], (impl->count - i - 1) * sizeof(Device*));
            impl->count--;
            break;
        }
    }
}
