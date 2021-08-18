#!/usr/bin/python3

canUnlockAll = __import__('0-lockboxes').canUnlockAll

boxes = [[]]
print(canUnlockAll(boxes))

""" Should be True. """
