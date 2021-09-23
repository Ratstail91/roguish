#pragma once

//coordinates go here for now
struct Coordinate {
	int x;
	int y;
};

class Actor {
public:
	//methods
	Actor(char sprite);

	//members
	Coordinate position;
	char sprite;
};

class ActorAction {
public:
	virtual void operator()(Actor const*) = 0;
};
