#!/bin/sh

#erl -pa ebin -smp disable -noshell -run binarytrees main 20
erl -pa ebin -noshell -run binarytrees main 20
