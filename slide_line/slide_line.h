#ifndef SLIDELINE_H
#define SLIDELINE_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define SLIDE_LEFT 2
#define SLIDE_RIGHT 3

int slide_line(int *line, size_t size, int direction);
#endif /* SLIDELINE_H */