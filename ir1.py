import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BOARD)

ir = 12
led1 = 16
led2 = 18

GPIO.setup(ir, GPIO.IN)
GPIO.setup(led1, GPIO.OUT)
GPIO.setup(led2, GPIO.OUT)

def perform():
	while GPIO.input(ir) == 0:
		print("An interruption noted.")
		GPIO.output(led1, GPIO.HIGH)
		GPIO.output(led2, GPIO.LOW)
		time.sleep(0.5)
	while GPIO.input(ir) == 1:
		print("Good to go. No obstacle.")
		GPIO.output(led2, GPIO.HIGH)
		GPIO.output(led1, GPIO.LOW)
		time.sleep(0.5)

if __name__ == '__main__':
	try:
		while True:
			perform()
	except KeyboardInterrupt:
		print("Stopped by clicker.")
		GPIO.cleanup()

