/**
 * Copyright (C) 2011, BMW AG
 *
 * GeniviAudioMananger AudioManagerDaemon
 *
 * \file CommandReveiver.h
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
 */

#ifndef COMMANDRECEIVER_H_
#define COMMANDRECEIVER_H_

#include <command/CommandReceiveInterface.h>
#include <config.h>

namespace am
{

class DatabaseHandler;
class ControlSender;
class DBusWrapper;
class SocketHandler;

/**
 * This class realizes the command Interface
 */
class CommandReceiver: public CommandReceiveInterface
{
public:
    CommandReceiver(DatabaseHandler* iDatabaseHandler, ControlSender* iControlSender, SocketHandler* iSocketHandler);
    CommandReceiver(DatabaseHandler* iDatabaseHandler, ControlSender* iControlSender, SocketHandler* iSocketHandler, DBusWrapper* iDBusWrapper);
    virtual ~CommandReceiver();
    am_Error_e connect(const am_sourceID_t sourceID, const am_sinkID_t sinkID, am_mainConnectionID_t& mainConnectionID);
    am_Error_e disconnect(const am_mainConnectionID_t mainConnectionID);
    am_Error_e setVolume(const am_sinkID_t sinkID, const am_mainVolume_t volume);
    am_Error_e volumeStep(const am_sinkID_t sinkID, const int16_t volumeStep);
    am_Error_e setSinkMuteState(const am_sinkID_t sinkID, const am_MuteState_e muteState);
    am_Error_e setMainSinkSoundProperty(const am_MainSoundProperty_s& soundProperty, const am_sinkID_t sinkID);
    am_Error_e setMainSourceSoundProperty(const am_MainSoundProperty_s& soundProperty, const am_sourceID_t sourceID);
    am_Error_e setSystemProperty(const am_SystemProperty_s& property);
    am_Error_e getListMainConnections(std::vector<am_MainConnectionType_s>& listConnections) const;
    am_Error_e getListMainSinks(std::vector<am_SinkType_s>& listMainSinks) const;
    am_Error_e getListMainSources(std::vector<am_SourceType_s>& listMainSources) const;
    am_Error_e getListMainSinkSoundProperties(const am_sinkID_t sinkID, std::vector<am_MainSoundProperty_s>& listSoundProperties) const;
    am_Error_e getListMainSourceSoundProperties(const am_sourceID_t sourceID, std::vector<am_MainSoundProperty_s>& listSourceProperties) const;
    am_Error_e getListSourceClasses(std::vector<am_SourceClass_s>& listSourceClasses) const;
    am_Error_e getListSinkClasses(std::vector<am_SinkClass_s>& listSinkClasses) const;
    am_Error_e getListSystemProperties(std::vector<am_SystemProperty_s>& listSystemProperties) const;
    am_Error_e getTimingInformation(const am_mainConnectionID_t mainConnectionID, am_timeSync_t& delay) const;
    am_Error_e getDBusConnectionWrapper(DBusWrapper*& dbusConnectionWrapper) const;
    am_Error_e getSocketHandler(SocketHandler*& socketHandler) const;
    uint16_t getInterfaceVersion() const;

private:
    DatabaseHandler* mDatabaseHandler; //!< pointer to the databasehandler
    ControlSender* mControlSender; //!< pointer to the control sender
    DBusWrapper* mDBusWrapper; //!< pointer to the dbuswrapper
    SocketHandler* mSocketHandler; //!< pointer to the SocketHandler
};

}

#endif /* COMMANDRECEIVER_H_ */
