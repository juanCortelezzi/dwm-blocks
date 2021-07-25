#!/bin/bash

volume=
if [[ "$(pulsemixer --get-mute)" == 0 ]]; then
    volume=$(pulsemixer --get-volume | cut -d ' ' -f1)
else
    volume="-1"
fi

echo -e "[ 蓼 $volume ]"
