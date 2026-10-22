#include <Geode/binding/LevelSettingsLayer.hpp>
#include <Geode/binding/ColorSelectPopup.hpp>


#if defined(GEODE_IS_WINDOWS) || defined(GEODE_IS_IOS)
void LevelSettingsLayer::showPicker(ColorAction* action) {
    auto popup = ColorSelectPopup::create(action);
    popup->m_delegate = this;
    popup->show();
}
#endif

#if defined(GEODE_IS_WINDOWS)
#endif

#if defined(GEODE_IS_IOS)
#endif


#if defined(GEODE_IS_WINDOWS)
LevelSettingsLayer::~LevelSettingsLayer() {
    CC_SAFE_RELEASE(m_settingsObject);
    CC_SAFE_RELEASE(m_modeToggles);
    CC_SAFE_RELEASE(m_speedButtons);
}
#endif
