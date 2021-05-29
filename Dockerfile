FROM ubuntu:20.04


RUN sudo apt-get update && DEBIAN_FRONTEND=noninteractive sudo apt-get install -y \
  make \
  cppcheck \
  valgrind \
  g++ \
  doxygen \
  graphviz \
  
&& rm -rf /var/lib/apt/lists/*
