#include "ecs_world.h"
#include "flecs.h"

ECSWorld::ECSWorld() {
	world = ecs_init();
	ecs_entity_t e = ecs_new(world);
	ecs_i32_t value = 100;
	ecs_set(world, e, ecs_i32_t, value);
}

ECSWorld::~ECSWorld() {
	ecs_fini(world);
}

void ECSWorld::_process(double delta) {
	ecs_progress(world, static_cast<float>(delta));
}

void ECSWorld::_bind_methods() {
    // Bind methods and properties here if needed
}
