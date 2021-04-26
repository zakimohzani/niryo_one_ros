
rosinit
trajectorygenerator = rossvcserver("/generatetraj","niryo_one_msgs/generatetraj",@callbackfunction)
generatetrajRequest = rosmessage("niryo_one_msgs/generatetrajRequest")
generatetrajResponse = rosmessage("niryo_one_msgs/generatetrajResponse")
function generatetrajResponse = callbackfunction(~,generatetrajRequest,generatetrajResponse)
    [q,qd,qdd] = jtraj(generatetrajRequest.J0,generatetrajRequest.J1,6);
    generatetrajResponse.Positions = q
    generatetrajResponse.Velocities = qd
    generatetrajResponse.Acceleration = qdd
end
