generatetrajclient = rossvcclient('/generatetraj')
testjoints = rosmessage('niryo_one_msgs/generatetrajRequest')
j0 = [1,0,0,1,0,0]
j1 = [0,0,1,0,0,1]
testjoints.J0 = j0
testjoints.J1 = j1
jointtrajresp = call(generatetrajclient,testjoints)
jointtrajresp.Positions