# pintintegration
Code of the tutorial about the integration of Python with C/C++

## Setup

You don't need to clone this repository. The code of the tutorial is used inside a [Docker](https://8https://hub.docker.com/www.docker.com/what-docker) container. You have to pull the [Docker container](https://www.docker.com/what-container) from the [Docker Hub](https://hub.docker.com/) and that will setup everything that you need, including the code of the tutorial. These are the steps you have to follow:

1. Install Docker in your machine. Docker is usually available as a package in the main Linux distros and it has its own binaries for Mac and Windows. If you have problems with the installation, follow these instructionsIn order to do that follow [these instructions](https://docs.docker.com/engine/installation/)

2. Pull the container of the tutorial from the Docker hub

```bash
sudo docker pull diegoandrade/pintintegration
```

3. Run a bash terminal on that container

```bash
sudo docker run -i -t --entrypoint /bin/bash diegoandrade/pintintegration
```

Now, if you make a ``ls`` you will find all the code of the tutorial in a folder called pintintegration. This folder has 4 subfolders:

* **images**: it contains the picture that it is going to be filtered in the tutorial
* **os**: it is the code corresponding of the first part of the tutorial, where the integration it is going to be made using the os module
* **ctypes**: it is the code of the second part, where the integration is made using ctypes
* **swig**: it is the code of the third part, where the integration is made using swig

The code of each part of the tutorial has a bash script called *run.sh* which performs all the tasks associated to that part of the tutorial. But, it gets more interesting if you look into the codes and perform all the steps by your self. Have fun!

