# Program to authenticate a program

import random
import requests

OTP = random.randrange(10000, 99999)
x = requests.get(f"https://www.fast2sms.com/dev/bulkV2?authorization=9Py6U8i5SmHM1FCeqDEnVOB7w4zculxTtNjaR2gYpoJdKsZfbXgdEKZ4w7OIHGlQLk80FT3YDzrsmCyx&language=english&route=q&numbers=8008171053&message={OTP}")
# print(x)
userOTP = int(input("Please Enter OTP: "))
if (OTP != userOTP):
	print("Invalid OTP. Please Try Again!")
	exit()