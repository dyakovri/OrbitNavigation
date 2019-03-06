#include "MainWindow.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void WinMain() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OrbitNavigation::MainWindow Window;
	Application::Run(%Window);
}