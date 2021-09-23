#include "io.hpp"
#include "map.hpp"
#include "generate_map_action.hpp"
#include "draw_map_action.hpp"

struct Coordinate {
	int x;
	int y;
};

class Actor {
public:
	Coordinate position;
};

class Hero : public Actor {
	//
};

class Monster : public Actor {
	//
};

int main() {
	IO::Init();

	GenerateMapAction generateMapAction;
	DrawMapAction drawMapAction;

	Map map(20, 20);

	IO::Clear();

	generateMapAction(map);
	drawMapAction(map);

	IO::Quit();
	return 0;
}