#ifndef SLUGSPIDCONTROL_H
#define SLUGSPIDCONTROL_H

#include <QWidget>
#include<QGroupBox>
#include "UASInterface.h"
#include "QGCMAVLink.h"
#include "SlugsMAV.h"


namespace Ui {
    class SlugsPIDControl;
}

class SlugsPIDControl : public QWidget
{
    Q_OBJECT

public:
    explicit SlugsPIDControl(QWidget *parent = 0);
    ~SlugsPIDControl();

public slots:

    /**
     * @brief Called when the a new UAS is set to active.
     *
     * Called when the a new UAS is set to active.
     *
     * @param uas The new active UAS
     */
    void activeUasSet(UASInterface* uas);

    /**
     */
    void setRedColorStyle();
    /**
     * @brief Set color StyleSheet GREEN
     *
     * @param
     */
    void setGreenColorStyle();

    /**
     * @brief Connect Set pushButtons to change the color GroupBox
     *
     * @param
     */
    void connect_set_pushButtons();

    /**
     * @brief Connect Edition Lines for PID Values
     *
     * @param
     */
    void connect_editLinesPDIvalues();

// Fuctions for Air Speed GroupBox
    /**
     * @brief Change color style to red when PID values of Air Speed are edited
     *
     *
     * @param
     */
    void changeColor_RED_AirSpeed_groupBox(QString text);
    /**
     * @brief Change color style to green when PID values of Air Speed are send to UAS
     *
     * @param
     */
    void changeColor_GREEN_AirSpeed_groupBox();
    /**
     * @brief Connects the SIGNALS from the editline to SLOT changeColor_RED_AirSpeed_groupBox()
     *
     * @param
     */
    void connect_AirSpeed_LineEdit();

// Functions for Pitch Followei GroupBox
    /**
     * @brief Change color style to red when PID values of Pitch Followei are edited
     *
     *
     * @param
     */
     void changeColor_RED_PitchFollowei_groupBox(QString text);
     /**
         * @brief Change color style to green when PID values of Pitch Followei are send to UAS
         *
         * @param
         */
     void changeColor_GREEN_PitchFollowei_groupBox();
     /**
         * @brief Connects the SIGNALS from the editline to SLOT PitchFlowei_groupBox
         *
         * @param
         */
     void connect_PitchFollowei_LineEdit();

     // Functions for Roll Control GroupBox
     /**
          * @brief Change color style to red when PID values of Roll Control are edited
          *
          *
          * @param
          */
     void changeColor_RED_RollControl_groupBox(QString text);
     /**
              * @brief Change color style to green when PID values of Roll Control are send to UAS
              *
              * @param
              */
     void changeColor_GREEN_RollControl_groupBox();
     /**
              * @brief Connects the SIGNALS from the editline to SLOT RollControl_groupBox
              *
              * @param
              */
     void connect_RollControl_LineEdit();

     // Functions for Heigth Error GroupBox
     /**
          * @brief Change color style to red when PID values of Heigth Error are edited
          *
          *
          * @param
          */
     void changeColor_RED_HeigthError_groupBox(QString text);
     /**
              * @brief Change color style to green when PID values of Heigth Error are send to UAS
              *
              * @param
              */
     void changeColor_GREEN_HeigthError_groupBox();
     /**
              * @brief Connects the SIGNALS from the editline to SLOT HeigthError_groupBox
              *
              * @param
              */
     void connect_HeigthError_LineEdit();

     // Functions for Yaw Damper GroupBox
     /**
          * @brief Change color style to red when PID values of Yaw Damper are edited
          *
          *
          * @param
          */
     void changeColor_RED_YawDamper_groupBox(QString text);
     /**
              * @brief Change color style to green when PID values of Yaw Damper are send to UAS
              *
              * @param
              */
     void changeColor_GREEN_YawDamper_groupBox();
     /**
              * @brief Connects the SIGNALS from the editline to SLOT YawDamper_groupBox
              *
              * @param
              */
     void connect_YawDamper_LineEdit();

     // Functions for Pitch to dT GroupBox
     /**
          * @brief Change color style to red when PID values of Pitch to dT are edited
          *
          *
          * @param
          */
     void changeColor_RED_Pitch2dT_groupBox(QString text);
     /**
              * @brief Change color style to green when PID values of Pitch to dT are send to UAS
              *
              * @param
              */
     void changeColor_GREEN_Pitch2dT_groupBox();
     /**
              * @brief Connects the SIGNALS from the editline to SLOT Pitch2dT_groupBox
              *
              * @param
              */
     void connect_Pitch2dT_LineEdit();


     //Create, send and get Messages PID
    // void createMessagePID();

     void recibeMensaje(int systemId, uint8_t action, uint8_t result);


private:
    Ui::SlugsPIDControl *ui;

     UASInterface* activeUAS;
     int systemId;

    bool change_dT;


    //Color Styles
    QString REDcolorStyle;
    QString GREENcolorStyle;
    QString ORIGINcolorStyle;

    //SlugsMav Message
    mavlink_pid_t pidMessage;
};

#endif // SLUGSPIDCONTROL_H
