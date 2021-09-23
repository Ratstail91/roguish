#pragma once
#include "map.hpp"

class GenerateMapAction : public MapAction {
public:
	Map operator()(Map) override;
};
