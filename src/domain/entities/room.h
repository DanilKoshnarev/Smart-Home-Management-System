#ifndef ROOM_H
#define ROOM_H

typedef struct {
    int id;
    char name[256];
    int device_count;
} Room;

Room* create_room(int id, const char* name, int device_count);
void destroy_room(Room* room);

#endif // ROOM_H
