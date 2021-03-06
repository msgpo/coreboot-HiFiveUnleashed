##
## This file is part of the coreboot project.
##
## Copyright (C) 2000 AG Electronics Ltd.
## Copyright (C) 2003-2004 Linux Networx
##
## This program is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 2 of the License, or
## (at your option) any later version.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##

bootblock-$(CONFIG_SUPERIO_NSC_PC87366) += early_serial.c
romstage-$(CONFIG_SUPERIO_NSC_PC87366) += early_serial.c
ramstage-$(CONFIG_SUPERIO_NSC_PC87366) += superio.c
