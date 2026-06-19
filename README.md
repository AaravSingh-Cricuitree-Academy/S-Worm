# S-Worm
_Swarm based Watch operations for rescue missions_

<img width="3780" height="1890" alt="Untitled design (16)" src="https://github.com/user-attachments/assets/651765d3-b446-4a66-a622-5cc0583ab618" />

## Basic architechtural overview-
Essentially its a system of 2 different types of drones
1) The recon
2) The rescuer
   
And also

-> Ground station

<img width="1220" height="408" alt="Recon drone" src="https://github.com/user-attachments/assets/2a28405e-1a36-4ee3-bd66-5e3310178b85" />
-> The ground station uses TDMA architechture to direct ALL the drones.

-> This is intended to be used in situations of disaster like earthquakes, tsunamis, bombings ,and/or mapping out complex terrain. 

Both share the same flight controller and ESC board. The difference in them is speciality boards which are unique to the respective drone, defined below-

-> The recon's speciality board is equiped with a Camera and LIDAR which hovers over terrain to map it out and then stores it. After a full map out it sends the data to the ground station where the data is processed and the area is divided into zones and high risk areas.

-> The rescue is equipped with a Mic, GPR to, Thermal and regular camera all processed by a PI hat 2 to look for human signals even under debris.

<img width="1289" height="639" alt="Add a heading (1)" src="https://github.com/user-attachments/assets/cffbd247-889e-4921-805a-1967302db333" />

_Check [Hardware ReadMe](Hardware/Hardware_ReadMe.md) to have an in-depth
 overview of exactly what has been built ;)_ 
