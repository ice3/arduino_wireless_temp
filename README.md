arduino_wireless_temp
=====================

# Project description 

A project to measure the temperature of a room using an arduino and send it wirelessly to a master. Thus, we want 

The aim of the project is to develop slave nodes, small enough to be placed anywhere. The nodes will be powered with coin cells so the power performance is the critical part of the project. 


# Bill of material

 * Atmega328p with arduino firmware
 * Temperature sensor : DS18B20
 * Wireless module : RF24 

# Software

You will need arduino makefile to compile the project.

2 directories : 
 
 * tests : each part of the project has been tested 
   * power consuption
   * temperature measure
   * wireless communication
 * wireless_sensor : 
   * receive_data : the code on the master node
   * send_data : the code on the slave node
