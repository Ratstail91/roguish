#include "map.hpp"

Map::Map(unsigned int w, unsigned int h)
	: width(w)
	, height(h)
{
	tiles = new Tile[width * height];
}