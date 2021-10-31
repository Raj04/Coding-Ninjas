import socket
s=socket.socket()
port=1234
s.connect(('127.0.0.1', port))
def encrypt(text,k):
	result=""
	for i in range(len(text)):
		char=text[i]
		if(char.isupper()):
			result+=chr((ord(char)+k-65)%26+65)
		else:
			result+=chr((ord(char)+k-97)%26+97)
	return result

text=raw_input("Enter text :")
k=3;
s.sendall(str(encrypt(text,k))) 
print s.recv(1024) 
s.close() 
