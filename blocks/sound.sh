#!/bin/bash

if systemctl --user is-active --quiet pipewire; then
    if pulsemixer --get-mute | grep -q "0"; then
        echo -e "[ 蓼 $(pulsemixer --get-volume | cut -d ' ' -f1) ]"
    else
        echo -e "[ 蓼 -1 ]"
    fi
else
    echo -e "[ 蓼 NS ]"
fi
