/*****************************************************************************
 * COPYING: see the WXWindows license
 * Generally, the WXWindows license *is* the LGPL, but allows for sublicensing
 * binaries under arbitrary licenses.  Whatever sense that makes.
 *****************************************************************************/
#include <wx/app.h>

/*static in original, but we don't care*/
bool wxAppConsoleBase::CheckBuildOptions(const char *optionsSignature,
        const char *componentName)
{
    return true; //… guys, I'm going home
}

