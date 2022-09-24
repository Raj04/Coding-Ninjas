#Multi chat client program
#focus is on client to client communication
#MkChaudhary
import socket
import sys
import select
client=socket.socket()
Port=4444   # set port according to available port no in ur system 
client.connect(('127.0.0.1',port))
while True:
	sockets_list=[sys.stdin,client]    # creating a list of possible input stream
	read_socket,write_socket,error_socket=select.select(sockets_list,[],[])
	for sock in read_socket:
		if sock == client:
			message=sock.recv(1024)
			print message
		else:
			message=sys.stdin.readline()
			client.send(message)
			sys.stdout.write("you: ")
			sys.stdout.write(message)
			sys.stdout.flush()
client.close()
