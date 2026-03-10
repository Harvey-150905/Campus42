#!/bin/bash
echo $FT_NBR1 | tr "\\'\"?!" "10234" | tr -d '\n'
echo -n " + "
echo $FT_NBR2 | tr "mrdoc" "01234" | tr -d '\n'
echo " | ibase=5; obase=13" | bc | tr "0123456789ABC" "gtaio luSnemf"
