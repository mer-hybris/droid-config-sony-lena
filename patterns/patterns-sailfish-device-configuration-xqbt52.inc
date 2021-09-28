%package -n patterns-sailfish-device-configuration-xqbt52
Summary: Jolla Configuration xqbt52
Requires: patterns-sailfish-device-configuration-common-xqbt52
Requires: patterns-sailfish-device-adaptation-pdx213

Requires: droid-config-xqbt52-sailfish
Requires: droid-config-xqbt52-pulseaudio-settings
Requires: droid-config-xqbt52-policy-settings
Requires: droid-config-xqbt52-preinit-plugin
Requires: droid-config-xqbt52-flashing
Requires: droid-config-xqbt52-bluez5
Requires: droid-hal-version-xqbt52

# For devices with cellular modem. Those without one, please comment out:
Requires: patterns-sailfish-cellular-apps

Requires: sailfish-content-graphics-z%{icon_res}

# For multi-SIM devices
Requires: jolla-settings-networking-multisim

# Flashlight
Requires: jolla-settings-system-flashlight

# For devices which support NFC
Requires: jolla-settings-system-nfc
Requires: nfcd-dbuslog-plugin
Requires: nfcd-mce-plugin

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Devices with 2G or more memory should also include this booster
# to improve camera startup times and the like
Requires: mapplauncherd-booster-silica-qt5-media

%description -n patterns-sailfish-device-configuration-xqbt52
Pattern with packages for xqbt52 configurations

%files -n patterns-sailfish-device-configuration-xqbt52
