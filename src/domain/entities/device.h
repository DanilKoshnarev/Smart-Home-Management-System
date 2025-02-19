#ifndef DEVICE_H
#define DEVICE_H

typedef struct {
    int id;
    char name[256];
    char type[256];
    char status[20];
    int room_id;
} Device;

Device* create_device(int id, const char* name, const char* type, const char* status, int room_id);
void destroy_device(Device* device);

#endif // DEVICE_H
