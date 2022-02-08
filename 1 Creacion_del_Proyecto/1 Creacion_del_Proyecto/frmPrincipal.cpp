#include "frmPrincipal.h"
using namespace System;
using namespace System::Windows::Forms; 
[STAThreadAttribute]
int main(array<String^>^ args) { 
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	My1CreaciondelProyecto::frmPrincipal form;
	Application::Run(% form);	
	return 0; 
}


