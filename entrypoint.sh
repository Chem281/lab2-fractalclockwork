#!/bin/sh

set -e

umask 000
cd /workspace
bash "$@"
