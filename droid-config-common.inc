%define rpm_vendor qualcomm
%define vendor sony
%define vendor_pretty Sony

%define provides_own_board_mapping 1
%define out_of_image_files 1

%define android_version_major 11

Conflicts: appsupport-system < 13.0.0
Conflicts: appsupport-system > 13.0.0
Conflicts: appsupport-system-privileged

# Device-specific ofono configuration
Provides: ofono-configs
Obsoletes: ofono-configs-mer
Obsoletes: ofono-configs-binder

# No device reset
Provides: jolla-settings-system-reset

# Device-specific usb-moded configuration
Provides: usb-moded-configs
Obsoletes: usb-moded-defaults

Obsoletes: audioflingerglue

%define ofono_enable_plugins bluez5,hfp_ag_bluez5
%define ofono_disable_plugins bluez4,dun_gw_bluez4,hfp_ag_bluez4,hfp_bluez4,dun_gw_bluez5,hfp_bluez5

Requires: droid-system-%{device}-%{rpm_device}

Requires: libgbinder-tools
