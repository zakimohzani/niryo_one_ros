
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
    q = reshape(q,[30,1]);
    qd = reshape(qd,[30,1]);
    qdd = reshape(qdd,[30,1]);
    generatetrajResponse.Positions = q
    generatetrajResponse.Velocities = qd
    generatetrajResponse.Acceleration = qdd
end
