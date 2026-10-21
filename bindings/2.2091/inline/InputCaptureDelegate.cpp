#include <Geode/binding/InputCaptureDelegate.hpp>

void InputCaptureDelegate::inputKeySelected(int) {}

#if defined(GEODE_IS_WINDOWS)
InputCaptureDelegate::~InputCaptureDelegate() {}
#endif
