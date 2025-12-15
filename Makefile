CC = clang
CFLAGS = -Wall -Wextra -Werror -I./src/kernel -I./src/userspace -I./src/ui -I./src/platform
SRCS = src/main.c src/kernel/kernel.c src/userspace/shell.c src/ui/ui.c src/platform/macos_platform.c
OBJS = $(SRCS:.c=.o)
TARGET = aloneos

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
