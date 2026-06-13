# S-Worm
_Swarm based Watch operations for rescue missions_
Essentially its a system of 2 different types of drones
1) The recon
2) The rescuer
And also
-> Ground station
   
Both share the same basic flight controller module which i have named [Insert name]

-> The recon is equiped with another board with a Camera and LIDAR which hovers over terrain to map it out and then stores it. After a full map out it sends the data to the ground station where the data is processed and the area is divided into zones and high risk areas.

-> The rescue is equipped with a Mic, GPR, Thermal and regular camera all processed by a PI hat 2 to look for human signals.

This is extremely ambitious especially the resuer drone. I will try to only workout the recon as of now. 


