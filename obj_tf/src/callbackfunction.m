function [q,qd,qdd] = callbackfunction(j0,j1)
    [q,qd,qdd] = jtraj(j0,j1,6)
end 
