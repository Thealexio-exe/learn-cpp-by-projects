#include <windows.h>
#include <iostream>

using namespace std;

int main() {
	
    DEVMODE dm;
    memset(&dm, 0, sizeof(dm));
    dm.dmSize = sizeof(dm);

    if (!EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &dm)) {
        cout << "Error reading the screen settings." << endl;
        return 1;
    }

    int newOrientation;
    switch (dm.dmDisplayOrientation) {
        case DMDO_DEFAULT: newOrientation = DMDO_90; break;
        case DMDO_90:     newOrientation = DMDO_180; break;
        case DMDO_180:    newOrientation = DMDO_270; break;
        case DMDO_270:    newOrientation = DMDO_DEFAULT; break;
        default: newOrientation = DMDO_DEFAULT;
    }

    if (newOrientation == DMDO_90 || newOrientation == DMDO_270) {
        DWORD temp = dm.dmPelsHeight;
        dm.dmPelsHeight = dm.dmPelsWidth;
        dm.dmPelsWidth  = temp;
    }

    dm.dmFields = DM_DISPLAYORIENTATION | DM_PELSWIDTH | DM_PELSHEIGHT;
    dm.dmDisplayOrientation = newOrientation;

    LONG result = ChangeDisplaySettings(&dm, CDS_UPDATEREGISTRY);

    if (result == DISP_CHANGE_SUCCESSFUL) {
        cout << "Rotation applied!" << endl;
    } else if (result == DISP_CHANGE_RESTART) {
        cout << "Rotation has been applied, but you need to restart Windows." << endl;
    } else {
        cout << "Error rotating the screen. Code: " << result << endl;
    }

    return 0;
}
