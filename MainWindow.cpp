#if defined(_MSC_VER) && (_MSC_VER >= 1600)
#pragma execution_character_set("utf-8")
#endif
#include "MainWindow.h"

#include<iostream>
#include <typeinfo>  //打印变量类型

#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QDebug>

#include <QFileDialog>
#include <QStandardItemModel>
#include <QDebug>
#include <QMessageBox>
#include <QTabWidget>
#include <QVBoxLayout>

#include <vtkSmartPointer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkSphereSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkNamedColors.h>

#include <QSurfaceFormat.h>
#include <QVTKOpenGLNativeWidget.h>
#include <vtkActor.h>
#include <vtkNew.h>
#include <vtkSTLReader.h>
#include <vtkType.h>

#include <QApplication>
#include <QMainWindow>
#include <QVTKOpenGLWidget.h>
#include <vtkProperty.h>
#include <vtkPropPicker.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkSmartPointer.h>
#include <iostream>
#include <vtkLight.h>
#include <vtkSmartPointer.h>



using namespace std;







MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

    // 在 MainWindow 的构造函数中
    //customVTKWidgetMyself = new CustomVTKWidget(this);
    //setCentralWidget(customVTKWidgetMyself);

    // 在MainWindow的构造函数中
    //ui.widget->installEventFilter(this);



    this->initStyleSheetDockWidget1();

	/*QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(openRun1()));*/
    QObject::connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(openRun1()));



    // 修改控件之间间隙
    QGridLayout* gridLayout = ui.gridLayout; // 替换为实际的对象名
    gridLayout->setContentsMargins(0, 0, 0, 0);
    gridLayout->setSpacing(0);

    QGridLayout* gridLayout2 = ui.gridLayout_2; // 替换为实际的对象名
    gridLayout2->setContentsMargins(0, 0, 0, 0);
    gridLayout2->setSpacing(0);

    QGridLayout* gridLayout3= ui.gridLayout_3; // 替换为实际的对象名
    gridLayout3->setContentsMargins(7, 7, 7, 7);
    gridLayout3->setSpacing(0);

    QGridLayout* gridLayout4 = ui.gridLayout_4; // 替换为实际的对象名
    gridLayout4->setContentsMargins(0, 0, 0, 0);
    gridLayout4->setSpacing(0);

    QGridLayout* gridLayout5= ui.gridLayout_5; // 替换为实际的对象名
    gridLayout5->setContentsMargins(0, 0, 0, 0);
    gridLayout5->setSpacing(0);

    //查看控件里面gridLayout名称
    QWidget* frame = ui.frame; // 替换为实际的对象名
    QGridLayout* gridLayoutT = qobject_cast<QGridLayout*>(frame->layout());
    if (gridLayoutT) {
        qDebug() << "GridLayout name: " << gridLayoutT->objectName();
    }
    else {
        qDebug() << "frame控件没有GridLayout布局。";
    }




}



//}




