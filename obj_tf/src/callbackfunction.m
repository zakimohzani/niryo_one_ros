
function generatetrajResponse = callbackfunction(j0,j1)
    [q,qd,qdd] = jtraj(j0,j1,6);
    generatetrajResponse.positions = q
    generatetrajResponse.velocities = qd
    generatetrajResponse.acceleration = qdd
end
