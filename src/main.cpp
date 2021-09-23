#include "io.hpp"
#include "map.hpp"
#include "actor.hpp"
#include "generate_map_action.hpp"
#include "draw_map_action.hpp"

class Hero : public Actor {
	//TODO
};

class Monster : public Actor {
	//TODO
};

int main() {
	IO::Init();
	IO::Clear();

	GenerateMapAction generateMapAction;
	DrawMapAction drawMapAction;

	Map map(20, 20);

	generateMapAction(&map);
	drawMapAction(&map);

	IO::Quit();
	return 0;
}