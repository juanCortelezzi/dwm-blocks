#!/bin/bash

if [[ "$(pulsemixer --get-mute)" == 0 ]]; then
    pulsemixer --get-volume | cut -d ' ' -f1
else
    echo "-1"
fi

