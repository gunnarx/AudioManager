#ifndef _CONFIG_H
#define _CONFIG_H

#define DAEMONVERSION "ver-0.0.9-11-gd462790"

#define WITH_DBUS_WRAPPER
#define WITH_SOCKETHANDLER_LOOP 
/* #undef WITH_SIMPLEDBUS_LOOP */
#define WITH_PPOLL
#define WITH_TELNET
#define GLIB_DBUS_TYPES_TOLERANT

#define DEFAULT_PLUGIN_COMMAND_DIR "/home/demo/git/AudioManager/bin/plugins/command"
#define DEFAULT_PLUGIN_ROUTING_DIR "/home/demo/git/AudioManager/bin/plugins/routing"
#define CONTROLLER_PLUGIN "/home/demo/git/AudioManager/bin/plugins/control/libPluginControlInterface.so"

#define DEFAULT_TELNETPORT 6060
#define MAX_TELNETCONNECTIONS 3

#define DBUS_SERVICE_PREFIX "org.genivi.audiomanager"
#define DBUS_SERVICE_OBJECT_PATH "/org/genivi/audiomanager"

#define INTROSPECTION_COMMAND_XML_FILE "/home/demo/git/AudioManager/includes/dbus/CommandInterface.xml"

#endif /* _CONFIG_H */
