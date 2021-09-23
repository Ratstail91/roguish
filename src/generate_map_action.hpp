#pragma once

#include "map.hpp"

class GenerateMapAction : public MapAction {
public:
	void operator()(Map const*) override;
};
