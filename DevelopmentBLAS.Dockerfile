FROM msse/base 

RUN apt-get clean && \
	apt-get update && \
	apt-get install -y \
	libblas-dev
