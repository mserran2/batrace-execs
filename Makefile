TARGETS= aepollwait acacheflush afutex agetclocktime agetpid agettid agetTime agetuid32 aioctl ammap amprotect asigprocmask aread awrite 

CC=~/CodeSourcery/Sourcery_CodeBench_Lite_for_ARM_GNU_Linux/bin/arm-none-linux-gnueabi-gcc
STRIP=~/CodeSourcery/Sourcery_CodeBench_Lite_for_ARM_GNU_Linux/bin/arm-none-linux-gnueabi-strip

CFLAGS=-Wall -O2 -static

all: $(TARGETS)

aepollwait: epollwait.c
	$(CC) $(CFLAGS) -o epollwait epollwait.c
	$(STRIP) aepollwait

acacheflush: cacheflush.c
	$(CC) $(CFLAGS) -o acacheflush cacheflush.c
	$(STRIP) acacheflush

afutex: futex.c
	$(CC) $(CFLAGS) -o afutex futex.c
	$(STRIP) afutex

agetclocktime: getclocktime.c
	$(CC) $(CFLAGS) -o agetclocktime getclocktime.c
	$(STRIP) agetclocktime

agetpid: getpid.c
	$(CC) $(CFLAGS) -o agetpid getpid.c
	$(STRIP) agetpid

agettid: gettid.c
	$(CC) $(CFLAGS) -o agettid gettid.c
	$(STRIP) agettid

agetTime: getTime.c
	$(CC) $(CFLAGS) -o agetTime getTime.c
	$(STRIP) agetTime

agetuid32: getuid32.c
	$(CC) $(CFLAGS) -o agetuid32 getuid32.c
	$(STRIP) agetuid32

aioctl: ioctl.c
	$(CC) $(CFLAGS) -o aioctl ioctl.c
	$(STRIP) aioctl

ammap: mmap.c
	$(CC) $(CFLAGS) -o ammap mmap.c
	$(STRIP) ammap

amprotect: mprotect2.c
	$(CC) $(CFLAGS) -o amprotect mprotect2.c
	$(STRIP) amprotect

asigprocmask: sigprocmask.c
	$(CC) $(CFLAGS) -o asigprocmask sigprocmask.c
	$(STRIP) asigprocmask

aread: read.c
	$(CC) $(CFLAGS) -o aread read.c
	$(STRIP) aread

awrite: write.c
	$(CC) $(CFLAGS) -o awrite write.c
	$(STRIP) awrite

clean:
	rm -f $(TARGETS)
