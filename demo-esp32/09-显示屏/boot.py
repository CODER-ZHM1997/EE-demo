import time
from machine import SoftI2C, Pin
from esp32_i2c_1602lcd import I2cLcd
import utime

DEFAULT_I2C_ADDR = 0x27
i2c = SoftI2C(sda=Pin(15),scl=Pin(2),freq=100000)
lcd = I2cLcd(i2c, DEFAULT_I2C_ADDR, 2, 16)

arr=['Temp:8°C','RH:40%','WS:1.0mph']
timestamp = utime.time()
# 将时间戳转换为本地时间
local_time = utime.localtime(timestamp)
for i in range(0, len(arr)):
    lcd.clear()	
    lcd.putstr(f'{local_time[3]}:{local_time[4]}\n')
    lcd.putstr(arr[i])
    time.sleep(2)



# 打印本地时间
print("Current local time:", local_time)