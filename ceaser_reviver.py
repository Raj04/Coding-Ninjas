import socket
s=socket.socket()
print ("Socket successfully created")
port=1234
s.bind(('', port))
print ("socket binded to %s" % (port)) 
s.listen(5) 
print ("socket is listening") 
def decrypt(text,s):
	result=""
	for i in range(len(text)):
		char=text[i]
		if(char.isupper()):
			result+=chr((ord(char)-s-65)%26+65)
		else:
			result+=chr((ord(char)-s-97)%26+97)
	return result

while True: 
	try:
	    c, addr = s.accept() 
	    print('Got connection from', addr) 
	    data = c.recv(1024) 
	    print "cipher :" +data
	    print "decipher :" +decrypt(data,3) 
	    if not data: 
		break
            c.sendall("THANK you Received encrypted data") 
	except KeyboardInterrupt:
		print "serving closing"
		c.close()
		break
