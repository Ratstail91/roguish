#pragma once

//tile structure
struct Tile {
	enum Type {
		EMPTY = 0,
		WALL = 1,
	};

	Type type;
	bool visible;
};

//map structure (one level)
class Map {
public:
	//methods
	Map(unsigned int width, unsigned int height);
	~Map();

	//all public because friendships aren't inherited
	Tile* tiles; //one block of memory
	unsigned int width;
	unsigned int height;
};

//perform an action to the map
class MapAction {
public:
	virtual void operator()(Map const*) = 0;
};