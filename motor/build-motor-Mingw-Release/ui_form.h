/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_form
{
public:
    QAction *set_XNet;
    QAction *stop_XNet;
    QWidget *centralwidget;
    QGroupBox *show_widget;
    QWidget *result_widget;
    QVBoxLayout *verticalLayout;
    QWidget *state_widget;
    QHBoxLayout *horizontalLayout_16;
    QLabel *statelabel;
    QSpacerItem *horizontalSpacer_33;
    QLCDNumber *stateNumber;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QWidget *error_widget;
    QHBoxLayout *horizontalLayout_17;
    QLabel *errorlabel;
    QSpacerItem *horizontalSpacer_34;
    QLCDNumber *errorNumber;
    QSpacerItem *verticalSpacer_2;
    QWidget *location_widget;
    QHBoxLayout *horizontalLayout_18;
    QLabel *locationlabel;
    QSpacerItem *horizontalSpacer_35;
    QLCDNumber *locationNumber;
    QSpacerItem *verticalSpacer_3;
    QWidget *val_widget;
    QHBoxLayout *horizontalLayout_19;
    QLabel *speedlabel;
    QSpacerItem *horizontalSpacer_36;
    QLCDNumber *velNumber;
    QLabel *title;
    QTabWidget *set_Widget;
    QWidget *model1;
    QWidget *dian_parameter;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *dian_Vel;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_15;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *dian_Acc;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_3;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *dian_Dec;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_16;
    QPushButton *dian_start;
    QWidget *model2;
    QWidget *x_parameter;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *x_Vel;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_7;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_15;
    QLineEdit *x_Acc;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_18;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_17;
    QLineEdit *x_Dec;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_20;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_19;
    QLineEdit *x_Move;
    QPushButton *x_start;
    QWidget *model3;
    QWidget *j_parameter;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_23;
    QLineEdit *j_Vel;
    QSpacerItem *horizontalSpacer_24;
    QLabel *label_8;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_25;
    QLineEdit *j_Acc;
    QSpacerItem *horizontalSpacer_26;
    QLabel *label_22;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_23;
    QSpacerItem *horizontalSpacer_27;
    QLineEdit *j_Dec;
    QSpacerItem *horizontalSpacer_28;
    QLabel *label_24;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_29;
    QLineEdit *j_Move;
    QPushButton *j_start;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_6;
    QPushButton *powerButton;
    QPushButton *powerStopButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *stopButton;
    QPushButton *pushButton;
    QPushButton *quitButton;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *form)
    {
        if (form->objectName().isEmpty())
            form->setObjectName(QStringLiteral("form"));
        form->resize(1590, 1307);
        set_XNet = new QAction(form);
        set_XNet->setObjectName(QStringLiteral("set_XNet"));
        stop_XNet = new QAction(form);
        stop_XNet->setObjectName(QStringLiteral("stop_XNet"));
        centralwidget = new QWidget(form);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        show_widget = new QGroupBox(centralwidget);
        show_widget->setObjectName(QStringLiteral("show_widget"));
        show_widget->setGeometry(QRect(620, 90, 631, 441));
        QFont font;
        font.setPointSize(17);
        show_widget->setFont(font);
        show_widget->setCursor(QCursor(Qt::ForbiddenCursor));
        show_widget->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        result_widget = new QWidget(show_widget);
        result_widget->setObjectName(QStringLiteral("result_widget"));
        result_widget->setGeometry(QRect(40, 40, 551, 361));
        verticalLayout = new QVBoxLayout(result_widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        state_widget = new QWidget(result_widget);
        state_widget->setObjectName(QStringLiteral("state_widget"));
        horizontalLayout_16 = new QHBoxLayout(state_widget);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        statelabel = new QLabel(state_widget);
        statelabel->setObjectName(QStringLiteral("statelabel"));
        statelabel->setFont(font);
        statelabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(statelabel);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_33);

        stateNumber = new QLCDNumber(state_widget);
        stateNumber->setObjectName(QStringLiteral("stateNumber"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        stateNumber->setFont(font1);
        stateNumber->setSmallDecimalPoint(true);
        stateNumber->setDigitCount(1);
        stateNumber->setMode(QLCDNumber::Dec);
        stateNumber->setSegmentStyle(QLCDNumber::Flat);
        stateNumber->setProperty("value", QVariant(0));
        stateNumber->setProperty("intValue", QVariant(0));

        horizontalLayout_16->addWidget(stateNumber);


        verticalLayout->addWidget(state_widget);

        lineEdit = new QLineEdit(result_widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font2;
        font2.setPointSize(12);
        lineEdit->setFont(font2);
        lineEdit->setCursor(QCursor(Qt::ForbiddenCursor));

        verticalLayout->addWidget(lineEdit);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        error_widget = new QWidget(result_widget);
        error_widget->setObjectName(QStringLiteral("error_widget"));
        horizontalLayout_17 = new QHBoxLayout(error_widget);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        errorlabel = new QLabel(error_widget);
        errorlabel->setObjectName(QStringLiteral("errorlabel"));
        errorlabel->setFont(font);
        errorlabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_17->addWidget(errorlabel);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_34);

        errorNumber = new QLCDNumber(error_widget);
        errorNumber->setObjectName(QStringLiteral("errorNumber"));
        errorNumber->setFont(font1);
        errorNumber->setSmallDecimalPoint(true);
        errorNumber->setDigitCount(1);
        errorNumber->setMode(QLCDNumber::Dec);
        errorNumber->setSegmentStyle(QLCDNumber::Flat);
        errorNumber->setProperty("value", QVariant(0));
        errorNumber->setProperty("intValue", QVariant(0));

        horizontalLayout_17->addWidget(errorNumber);


        verticalLayout->addWidget(error_widget);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        location_widget = new QWidget(result_widget);
        location_widget->setObjectName(QStringLiteral("location_widget"));
        horizontalLayout_18 = new QHBoxLayout(location_widget);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        locationlabel = new QLabel(location_widget);
        locationlabel->setObjectName(QStringLiteral("locationlabel"));
        locationlabel->setFont(font);
        locationlabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_18->addWidget(locationlabel);

        horizontalSpacer_35 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_35);

        locationNumber = new QLCDNumber(location_widget);
        locationNumber->setObjectName(QStringLiteral("locationNumber"));
        locationNumber->setFont(font1);
        locationNumber->setSmallDecimalPoint(true);
        locationNumber->setDigitCount(9);
        locationNumber->setMode(QLCDNumber::Dec);
        locationNumber->setSegmentStyle(QLCDNumber::Flat);
        locationNumber->setProperty("value", QVariant(0));
        locationNumber->setProperty("intValue", QVariant(0));

        horizontalLayout_18->addWidget(locationNumber);


        verticalLayout->addWidget(location_widget);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        val_widget = new QWidget(result_widget);
        val_widget->setObjectName(QStringLiteral("val_widget"));
        horizontalLayout_19 = new QHBoxLayout(val_widget);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        speedlabel = new QLabel(val_widget);
        speedlabel->setObjectName(QStringLiteral("speedlabel"));
        speedlabel->setFont(font);
        speedlabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_19->addWidget(speedlabel);

        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_36);

        velNumber = new QLCDNumber(val_widget);
        velNumber->setObjectName(QStringLiteral("velNumber"));
        velNumber->setFont(font1);
        velNumber->setSmallDecimalPoint(true);
        velNumber->setDigitCount(9);
        velNumber->setMode(QLCDNumber::Dec);
        velNumber->setSegmentStyle(QLCDNumber::Flat);
        velNumber->setProperty("value", QVariant(0));
        velNumber->setProperty("intValue", QVariant(0));

        horizontalLayout_19->addWidget(velNumber);


        verticalLayout->addWidget(val_widget);

        title = new QLabel(centralwidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(370, 20, 501, 61));
        QFont font3;
        font3.setPointSize(24);
        title->setFont(font3);
        title->setAlignment(Qt::AlignCenter);
        set_Widget = new QTabWidget(centralwidget);
        set_Widget->setObjectName(QStringLiteral("set_Widget"));
        set_Widget->setGeometry(QRect(30, 90, 531, 481));
        QFont font4;
        font4.setPointSize(15);
        set_Widget->setFont(font4);
        model1 = new QWidget();
        model1->setObjectName(QStringLiteral("model1"));
        dian_parameter = new QWidget(model1);
        dian_parameter->setObjectName(QStringLiteral("dian_parameter"));
        dian_parameter->setGeometry(QRect(60, 30, 400, 300));
        verticalLayout_3 = new QVBoxLayout(dian_parameter);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget_3 = new QWidget(dian_parameter);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font5;
        font5.setPointSize(14);
        label_2->setFont(font5);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_2);

        horizontalSpacer_6 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        dian_Vel = new QLineEdit(widget_3);
        dian_Vel->setObjectName(QStringLiteral("dian_Vel"));

        horizontalLayout_5->addWidget(dian_Vel);

        horizontalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        label_15 = new QLabel(widget_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font5);
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_15);


        verticalLayout_3->addWidget(widget_3);

        widget_4 = new QWidget(dian_parameter);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_6 = new QHBoxLayout(widget_4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_13 = new QLabel(widget_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font5);
        label_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_13);

        horizontalSpacer_8 = new QSpacerItem(27, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        dian_Acc = new QLineEdit(widget_4);
        dian_Acc->setObjectName(QStringLiteral("dian_Acc"));

        horizontalLayout_6->addWidget(dian_Acc);

        horizontalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font5);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_3);


        verticalLayout_3->addWidget(widget_4);

        widget_6 = new QWidget(dian_parameter);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_7 = new QHBoxLayout(widget_6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_14 = new QLabel(widget_6);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font5);
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_14);

        horizontalSpacer_10 = new QSpacerItem(27, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);

        dian_Dec = new QLineEdit(widget_6);
        dian_Dec->setObjectName(QStringLiteral("dian_Dec"));

        horizontalLayout_7->addWidget(dian_Dec);

        horizontalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        label_16 = new QLabel(widget_6);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font5);
        label_16->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_16);


        verticalLayout_3->addWidget(widget_6);

        dian_start = new QPushButton(model1);
        dian_start->setObjectName(QStringLiteral("dian_start"));
        dian_start->setGeometry(QRect(340, 340, 120, 40));
        dian_start->setFont(font);
        set_Widget->addTab(model1, QString());
        model2 = new QWidget();
        model2->setObjectName(QStringLiteral("model2"));
        x_parameter = new QWidget(model2);
        x_parameter->setObjectName(QStringLiteral("x_parameter"));
        x_parameter->setGeometry(QRect(40, 30, 420, 350));
        verticalLayout_4 = new QVBoxLayout(x_parameter);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_7 = new QWidget(x_parameter);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_8 = new QHBoxLayout(widget_7);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_5 = new QLabel(widget_7);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font5);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_5);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);

        x_Vel = new QLineEdit(widget_7);
        x_Vel->setObjectName(QStringLiteral("x_Vel"));

        horizontalLayout_8->addWidget(x_Vel);

        horizontalSpacer_14 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_14);

        label_7 = new QLabel(widget_7);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font5);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_7);


        verticalLayout_4->addWidget(widget_7);

        widget_8 = new QWidget(x_parameter);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        horizontalLayout_9 = new QHBoxLayout(widget_8);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_17 = new QLabel(widget_8);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font5);
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_17);

        horizontalSpacer_15 = new QSpacerItem(17, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_15);

        x_Acc = new QLineEdit(widget_8);
        x_Acc->setObjectName(QStringLiteral("x_Acc"));

        horizontalLayout_9->addWidget(x_Acc);

        horizontalSpacer_16 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_16);

        label_18 = new QLabel(widget_8);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font5);
        label_18->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_18);


        verticalLayout_4->addWidget(widget_8);

        widget_9 = new QWidget(x_parameter);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        horizontalLayout_10 = new QHBoxLayout(widget_9);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_19 = new QLabel(widget_9);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font5);
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_19);

        horizontalSpacer_17 = new QSpacerItem(17, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_17);

        x_Dec = new QLineEdit(widget_9);
        x_Dec->setObjectName(QStringLiteral("x_Dec"));

        horizontalLayout_10->addWidget(x_Dec);

        horizontalSpacer_18 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_18);

        label_20 = new QLabel(widget_9);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font5);
        label_20->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_20);


        verticalLayout_4->addWidget(widget_9);

        widget_10 = new QWidget(x_parameter);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        horizontalLayout_11 = new QHBoxLayout(widget_10);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_9 = new QLabel(widget_10);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font5);
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_9);

        horizontalSpacer_19 = new QSpacerItem(17, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_19);

        x_Move = new QLineEdit(widget_10);
        x_Move->setObjectName(QStringLiteral("x_Move"));

        horizontalLayout_11->addWidget(x_Move);


        verticalLayout_4->addWidget(widget_10);

        x_start = new QPushButton(model2);
        x_start->setObjectName(QStringLiteral("x_start"));
        x_start->setGeometry(QRect(340, 390, 120, 40));
        x_start->setFont(font);
        set_Widget->addTab(model2, QString());
        model3 = new QWidget();
        model3->setObjectName(QStringLiteral("model3"));
        j_parameter = new QWidget(model3);
        j_parameter->setObjectName(QStringLiteral("j_parameter"));
        j_parameter->setGeometry(QRect(40, 20, 420, 350));
        verticalLayout_5 = new QVBoxLayout(j_parameter);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        widget_14 = new QWidget(j_parameter);
        widget_14->setObjectName(QStringLiteral("widget_14"));
        horizontalLayout_12 = new QHBoxLayout(widget_14);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_6 = new QLabel(widget_14);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font5);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_6);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_23);

        j_Vel = new QLineEdit(widget_14);
        j_Vel->setObjectName(QStringLiteral("j_Vel"));

        horizontalLayout_12->addWidget(j_Vel);

        horizontalSpacer_24 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_24);

        label_8 = new QLabel(widget_14);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font5);
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_8);


        verticalLayout_5->addWidget(widget_14);

        widget_15 = new QWidget(j_parameter);
        widget_15->setObjectName(QStringLiteral("widget_15"));
        horizontalLayout_13 = new QHBoxLayout(widget_15);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_21 = new QLabel(widget_15);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font5);
        label_21->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(label_21);

        horizontalSpacer_25 = new QSpacerItem(17, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_25);

        j_Acc = new QLineEdit(widget_15);
        j_Acc->setObjectName(QStringLiteral("j_Acc"));

        horizontalLayout_13->addWidget(j_Acc);

        horizontalSpacer_26 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_26);

        label_22 = new QLabel(widget_15);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font5);
        label_22->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_22);


        verticalLayout_5->addWidget(widget_15);

        widget_16 = new QWidget(j_parameter);
        widget_16->setObjectName(QStringLiteral("widget_16"));
        horizontalLayout_14 = new QHBoxLayout(widget_16);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_23 = new QLabel(widget_16);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font5);
        label_23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_14->addWidget(label_23);

        horizontalSpacer_27 = new QSpacerItem(17, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_27);

        j_Dec = new QLineEdit(widget_16);
        j_Dec->setObjectName(QStringLiteral("j_Dec"));

        horizontalLayout_14->addWidget(j_Dec);

        horizontalSpacer_28 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_28);

        label_24 = new QLabel(widget_16);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font5);
        label_24->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(label_24);


        verticalLayout_5->addWidget(widget_16);

        widget_17 = new QWidget(j_parameter);
        widget_17->setObjectName(QStringLiteral("widget_17"));
        horizontalLayout_15 = new QHBoxLayout(widget_17);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_11 = new QLabel(widget_17);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font5);
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(label_11);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_29);

        j_Move = new QLineEdit(widget_17);
        j_Move->setObjectName(QStringLiteral("j_Move"));

        horizontalLayout_15->addWidget(j_Move);


        verticalLayout_5->addWidget(widget_17);

        j_start = new QPushButton(model3);
        j_start->setObjectName(QStringLiteral("j_start"));
        j_start->setGeometry(QRect(340, 390, 120, 40));
        j_start->setFont(font);
        set_Widget->addTab(model3, QString());
        widget_13 = new QWidget(centralwidget);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        widget_13->setGeometry(QRect(800, 550, 415, 125));
        horizontalLayout_4 = new QHBoxLayout(widget_13);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        widget_12 = new QWidget(widget_13);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        verticalLayout_6 = new QVBoxLayout(widget_12);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        powerButton = new QPushButton(widget_12);
        powerButton->setObjectName(QStringLiteral("powerButton"));
        powerButton->setFont(font);

        verticalLayout_6->addWidget(powerButton);

        powerStopButton = new QPushButton(widget_12);
        powerStopButton->setObjectName(QStringLiteral("powerStopButton"));
        powerStopButton->setFont(font);

        verticalLayout_6->addWidget(powerStopButton);


        horizontalLayout_4->addWidget(widget_12);

        widget = new QWidget(widget_13);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        stopButton = new QPushButton(widget);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setFont(font);

        verticalLayout_2->addWidget(stopButton);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout_4->addWidget(widget);

        quitButton = new QPushButton(widget_13);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setFont(font);

        horizontalLayout_4->addWidget(quitButton);

        form->setCentralWidget(centralwidget);
        menubar = new QMenuBar(form);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1590, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        form->setMenuBar(menubar);
        statusbar = new QStatusBar(form);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        form->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(set_XNet);
        menu->addAction(stop_XNet);

        retranslateUi(form);

        set_Widget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(form);
    } // setupUi

    void retranslateUi(QMainWindow *form)
    {
        form->setWindowTitle(QApplication::translate("form", "MainWindow", Q_NULLPTR));
        set_XNet->setText(QApplication::translate("form", "\350\277\236\346\216\245X-Net", Q_NULLPTR));
        stop_XNet->setText(QApplication::translate("form", "\347\273\223\346\235\237X-Net", Q_NULLPTR));
        show_widget->setTitle(QApplication::translate("form", "\347\212\266\346\200\201\346\230\276\347\244\272", Q_NULLPTR));
        statelabel->setText(QApplication::translate("form", "\344\274\272\346\234\215\347\212\266\346\200\201", Q_NULLPTR));
        errorlabel->setText(QApplication::translate("form", "\351\224\231\350\257\257\347\240\201", Q_NULLPTR));
        locationlabel->setText(QApplication::translate("form", "\345\256\236\351\231\205\344\275\215\347\275\256", Q_NULLPTR));
        speedlabel->setText(QApplication::translate("form", "\351\200\237\345\272\246", Q_NULLPTR));
        title->setText(QApplication::translate("form", "\347\224\265\346\234\272\346\216\247\345\210\266\347\263\273\347\273\237", Q_NULLPTR));
        label_2->setText(QApplication::translate("form", "\350\256\276\347\275\256\351\200\237\345\272\246", Q_NULLPTR));
        label_15->setText(QApplication::translate("form", "/s", Q_NULLPTR));
        label_13->setText(QApplication::translate("form", "\350\256\276\347\275\256\345\212\240\351\200\237\345\272\246", Q_NULLPTR));
        label_3->setText(QApplication::translate("form", "/s^2", Q_NULLPTR));
        label_14->setText(QApplication::translate("form", "\350\256\276\347\275\256\345\207\217\351\200\237\345\272\246", Q_NULLPTR));
        label_16->setText(QApplication::translate("form", "/s^2", Q_NULLPTR));
        dian_start->setText(QApplication::translate("form", "\350\277\220\350\241\214", Q_NULLPTR));
        set_Widget->setTabText(set_Widget->indexOf(model1), QApplication::translate("form", "\347\202\271\345\212\250", Q_NULLPTR));
        label_5->setText(QApplication::translate("form", "\350\256\276\347\275\256\351\200\237\345\272\246", Q_NULLPTR));
        label_7->setText(QApplication::translate("form", "/s", Q_NULLPTR));
        label_17->setText(QApplication::translate("form", "\350\256\276\347\275\256\345\212\240\351\200\237\345\272\246", Q_NULLPTR));
        label_18->setText(QApplication::translate("form", "/s^2", Q_NULLPTR));
        label_19->setText(QApplication::translate("form", "\350\256\276\347\275\256\345\207\217\351\200\237\345\272\246", Q_NULLPTR));
        label_20->setText(QApplication::translate("form", "/s^2", Q_NULLPTR));
        label_9->setText(QApplication::translate("form", "\347\233\256\346\240\207\347\247\273\345\212\250\351\207\217", Q_NULLPTR));
        x_start->setText(QApplication::translate("form", "\350\277\220\350\241\214", Q_NULLPTR));
        set_Widget->setTabText(set_Widget->indexOf(model2), QApplication::translate("form", "\347\233\270\345\257\271\350\277\220\345\212\250", Q_NULLPTR));
        label_6->setText(QApplication::translate("form", "\350\256\276\347\275\256\351\200\237\345\272\246", Q_NULLPTR));
        label_8->setText(QApplication::translate("form", "/s", Q_NULLPTR));
        label_21->setText(QApplication::translate("form", "\350\256\276\347\275\256\345\212\240\351\200\237\345\272\246", Q_NULLPTR));
        label_22->setText(QApplication::translate("form", "/s^2", Q_NULLPTR));
        label_23->setText(QApplication::translate("form", "\350\256\276\347\275\256\345\207\217\351\200\237\345\272\246", Q_NULLPTR));
        label_24->setText(QApplication::translate("form", "/s^2", Q_NULLPTR));
        label_11->setText(QApplication::translate("form", "\347\233\256\346\240\207\344\275\215\347\275\256", Q_NULLPTR));
        j_start->setText(QApplication::translate("form", "\350\277\220\350\241\214", Q_NULLPTR));
        set_Widget->setTabText(set_Widget->indexOf(model3), QApplication::translate("form", "\347\273\235\345\257\271\350\277\220\345\212\250", Q_NULLPTR));
        powerButton->setText(QApplication::translate("form", "\344\275\277\350\203\275", Q_NULLPTR));
        powerStopButton->setText(QApplication::translate("form", "\347\273\223\346\235\237\344\275\277\350\203\275", Q_NULLPTR));
        stopButton->setText(QApplication::translate("form", "\345\201\234\346\255\242", Q_NULLPTR));
        pushButton->setText(QApplication::translate("form", "\345\233\236\345\216\237\347\202\271", Q_NULLPTR));
        quitButton->setText(QApplication::translate("form", "\351\200\200\345\207\272\346\216\247\345\210\266", Q_NULLPTR));
        menu->setTitle(QApplication::translate("form", "\351\200\232\344\277\241\350\256\276\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class form: public Ui_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
