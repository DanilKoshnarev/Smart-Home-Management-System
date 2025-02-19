CC = gcc
CFLAGS = -I./src -Wall
LDFLAGS = 

SRCS = $(wildcard src/**/*.c src/*.c)
OBJS = $(SRCS:.c=.o)

TARGET = build/smart_home_manager

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS)

clean:
	rm -f $(OBJS) $(TARGET)
