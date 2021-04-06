# -*- coding: utf-8 -*-
"""
Created on Tue Apr  6 11:49:04 2021

@author: zaki
"""

import time

#we need a dictionary for currentState --> event --> nextState

def state_init():
    global currentState # required for the state machine    
    print('state = state_init')
    
    # do something
    
    # if event has been created then change state
    currentState = 'state_look_for_new_obj'

def state_look_for_new_obj():
    global currentState # required for the state machine
    print('state = state_look_for_new_obj')

    # do something
    
    # if event has been created then change state
    currentState = 'state_picking_up_obj';

def state_picking_up_obj():
    global currentState # required for the state machine
    print('state = state_picking_up_obj')

    # do something
    
    # if event has been created then change state
    currentState = 'state_picked_up_obj_and_dumping_it';

def state_picked_up_obj_and_dumping_it():
    global currentState # required for the state machine
    print('state = state_picked_up_obj_and_dumping_it')

    # do something
    
    # if event has been created then change state
    currentState = 'state_look_for_new_obj';

    
currentState = 'state_init'
while 1:
    # Implicit state machine. Based on code from: 
    # https://stackoverflow.com/questions/7936572/python-call-a-function-from-string-name
    possibles = globals().copy()
    possibles.update(locals())
    state = possibles.get(currentState)
    if not state:
         raise NotImplementedError("State %s not implemented" % state_name)
    state()
    # End of state machine code    
    
    time.sleep(3)