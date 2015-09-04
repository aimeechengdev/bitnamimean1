                   Bitnami MEAN Stack 3.0.4-2
                  =============================

1. OVERVIEW

The Bitnami Project was created to help spread the adoption of freely
available, high quality, open source web applications. Bitnami aims to make
it easier than ever to discover, download and install open source software
such as document and content management systems, wikis and blogging
software.

You can learn more about Bitnami at https://bitnami.com

Bitnami MEAN Stack provides a complete development environment for mongoDB
and Node.js that can be deployed in one click. It includes the latest stable
release of mongoDB, Express, Angular, Node.js, Git, PHP and RockMongo.

You can learn more about mongoDB at http://www.mongodb.org/

The Bitnami MEAN Stack is an installer that greatly simplifies the installation
of a mongoDB server and its runtime dependencies. Please see the appendix for the
specific licenses of all open source components included.

You can learn more about Bitnami Stacks at https://bitnami.com/stacks/

2. FEATURES

- Easy to Install

Bitnami Stacks are built with one goal in mind: to make it as easy as
possible to install open source software. Our installers completely automate
the process of installing and configuring all of the software included in
each Stack, so you can have everything up and running in just a few clicks.

- Independent

Bitnami Stacks are completely self-contained, and therefore do not interfere
with any software already installed on your system. For example, you can
upgrade your system's MySQL or Apache without fear of 'breaking' your
Bitnami Stack.

- Integrated

By the time you click the 'finish' button on the installer, the whole stack
will be integrated, configured and ready to go. 

- Relocatable

Bitnami Stacks can be installed in any directory. This allows you to have
multiple instances of the same stack, without them interfering with each other. 

3. COMPONENTS

Bitnami MEAN Stack ships with the following:

  - mongoDB 3.0.4
  - RockMongo 1.1.7
  - Apache 2.4.12
  - PHP 5.5.27
  - Node.js 0.12.7
  - Git 1.9.5

4. REQUIREMENTS

To install Bitnami MEAN Stack you will need:

    - Intel x86 or compatible processor
    - Minimum of 512 MB RAM 
    - Minimum of 50 MB hard drive space
    - TCP/IP protocol support
    - Compatible operantig systems:
      - An x86 Linux operating system.
      - A 32-bit Windows operating system such as Windows 2000, XP, Vista
      or Windows Server 2003.
      - An OS X operating system x64.


5. INSTALLATION

The Bitnami MEAN Stack is distributed as a binary executable installer.
It can be downloaded from:

https://bitnami.com/stacks/

The downloaded file will be named something similar to:

bitnami-mongodb-3.0.4-2-windows-installer.exe on Windows or
bitnami-mongodb-3.0.4-2-linux-installer.run on Linux or 
bitnami-mongodb-3.0.4-2-linux-installer.run on Linux x64 or 
bitnami-mongodb-3.0.4-2-osx-x64-installer.run on OS X x64.

Double click the file and follow the on-screen instructions.

If you receive an error message during installation, please refer to
the Troubleshooting section.

5. STARTING AND STOPPING BITNAMI MONGODB

You can start and stop Bitnami MEAN Stack on Windows using the shortcuts created
in the Start Menu, under Programs -> Bitnami -> Bitnami Service on Windows.

To start/stop/restart application on Linux or OS X you can use the ctlscript.sh
utility:

       ./ctlscript.sh (start|stop|restart)
       ./ctlscript.sh (start|stop|restart) apache
       ./ctlscript.sh (start|stop|restart) mongodb

  start      - start the service(s)
  stop       - stop  the service(s)
  restart    - restart or start the service(s)


 
6. DIRECTORY STRUCTURE

The installation process will create several subfolders under the main
installation directory:

	apache2/: Apache Web server.
        mongodb/: mongoDB Database.
        git/: Distributed version control system
        apache2/: Apache Web server
        nodejs/: Node.js files.
        license/: License files
        php/: PHP files

8. TROUBLESHOOTING

This version of the Bitnami MEAN Stack is a preview version, and as
such, may contain a number of bugs and be a little bit rough around the
edges. We are working on the next release, which will contain several
improvements along with expanded documentation. In addition to the resources
provided below, we encourage you to post your questions and suggestions at:

https://community.bitnami.com/

We also encourage you to sign up for our newsletter, which we'll use to
announce new releases and new stacks. To do so, just register at:
https://bitnami.com/newsletter.  

8.1 Installer

# Installer Payload Error 

If you get the following error while trying to run the installer from the
command line:

"Installer payload initialization failed. This is likely due to an
incomplete or corrupt downloaded file" 

The installer binary is not complete, likely because the file was
not downloaded correctly. You will need to download the file and
repeat the installation process. 

9.2 Apache 

If you find any problem starting Apache, the first place you should check is
the Apache error log file:

/home/user/meanstack-3.0.4-2/apache2/logs/error.log on Linux or
/Applications/meanstack-3.0.4-2/apache2/error.log on OS X or
C:\Bitnami\meanstack-3.0.4-2\apache2\logs\error.log on Windows.

Most errors are related to not being able to listen to the default port.
Make sure there are no other server programs listening at the same port
before trying to start Apache. Some programs, such as Skype, may also use
port 80. For issues not covered in this Quick Start guide, please refer to
the Apache documentation, which is located at http://httpd.apache.org/docs/  

9. LICENSES

Apache Web Server is distributed under the Apache License v2.0, which
is located at http://www.apache.org/licenses/LICENSE-2.0

Neon is released under the GNU General Public License, which is located at
http://www.gnu.org/copyleft/gpl.html

mongoDB is distributed under the GNU AGPL v3.0 License, which is located at
http://www.mongodb.org/about/licensing/

Libiconv is released under the LGPL license, which is located at
http://www.gnu.org/licenses/lgpl.html

Zlib is released under the zlib License (a free software license/compatible 
with GPL), which is located at http://www.gzip.org/zlib/zlib_license.html

expat is distributed under the MIT License, which is located at
http://www.jclark.com/xml/copying.txt

OpenSSL is released under the terms of the Apache License, which is
located at http://www.openssl.org/source/license.html
