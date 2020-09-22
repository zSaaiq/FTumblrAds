ARCHS = arm64 arm64e
TARGET = iphone:clang::11.2

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = FTumblrAds
FTumblrAds_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall Tumblr"
