#!/usr/bin/python3
# Author: Oladapo Okikiola

def remove_char_ar(str, n):
    if n < 0:
        return (str)
    return (str[:n] + str[n+1:])
