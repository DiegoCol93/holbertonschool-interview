#!/usr/bin/python3
""" Module for storing the canUnlockAll(boxes) method."""

def canUnlockAll(boxes):
    """
    Determines if all the boxes can be opened.
    boxes type : list of list of positive int numbers.
    """
    if len(boxes) == 1:
        return(True)

    # Check if first box is empty.
    if bool(boxes[0]) is False:
        return (False)

    
