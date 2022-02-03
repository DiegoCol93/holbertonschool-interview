#!/usr/bin/env python3
""" Module for storing the makeChange() method. """
import ipdb


def makeChange(coins, total):
    """
    Method for calling the recursivelyMakeChange() method.

    Args:
        coins: List[], of the available denominations.
        total: Int, Amount of change to provide.
    """
    return(recursivelyMakeChange(coins, total, 0))


def recursivelyMakeChange(coins, total, change):
    """
    Method for calculating the number of coins needed to provide the
    indicated amount of change.

    Args:
        coins:  List[] of the available denominations.
        total:  Int representing the amount of change to provide.
        change: Int the number of coins to return.
    """
    if coins:
        coins.sort(reverse=True)
        times_denominator_fits = total / coins[0]
        # print(coins)
        # print(int(times_denominator_fits))

        if (times_denominator_fits).is_integer:
            change += int(times_denominator_fits)
            remaining = total - (int(times_denominator_fits) * coins[0])
            print(change)
            coins.pop(0)
            print("\033[92mBEFORE RECURSION\033[m")
            # print(remaining, int(times_denominator_fits))
            # change += int(times_denominator_fits)
            recursivelyMakeChange(coins, remaining, change)
            # print("\033[92mAFTER RECURSION\033[m")
            return(change)
        else:
            return 0
    else:
        return 0
