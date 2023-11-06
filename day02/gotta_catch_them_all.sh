#!/bin/bash

cut -d':' -f5 | cut -d' ' -f2 | grep -i -E ^$1 | wc -l
exit 0
