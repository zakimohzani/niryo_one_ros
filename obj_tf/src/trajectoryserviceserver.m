
rosinit
trajectorygenerator = rossvcserver("/generatetraj","niryo_one_msgs/generatetraj",@callbackfunction)
generatetrajRequest = rosmessage("niryo_one_msgs/generatetrajRequest")
generatetrajResponse = rosmessage("niryo_one_msgs/generatetrajResponse")
function generatetrajResponse = callbackfunction(~,generatetrajRequest,generatetrajResponse)
    
    t = 0:0.25:1
    [q,qd,qdd] = jtraj(generatetrajRequest.J0,generatetrajRequest.J1,t)
    q = transpose(q);
    qd = transpose(qd);
    qdd = transpose(qdd);
    generatetrajResponse.Positions = q
    generatetrajResponse.Velocities = qd
    generatetrajResponse.Acceleration = qdd
end
