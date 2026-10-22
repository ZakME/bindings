#include <Geode/Bindings.hpp>

EmoteSprite* EmoteSprite::createWithName(std::string const& name) {
    auto def = defForName(name);
    return createWithDef(def);
}

#if defined(GEODE_IS_WINDOWS)
EmoteSprite::~EmoteSprite() {}
#endif
