#!/bin/bash
cat /etc/passwd | sed '/^#/d' | sed -n '2~2p' | cut -d: -f1 | rev | sed -n "${FT_LINE1},${FT_LINE2}p" | sort -r | paste -sd ", " - | sed 's/$/./'
