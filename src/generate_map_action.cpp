#include "generate_map_action.hpp"

void GenerateMapAction::operator()(Map const* map) {
	//blank & visible
	for (unsigned int i = 0; i < map->width * map->height; i++) {
		map->tiles[i] = Tile {Tile::Type::EMPTY, true};
	}

	//walls
	for (unsigned int i = 0; i < map->width * map->height; i++) {
		//top
		if (i / map->width == 0) {
			map->tiles[i] = Tile {Tile::Type::WALL, true};
		}

		//bottom
		if (i / map->width == map->height - 1) {
			map->tiles[i] = Tile {Tile::Type::WALL, true};
		}

		//left
		if (i % map->width == 0) {
			map->tiles[i] = Tile {Tile::Type::WALL, true};
		}

		//right
		if (i % map->width == map->width - 1) {
			map->tiles[i] = Tile {Tile::Type::WALL, true};
		}
	}
}