#include "register_types.h"
#include "core/object/class_db.h"
#include "ecs_world.h"

void initialize_flecs_gd_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	ClassDB::register_class<ECSWorld>();
}

void uninitialize_flecs_gd_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	// Nothing to do here for now.
}
