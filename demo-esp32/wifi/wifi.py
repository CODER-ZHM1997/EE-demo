# This file is executed on every boot (including wake-boot from deepsleep)
#import esp
#esp.osdebug(None)
#import webrepl
#webrepl.start()
import network
import socket
ap = network.WLAN(network.AP_IF) # create access-point interface
ap.config(ssid='ESP-AP') # set the SSID of the access point
ap.config(max_clients=10) # set how many clients can connect to the network
ap_ip=ap.ifconfig()[0]
print(f"本机ip：{ap_ip}")
ap.active(True)         # activate the interface
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_socket.bind((ap_ip, 80))
server_socket.listen(10)

while True:
    print('Waiting for connection...')
    client, addr = server_socket.accept()
    print('Connection from', addr)
    print(f"client: {client.recv(1024)}")
    # 发送数据到客户端
    client.sendall("Hello from ESP32 SoftAP!")
    
