#include <windows.h>
#include <tchar.h>

int _tWinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPTSTR    lpCmdLine,
	int       cmdShow)
{
	BOOL enabled;

	SystemParametersInfo(SPI_GETDRAGFULLWINDOWS,
		NULL, &enabled, 0);

	//printf("Current 'dragfullwindow' option status: %d\n", enabled);

	if (!enabled)
	{
		SystemParametersInfo(SPI_SETDRAGFULLWINDOWS,
			TRUE,
			NULL,
			SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
	}
	return 0;
}