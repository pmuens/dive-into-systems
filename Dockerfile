FROM ubuntu:noble

RUN apt-get update -y \
  && apt-get upgrade -y \
  && apt-get install -y build-essential gdb valgrind
