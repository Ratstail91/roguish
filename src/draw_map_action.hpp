#pragma once
#include "map.hpp"

class DrawMapAction : public MapAction {
public:
	void operator()(Map const*) override;

private:
	void DrawTile(Tile const&);
};
