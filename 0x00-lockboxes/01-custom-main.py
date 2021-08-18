#!/usr/bin/python3

canUnlockAll = __import__('0-lockboxes').canUnlockAll

boxes = [[], [2]]
print(canUnlockAll(boxes))

""" Should be False. """
