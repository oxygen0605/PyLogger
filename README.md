## Logger
My Logging program in python and C.

### How to use python logger
please add two sentences.

> import MyLogLib
> 
> logger = MyLogLib.getLogger(__name__)

#### ref: 
https://docs.python.org/ja/3.7/library/logging.html

### How to use c logger

Include logger.h, and comppile logger.c with a compile option like **-DFDBG_ON** 

example 1. file print debug
> gcc main.c logger.c -DFDBG_ON

example 2. print debug
> gcc main.c logger.c -PFDBG_ON

#### ref: 
https://monozukuri-c.com/langc-funclist-debuglog/