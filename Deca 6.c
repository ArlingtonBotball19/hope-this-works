// Created on Sat March 21 2015
// Error 37 - Deca 6.1
// Version 6.9

int main()
{
	//go forward
	move_relative_position(0,1450,1400);
	move_relative_position(3,1250,1400);
	block_motor_done(0);
	block_motor_done(3);
	
	enable_servos();
	//open arm servo 1 hit poms
	set_servo_position(1,50);
	set_servo_position(0,1350);
	// give time for arm to open
	msleep(1000);
	
	//go forward
	move_relative_position(0,1500,1200);
	move_relative_position(3,1250,1200);
	block_motor_done(0);
	block_motor_done(3);
	
	//close arm servo 1
	set_servo_position(1,900);
	// give time for arm to close
	msleep(1000);
	
	//go forward
	move_relative_position(0,1500,2150);
	move_relative_position(3,1250,2150);
	block_motor_done(0);
	block_motor_done(3);
	
	//turn right
	move_relative_position(3, 800, -700);
	move_relative_position(0, 800, 700);
	block_motor_done(2);
	block_motor_done(0);
			
	//go forward towards cave
	move_relative_position(0,1050,1850);
	move_relative_position(3,1000,1850);
	block_motor_done(0);
	block_motor_done(3);
	
	//turn right
	move_relative_position(3, 800, -400);
	move_relative_position(0, 800,400);
	block_motor_done(2);
	block_motor_done(0);
	
	enable_servos();
	//open arm servo 0 collect poms
	set_servo_position(0,2147);
	// give time for arm to open
	msleep(1000);
	
	//go back to end of cave end of cave
	set_servo_position(1,50);
	move_relative_position(0,1200,4400);
	move_relative_position(3,1150,4400);
	block_motor_done(0);
	block_motor_done(3);
	enable_servos();
	
	//open arm servo 1 collect poms
	set_servo_position(1,900);
	// give time for arm to open
	msleep(1000);
	//go forward to right end of cave
	move_relative_position(0,1200,-4700);
	move_relative_position(3,1150,-4700);
	block_motor_done(0);
	block_motor_done(3);
	
	//close arm servo 1 with 4 poms
	set_servo_position(1,900);
	// give time for arm to close
	msleep(1000);
	printf("Baby it's cold outside!\n");
	set_servo_position(0,1400);
	// Backing up #1
	move_relative_position(0,-1200,2000);
	move_relative_position(3,-1150,2000);
	// Backing up #2
	move_relative_position(0,-1200,2000);
	move_relative_position(3,-1150,2000);
	block_motor_done(0);
	block_motor_done(3);
	return 0;
}
