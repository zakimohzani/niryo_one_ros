# -*- coding: utf-8 -*-
"""
Created on Tue Apr  6 11:49:04 2021

@author: zaki
"""

import time

event = ''
currentState = 'STATE_INIT'

#we need a dictionary for currentState --> event --> nextState

while 1:
    # I don't want a new context in this state machine and hence I did not use
    # functions
    if currentState == 'STATE_INIT':
        print('state = STATE_INIT')
        # run STATE_INIT code here
        
        
        # do something and define an event if possible
        successful = True
        if successful:
            event = 'turn_on'
        else:
            event = 'turn_off'
        
        # state machine code
        if event == 'turn_on':
            print('turning on')
            # change state
            currentState = 'STATE_LOOK_FOR_NEW_OBJ'
            event = ''
        elif event == 'turn_off':
            print('turning off. Staying in STATE_INIT')
            event = ''
        elif event == '':
            print('No events')
        else:
            print('ERROR: unknown event. Please debug')
        
    elif currentState == 'STATE_LOOK_FOR_NEW_OBJ':
        print('state = STATE_LOOK_FOR_NEW_OBJ')
        # run STATE_LOOK_FOR_NEW_OBJ code here

        # do something and define an event if possible

 
        # state machine code
        if event == 'turn_on':
            print('non-event')
            event = ''
        elif event == '':
            print('No events')
        else:
            print('ERROR: Unknown event. Please debug')

    else:
        print('state = unknown / invalid state. Please debug')


    time.sleep(3)