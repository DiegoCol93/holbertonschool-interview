#!/usr/bin/python3
""" Module for storing the canUnlockAll() and checkkeysInBox() methods."""


def canUnlockAll(boxes):
    """
    Determines if all the boxes can be opened.
    boxes type : list of list of positive int numbers.
    """
    if len(boxes) < 1:
        return False

    opened = []
    [opened.append(False) for box in boxes]
    opened[0] = True

    if bool(boxes[0]) is False:
        return False

    for key in boxes[0]:
        if key > len(boxes):
            continue
        opened = checkKeysInBox(key, opened, boxes)

    if False in opened:
        return False
    else:
        return True


def checkKeysInBox(key, opened, boxes):
    """ Checks all boxes reachable with the current key. """
    if key >= len(boxes):
        return(opened)

    if opened[key] is True:
        return(opened)

    opened[key] = True

    if bool(boxes[key]):
        index = 0
        while index < len(boxes[key]):
            checkKeysInBox(boxes[key][index], opened, boxes)
            index += 1

    return(opened)
