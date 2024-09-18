#!/bin/sh

# See: https://stackoverflow.com/a/74148162
export DOCKER_HOST="unix:///Users/$USER/Library/Containers/com.docker.docker/Data/docker.raw.sock"

docker build . -t dive-into-systems:latest
docker run --rm -it -v "${PWD}:/app" -w /app dive-into-systems:latest bash
