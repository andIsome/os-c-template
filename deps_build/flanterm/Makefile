SRCDIR := ../deps/flanterm/src/

FILES := $(shell find -L $(SRCDIR) -type f 2>/dev/null | LC_ALL=C sort)

DEP_CFILES += $(filter %.c,$(FILES))
DEP_INCLUDES += $(SRCDIR)
