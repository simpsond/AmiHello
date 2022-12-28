#include <proto/exec.h>
#include <proto/dos.h>

#ifdef __GNUC__
#define __saveds
asm("bra _start");
#endif

int __saveds start() {
  struct ExecBase* SysBase;
  struct DosLibrary* DOSBase;

  SysBase = *(struct ExecBase **)4;
  DOSBase = (struct DosLibrary *)OpenLibrary("dos.library", 0);
  if(DOSBase) {
    Write(Output(), "Hello, World!\n", 14);
    CloseLibrary((struct Library*) DOSBase);
  }

  return 0;
}
