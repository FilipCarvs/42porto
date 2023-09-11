#!/bin/sh
ifconfig | grep ethe | awk '{print $2}'
