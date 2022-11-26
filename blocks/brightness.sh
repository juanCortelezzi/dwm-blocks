#!/bin/bash

command=$(xbacklight -get | sed "s/\(.*\)\..*/\1/g")

echo -e "[  $command ]"
