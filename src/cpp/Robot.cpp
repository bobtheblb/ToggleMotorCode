#include <togglemotor.h>
#include <WPILib.h>
#include <ctre/Phoenix.h>
#include <iostream>
#include <cmath>

using namespace frc;

    
class Robot: public IterativeRobot {

private:

    TalonSRX *drive_talon_left_enc;
    Joystick *joystick;
    ToggleMotor *drive_toggle_left_enc;
    void RobotInit() {
    drive_talon_left_enc = new TalonSRX(2);
    joystick = new Joystick(0);
    drive_toggle_left_enc = new ToggleMotor(joystick, drive_talon_left_enc);   
    std::cout << "Kevboi yeet togglemotor yees v.1";
                                      
    }

    void DisabledInit() { }
    void AutonomousInit() { }
    void TeleopInit() { }
    void TestInit() { }

    void DisabledPeriodic() { }
    void AutonomousPeriodic() { }
    void TeleopPeriodic() { 
   drive_toggle_left_enc -> run_toggle_m(1, 0.6, 0); 

   
   } 
    void TestPeriodic() { }
};

START_ROBOT_CLASS(Robot)