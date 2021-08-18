#!/usr/bin/python3
canUnlockAll = __import__('0-lockboxes').canUnlockAll
# boxes = [[6], [2], [3], [4], [5], [], [1]]
boxes = [[6], [], [], [], [], [], [1, 2, 3, 4, 5]]
print(canUnlockAll(boxes))
