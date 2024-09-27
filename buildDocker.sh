#!/bin/sh

mkdir -p repo

docker build -t msse/base . -f DevelopmentBase.Dockerfile
docker build -t msse/blas . -f DevelopmentBLAS.Dockerfile
