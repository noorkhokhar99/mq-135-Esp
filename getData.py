import urllib.request
import time


# Enable  Communication

url = "http://192.168.10.23/"  # ESP's url, ex: https://192.168.102/ (Esp serial prints it when connected to wifi)

def get_data():
     global data
     n = urllib.request.urlopen(url).read() # get the raw html data in bytes (sends request and warn our esp8266)
     n = n.decode("utf-8") # convert raw html bytes format to string :3
	
     data = n
     data = n.split("|")
     time.sleep(3)
     print(n)
     #data = n.split()
#	AIR_Co2 = n[0]


	#<optional> split datas we got. (if you programmed it to send more than one value) It splits them into seperate list elements.
#	data = list(map(int, data)) #<optional> turn datas to integers, now all list elements are integers.

# Example usage
while True:
      get_data()
      #print(data)
      #time.sleep(5)   # Delays for 5 seconds. You can also use a float value.
      #print(n)
