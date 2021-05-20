
import time
import zmq
import numpy as np
import roboticstoolbox as rtb
import cProfile

print("Function called")
context = zmq.Context()
socket = context.socket(zmq.REP)
socket.bind("tcp://*:5555")
print("Server created....")
t = np.arange(0,1,0.2)
while True:
	try:
		message1 = socket.recv()
		joints = np.frombuffer(message1,dtype = 'float64').reshape(2,6)
		print("first joint value: ",joints[0])
		print("second joint value: ",joints[1])

		traj = rtb.jtraj(joints[0],joints[1],len(t))
		print("trajectory positions")
		print(traj.q)
		print("trajectory velocities")
		print(traj.qd)
		#trajmessage = np.array([traj.y,traj.yd,traj.ydd])
		trajmessage = np.vstack((traj.q,traj.qd,traj.qdd))

		socket.send(trajmessage)
	except Exception:
		continue


