#
# chrobosim package install file
#

install:
	ch ./pkginstall.ch $(PACKAGE)

uninstall:
	ch ./pkginsall.ch -u $(PACKAGE)

