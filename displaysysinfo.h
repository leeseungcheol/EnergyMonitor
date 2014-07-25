#ifndef DISPLAYSYSINFO_H
#define DISPLAYSYSINFO_H

#include <QWidget>
#include <qwt_plot.h>
#include <qwt_plot_curve.h>

class GetNode;

namespace Ui {
class DisplaySysInfo;
}

typedef struct plotdata {
    double xData[100];
    double yData[100];
    int index;
    float Watt;
} plotdata;

class DisplaySysInfo : public QWidget
{
    Q_OBJECT

public:
    explicit DisplaySysInfo(QWidget *parent = 0);
    ~DisplaySysInfo();

private:
    Ui::DisplaySysInfo *ui;

    plotdata armPlotData;
    plotdata memPlotData;
    plotdata kfcPlotData;
    plotdata g3dPlotData;

    GetNode *getNode;
    void DisplaySensor(void);

    QwtPlotCurve *ARMSensorCurve;
    QwtPlotCurve *MEMSensorCurve;
    QwtPlotCurve *KFCSensorCurve;
    QwtPlotCurve *G3DSensorCurve;
    QwtPlot *qwtPlotSensor;

    void displaySensorPlot(void);
    void drawARMSensorCurve(void);
    void drawMEMSensorCurve(void);
    void drawKFCSensorCurve(void);
    void drawG3DSensorCurve(void);

private slots:
    void update();
};

#endif // DISPLAYSYSINFO_H
