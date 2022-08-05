#!/usr/bin/python3
""" Module for storing the pascal_triangle function. """


def pascal_triangle(n):
    """
    Returns a list of lists of integers representing the Pascal’s triangle.
    """
    matrix = []
    for i in range(n):
        actualNumber = [None for _ in range(i + 1)]
        actualNumber[0], actualNumber[-1] = 1, 1
        for j in range(1, len(actualNumber) - 1):
            actualNumber[j] = matrix[i - 1][j - 1] + matrix[i - 1][j]
        matrix.append(actualNumber)
    return matrix
