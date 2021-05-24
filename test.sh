#!/bin/bash

rm -f output.txt

./a.out >> output.txt

diff --strip-trailing-cr output.txt exp_output.txt

if [ $? -eq 0 ]
then
echo "No differences. The test was OK!"
else
echo "Test failed."
fi
