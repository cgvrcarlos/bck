#!/bin/bash

ksuperkey

xrandr --newmode "1600x900_60.00"  119.00  1600 1696 1864 2128  900 901 904 932  -HSync +Vsync

xrandr --addmode eDP-1 "1600x900_60.00"

xrandr -s 1600x900_60.00
