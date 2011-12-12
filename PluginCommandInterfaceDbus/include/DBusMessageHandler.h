/**
* Copyright (C) 2011, BMW AG
*
* GeniviAudioMananger DbusPlugin
*
* \file DBusMessageHandler
*
* \date 20-Oct-2011 3:42:04 PM
* \author Christian Mueller (christian.ei.mueller@bmw.de)
*
* \section License
* GNU Lesser General Public License, version 2.1, with special exception (GENIVI clause)
* Copyright (C) 2011, BMW AG Christian Mueller  Christian.ei.mueller@bmw.de
*
* This program is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License, version 2.1, as published by the Free Software Foundation.
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License, version 2.1, for more details.
* You should have received a copy of the GNU Lesser General Public License, version 2.1, along with this program; if not, see <http://www.gnu.org/licenses/lgpl-2.1.html>.
* Note that the copyright holders assume that the GNU Lesser General Public License, version 2.1, may also be applicable to programs even in cases in which the program is not a library in the technical sense.
* Linking AudioManager statically or dynamically with other modules is making a combined work based on AudioManager. You may license such other modules under the GNU Lesser General Public License, version 2.1. If you do not want to license your linked modules under the GNU Lesser General Public License, version 2.1, you may use the program under the following exception.
* As a special exception, the copyright holders of AudioManager give you permission to combine AudioManager with software programs or libraries that are released under any license unless such a combination is not permitted by the license of such a software program or library. You may copy and distribute such a system following the terms of the GNU Lesser General Public License, version 2.1, including this special exception, for AudioManager and the licenses of the other code concerned.
* Note that people who make modified versions of AudioManager are not obligated to grant this special exception for their modified versions; it is their choice whether to do so. The GNU Lesser General Public License, version 2.1, gives permission to release a modified version without this exception; this exception also makes it possible to release a modified version which carries forward this exception.
*
* THIS CODE HAS BEEN GENERATED BY ENTERPRISE ARCHITECT GENIVI MODEL. PLEASE CHANGE ONLY IN ENTERPRISE ARCHITECT AND GENERATE AGAIN
*/

#ifndef _DBUSMESSAGEHANDLER_H_
#define _DBUSMESSAGEHANDLER_H_


#include <audiomanagertypes.h>
#include <vector>
#include <sstream>
using std::stringstream;

#include <string>
using std::string;

#include <dbus/dbus.h>
#include <list>
#include <dlt/dlt.h>

DLT_IMPORT_CONTEXT(DBusCommandPlugin)

/**
 * handles DBus Messages, is used to extract & append parameters and send messages
 */
class DBusMessageHandler
{
public:
	DBusMessageHandler();
    ~DBusMessageHandler();

    /**
     * sets the DBus Connection
     * @param connection pointer to the DBus Connection
     */
    void setDBusConnection(DBusConnection*& connection);

    /**
     * is called to initiate the receiving of a message
     * @param msg pointer to the message to be received
     */
    void initReceive(DBusMessage* msg);

    /**
     *  is called to initiate the reply to a message
     * @param msg pointer to the message the reply is for
     */
    void initReply(DBusMessage* msg);

    /**
     * inits a signal to be sent via dbus
     * parameters can be added before sending the signal
     * @param path the path
     * @param signalName the signal name
     */
    void initSignal(std::string path, std::string signalName);

    /**
     * sends out the message
     */
    void sendMessage();

    /**
     * the get functions return a value from the received dbus message
     * @return
     */
    dbus_uint16_t getUInt();
    dbus_int16_t getInt();
    dbus_bool_t getBool();
    char getByte();
    double getDouble();
    char* getString();
    void getProperty(dbus_int16_t& type, dbus_int16_t& value);

    /**
     * the overloaded append function appends different datatypes to the dbusmessage
     */
    void append(dbus_int16_t toAppend);
    void append(dbus_uint16_t toAppend);
    void append(char toAppend);
    void append(bool toAppend);
    void append(double toAppend);
    void append(const am::am_SinkType_s& sinkType);
    void append(const am::am_SourceType_s& sourceType);
    void append(const am::am_MainSoundProperty_s mainSoundProperty);
    void append(const am::am_Availability_s & availability);
    void append(const am::am_SystemProperty_s & SystemProperty);
    void append(const std::vector<am::am_MainConnectionType_s>& listMainConnections);
    void append(const std::vector<am::am_SinkType_s>& listMainSinks);
    void append(const std::vector<am::am_SourceType_s>& listMainSources);
    void append(const std::vector<am::am_MainSoundProperty_s>& listMainSoundProperties);
    void append(const std::vector<am::am_SourceClass_s>& listSourceClasses);
    void append(const std::vector<am::am_SinkClass_s>& listSinkClasses);
    void append(const std::vector<am::am_SystemProperty_s>& listSystemProperties);


private:

    DBusMessageIter mDBusMessageIter;
    DBusError mDBusError;
    dbus_uint32_t mSerial;
    std::string mErrorName;
    std::string mErrorMsg;
    DBusMessage* mDbusMessage;
    DBusMessage* mReveiveMessage;
    DBusConnection* mDBusConnection;
};

#endif // _DBUSMESSAGEWRAPPER_H_
