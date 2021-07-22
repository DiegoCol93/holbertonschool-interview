#!/usr/bin/python3
""" Module for storing the canUnlockAll() and checkkeysInBox() methods."""


def canUnlockAll(boxes):
    """
    Determines if all the boxes can be opened.
    boxes type : list of list of positive int numbers.
    """
    # If there only one box, return True as it's open.
    if len(boxes) == 1:
        return(True)

    # Check if first box is empty.
    if bool(boxes) is False or bool(boxes[0]) is False:
        return (True)

    # Create auxiliary array.
    opened = []
    # Append False to opened list for each box in boxes.
    [opened.append(False) for box in boxes]
    # Set box[0] to true as it is already opened.
    opened[0] = True

    # Check all keys in the firt box.
    for key in boxes[0]:
        if opened[key] is False:
            # Call auxiliary recursive method.
            opened = checkKeysInBox(key, opened, boxes)

    if all(opened) and opened[1] is not False:
        return(True)
    else:
        return(False)


def checkKeysInBox(key, opened, boxes):
    """ Checks all boxes reachable with the current key. """

    # If key out of range.
    if key > len(boxes):
        return(opened)

    # If already opened return the opened list.
    if opened[key] is True:
        return(opened)

    # Open the box.
    opened[key] = True

    # Look in the box...
    # If the next box has something inside.
    if bool(boxes[key]):

        # "For" keys in the box...
        index = 0
        while index < len(boxes[key]):
            # Recursively search.
            checkKeysInBox(boxes[key][index], opened, boxes)
            index += 1

    return(opened)
