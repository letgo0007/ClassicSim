#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQuickImageProvider>
#include <QQmlContext>

#include "GUIControl.h"
#include "PieChart.h"
#include "PieChartModel.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    Test test;
    test.test_all();

    QApplication app(argc, argv);
    GUIControl* gui_control = new GUIControl();

    QQmlApplicationEngine qml_engine;
    QQmlContext* context = qml_engine.rootContext();

    context->setContextProperty("character", gui_control);
    context->setContextProperty("talents", gui_control);
    context->setContextProperty("equipment", gui_control);
    context->setContextProperty("statistics", gui_control);
    context->setContextProperty("settings", gui_control);
    context->setContextProperty("itemModel", gui_control->get_item_model());
    context->setContextProperty("weaponModel", gui_control->get_weapon_model());
    context->setContextProperty("pieChart", new PieChart());
    context->setContextProperty("pieChartModel", new PieChartModel());

    qml_engine.clearComponentCache();
    qml_engine.load(QUrl(QStringLiteral("qrc:/QML/main.qml")));
    if (qml_engine.rootObjects().isEmpty())
        return -1;


    return app.exec();
}
