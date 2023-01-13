# GCC support can be specified at major, minor, or micro version
# (e.g. 8, 8.2 or 8.2.0).
# See https://hub.docker.com/r/library/gcc/ for all supported GCC
# tags from Docker Hub.
# See https://docs.docker.com/samples/library/gcc/ for more on how to use this image
#FROM gcc:7.3.0
FROM crowapp

WORKDIR /usr/src/crowapp
CMD ["/.crowapp"]

#RUN apt-get -qq update
#RUN apt-get -qq install cmake

#RUN apt-get -qq install libboost-all-dev=1.62.0.1
#RUN apt-get -qq install build-essential libtcmalloc-minimal4 && ln -s /usr/lib/libtcmalloc_minimal.so.4 /usr/lib/libtcmalloc_minimal.so


#RUN git clone https://github.com/CrowCpp/Crow.git
#RUN cmake -DCROW_BUILD_EXAMPLES=OFF -DCROW_BUILD_TESTS=OFF
#RUN make install

# These commands copy your files into the specified directory in the image
# and set that as the working location
#COPY . /usr/src/myapp
#WORKDIR /usr/src/myapp

# This command compiles your app using GCC, adjust for your source code
#RUN g++ -I/usr/src/asio/ -lpthread main.cpp -o myapp 

# This command runs your application, comment out this line to compile only
#CMD ["./myapp"]

#LABEL Name=crowapp Version=0.0.1
