#include "MainWindow.h"
#include <QtWidgets/QApplication>
#include <vtkOutputWindow.h>

int main(int argc, char *argv[])
{

	vtkOutputWindow::SetGlobalWarningDisplay(0);
	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return a.exec();
}
