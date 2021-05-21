#include "TestMod.h"
#include "../../../Utils/Utils.h"

void TestMod::onEnable() {
	//
}

void TestMod::onDisable() {
	//
}

void TestMod::onTick() {
	//
}

bool forEachDimensionCallback(const Dimension& dimension) {
	auto d = (Dimension*)&dimension;
	Utils::DebugLogF(std::to_string(d->height).c_str());

	std::ostringstream o;
	o << std::hex << d << std::endl;
	Utils::DebugLogF(o.str().c_str());

	return false;
}

static bool once = false;

void TestMod::onGmTick(GameMode* GM) {
	//
}