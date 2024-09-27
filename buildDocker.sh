#!/bin/sh

docker build -t msse/base . -f DevelopmentBase.Dockerfile
docker build -t msse/blas . -f DevelopmentBLAS.Dockerfile
