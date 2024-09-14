#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"

#include <QStandardItemModel>

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
#include <vtkPropPicker.h>
#include <QMouseEvent>
#include <vtkProperty.h>
#include <QMouseEvent> // 添加这个头文件
#include <QMouseEvent>
#include <QDebug>
#include <vtkCellPicker.h>
#include <vtkPolyData.h>
#include <vtkDataSetMapper.h>
#include <vtkActor.h>
#include <vtkProperty.h>
#include <vtkObjectFactory.h>
#include <vtkPolyData.h>
#include <vtkSmartPointer.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkSTLReader.h>
#include <vtkRenderer.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkStringArray.h>
#include <vtkPolyData.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkSTLReader.h>
#include <vtkRenderer.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkStringArray.h>
#include <vtkFieldData.h>

#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkSmartPointer.h>
#include <vtkPropPicker.h>
#include <vtkActor.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <iostream>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);

private:
	Ui::MainWindowClass ui;

    //CustomVTKWidget* customVTKWidgetMyself;

	vtkSmartPointer<vtkRenderer> renderer = vtkSmartPointer<vtkRenderer>::New();
	vtkSmartPointer<vtkGenericOpenGLRenderWindow> renderWindow =
		vtkSmartPointer<vtkGenericOpenGLRenderWindow>::New();

	//vtkSmartPointer<vtkPolyDataMapper> mapper = vtkSmartPointer<vtkPolyDataMapper>::New();
	//vtkSmartPointer<vtkActor> actor = vtkSmartPointer<vtkActor>::New();

	// 创建容器来保存vtkActor指针
	std::vector<vtkActor*> actors;


	//vtkTypeBool valueFlag_SetVisibility = true;


private slots:
	void openRun1();
	void onSaveButtonClicked();
	//void displayPage1();
	//void displayPage2();
	//void displayPage3();

	void initStyleSheetDockWidget1();


	void showContextMenu(const QPoint& pos);
	void deleteFile(const QModelIndex& index);
	void itemStateChanged(QStandardItem* item);



    


protected:
    //void mousePressEvent(QMouseEvent* event) override;

};
