import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BOARD) #sets the gpio mode to board, that is, board pin number will be followed.

ir = 12 #sets pin 12 on the board for receiving infrared sersor's output.
led1 = 16 #sets pin 16 on the pi board for giving output to one led.
led2 = 18 #sets pin 18 as output for another led.

GPIO.setup(ir, GPIO.IN) #ir is setup as input pin.
GPIO.setup(led1, GPIO.OUT) #led1 as output pin to light it up as per the code.
GPIO.setup(led2, GPIO.OUT) #led2 as output pin to light it up as per the code.

def perform():
	while GPIO.input(ir) == 0:
		print("An interruption noted.") # As soon as ir stops receiving back the infrared rays, light up led at pin 16.
		GPIO.output(led1, GPIO.HIGH)
		GPIO.output(led2, GPIO.LOW) # Keep led at pin 18 off.
		time.sleep(0.5) #Wait for 0.5 seconds.
	while GPIO.input(ir) == 1:
		print("Good to go. No obstacle.")
		GPIO.output(led2, GPIO.HIGH) # As soon as ir receives back the infrared rays, light up led at pin 18.
		GPIO.output(led1, GPIO.LOW) #Keep led at pin 16 off.
		time.sleep(0.5)

if __name__ == '__main__':
	try:
		while True:
			perform()
	except KeyboardInterrupt:
		print("Stopped by clicker.")
		GPIO.cleanup() #cleanup at finish.

