#include <windows.h>
#include <iostream>

using namespace std;

int main() {
	
	system("color 2f");
	
		system("start cmd");

	

    DEVMODE dm;
    memset(&dm, 0, sizeof(dm));
    dm.dmSize = sizeof(dm);

    if (!EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &dm)) {
        cout << "Errore nel leggere le impostazioni dello schermo." << endl;
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
        cout << "Rotazione applicata!" << endl;
    } else if (result == DISP_CHANGE_RESTART) {
        cout << "Rotazione applicata, ma è necessario riavviare Windows." << endl;
    } else {
        cout << "Errore nella rotazione dello schermo. Codice: " << result << endl;
    }

    return 0;
}
