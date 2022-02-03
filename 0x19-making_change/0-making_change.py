#!/usr/bin/env python3
""" Module for storing the makeChange() method. """


def makeChange(coins, total):
    """
    Method for calling the recursivelyMakeChange() method.

    Args:
        coins: List[], of the available denominations.
        total: Int, Amount of change to provide.
    """
    if coins and total > 0:
        change = 0
        coins.sort(reverse=True)

        for denominator in coins:
            times_denominator_fits = total / denominator
            # print(times_denominator_fits)

            if int(times_denominator_fits:)

            if (times_denominator_fits).is_integer and total > 0:
                change += int(times_denominator_fits)
                print(change)
                # print(total)

                if total <= 0:
                    print("BREAK")
                    break

                total = total - (
                    int(times_denominator_fits) * coins[0]
                )

                change += int(times_denominator_fits)

    return(change)
