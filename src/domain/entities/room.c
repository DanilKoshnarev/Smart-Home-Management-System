
#include "room.h"
#include <stdlib.h>
#include <string.h>

Room* create_room(int id, const char* name, int device_count) {
    Room* room = (Room*)malloc(sizeof(Room));
    room->id = id;
    strncpy(room->name, name, sizeof(room->name));
    room->device_count = device_count;
    return room;
}

void destroy_room(Room* room) {
    free(room);
}
