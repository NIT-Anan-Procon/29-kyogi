#include <stdio.h>

#include "vector.h"
#include "coord.h"

#define VER_MAX 16

typedef struct{
	Coord vertex[VER_MAX];
	int vertex_number;
	Vector side[VER_MAX];
	double angle[VER_MAX];
}Polygon;

void Read_vertex(FILE *file, Polygon *p);