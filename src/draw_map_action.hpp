#pragma once
#include "map.hpp"

class DrawMapAction : public MapAction {
public:
	Map operator()(Map) override;

private:
	void DrawTile(Tile);
};
