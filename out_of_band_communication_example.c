#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/ioctl.h>
#include<unistd.h>
#include<linux/cdrom.h>
#include<stdio.h>
int
main (int argc, char *argv[])
{
  int fd, ret;
  if (argc < 2)
    {
      fprintf (stderr, "usage: %s <device to eject>\n", argv[0]);
      return 1;
    }
/*
* Opens the CD-ROM device, read-only. O_NONBLOCK
* tells the kernel that we want to open the device
* even if there is no media present in the drive.
*/
  fd = open (argv[1], O_RDONLY | O_NONBLOCK);
  if (fd < 0)
    {
      perror ("open");
      return 1;
    }
/* Send the eject command to the CD-ROM device. */
  ret = ioctl (fd, CDROMEJECT, 0);
  if (ret)
    {
      perror ("ioctl");
      return 1;
    }
  ret = close (fd);
  if (ret)
    {
      perror ("close");
      return 1;
    }
  return 0;
}
