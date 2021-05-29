FROM ubuntu:20.04


RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y \
  make \
  cppcheck \
  valgrind \
  g++ \
  doxygen \
  graphviz \
  
&& rm -rf /var/lib/apt/lists/*
