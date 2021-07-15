#!/bin/bash

echo "$(pulsemixer --get-volume | sed 's| |/|g')"

