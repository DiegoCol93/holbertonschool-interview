#!/usr/bin/python3
"""
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Script for logging and printing custom stats from the STDIN in a specific
format using the 0-generator.py script.

━━━━━━━━━━━━━━━━━
Input - Format:
<IP Address> - [<date>] "GET /projects/260 HTTP/1.1" <status code> <file size>

━━━━━━━━━━━━━━━━━
Input - Sample:
179.1.153.2 - [2021-08-30 20:17:31.742938] "GET /projects/260 HTTP/1.1" 401 932

━━━━━━━━━━━━━━━━━━
Output - Sample:
File size: 5213
200: 2
401: 1
403: 2
404: 1
405: 1
500: 3

━━━━━━━━━━━━━
How to use:
./0-generator.py | ./0-stats.py

"""
from signal import signal, SIGINT, SIG_IGN, SIGUSR1, pause
from re import search, compile
from sys import stdin

def ignore(sig, frame) -> None:
    """ Captures the SIGINT signal created by Ctrl-C """
    print("")
    return

if __name__ == "__main__":
    stats = {"size": 0,
             "200": 0, "401": 0, "403": 0, "404": 0, "405": 0, "500": 0}
    line_count = 0
    # pause()
    for line in stdin:

        RE_pattern = (r"(\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}) - "
                      r"(\[\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2}\.\d{6}\]) "
                      r'("GET \/projects\/260 HTTP\/1.1") '
                      r"(\d{3}) (\d+)")
        result = search(RE_pattern, line)
        if result.groups():
            ip = result.group(1)
            date_time = result.group(2)
            get = result.group(3)
            status = result.group(4)
            file_size = result.group(5)
        else:
            continue

        for key, value in stats.items():
            if key == "size":
                stats["size"] += int(file_size)
            else:
                if status == key:
                    stats[key] += 1
        # Print text. ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
        if (line_count % 10) == 0 and line_count > 1:
            print(f"File size: {stats['size']}")
            for key, value in stats.items():
                if key != "size":
                    print(f"{key}: {value}")

        line_count +=1
