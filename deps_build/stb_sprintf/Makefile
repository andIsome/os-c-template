TARGET := ../deps/stb_sprintf/stb_sprintf.h
TARGET_LOC := $(dir $(TARGET))/include/stb
REMOTE := https://raw.githubusercontent.com/nothings/stb/refs/heads/master/stb_sprintf.h
PATCH := ../patches/stb_sprintf.patch

DEP_INCLUDES += $(dir $(TARGET_LOC))

$(TARGET):
	@mkdir -p $(TARGET_LOC)
	wget -P $(dir $(TARGET)) $(REMOTE)
	cp $(TARGET) $(TARGET_LOC)
	patch -p1 $(TARGET_LOC)/stb_sprintf.h < $(PATCH)

.PHONY: all
all: $(TARGET)
