#include "draw_map_action.hpp"
#include "io.hpp"

void DrawMapAction::operator()(Map const* map) {
	for (unsigned int j = 0; j < map->height; j++) {
		for (unsigned int i = 0; i < map->width; i++) {
			DrawTile(map->tiles[j * map->width + i]);
		}

		IO::Print("\n");
	}

	IO::Print("\n");
}

void DrawMapAction::DrawTile(Tile const& tile) {
	if (!tile.visible) {
		IO::Print("  ");
		return;
	}

	switch(tile.type) {
		case Tile::Type::EMPTY:
			IO::Print(" .");
		break;

		case Tile::Type::WALL:
			IO::Print(" #");
		break;

		default:
			IO::Print(" ?");
	}
}