#ifndef ECS_WORLD_H
#define ECS_WORLD_H

#include "flecs.h"
#include "scene/main/node.h"

class ECSWorld : public Node {
	GDCLASS(ECSWorld, Node);

protected:
	static void _bind_methods();

private:
	ecs_world_t* world;

public:
	ECSWorld();
	~ECSWorld();
	void _process(double delta);
};

#endif
