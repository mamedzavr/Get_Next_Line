# Get Next Line

42 project that reads a file descriptor line by line.

## Overview

`get_next_line` returns one line per call from any valid file descriptor. Remaining data is kept in a static linked list keyed by `fd`, so several descriptors can be read in parallel without mixing their buffers.

Prototype:

```c
int get_next_line(const int fd, char **line);
```

| Return | Meaning |
|--------|---------|
| `1` | A line was read into `*line` |
| `0` | EOF reached |
| `-1` | Error |

## How it works

1. Read chunks of size `BUFF_SIZE` (default `32`) with `read`.
2. Append them to a per-fd buffer stored in a static `t_list`.
3. When a `'\n'` (or EOF with leftover data) is found, copy the line into `*line` and keep the rest for the next call.
4. On EOF with an empty buffer, remove that fd’s list node.

Depends on the bundled [`libft`](libft/) for string and list helpers.

## Build / use

There is no standalone binary — compile the function into your program:

```bash
# from a project that includes this file
gcc -Wall -Wextra -Werror -D BUFF_SIZE=32 \
    get_next_line.c -I. -I libft -L libft -lft
```

`BUFF_SIZE` can be redefined at compile time.

```c
#include "get_next_line.h"

char *line;
int fd = open("file.txt", O_RDONLY);
while (get_next_line(fd, &line) > 0)
{
    // use line
    free(line);
}
```

## Subject

See [`get_next_line.en.pdf`](get_next_line.en.pdf).
