/*
* This file was generated by the CommonAPI Generators.
*
* This file was generated by the CommonAPI Generators.
*
* This file was generated by the CommonAPI Generators.
*
* Copyright (C) 2012, BMW AG
*
* This file is part of GENIVI Project AudioManager.
*
* Contributions are licensed to the GENIVI Alliance under one or more
* Contribution License Agreements.
*
* \copyright
* This Source Code Form is subject to the terms of the
* Mozilla Public License, v. 2.0. If a  copy of the MPL was not distributed with
* this file, You can obtain one at http://mozilla.org/MPL/2.0/.
*
*
* \author Aleksandar Donchev, aleksander.donchev@partner.bmw.de BMW 2013
* \author Christian Linke christian.linke@bmw.de BMW 2013
*
* For further information see http://www.genivi.org/.
*/
#ifndef ORG_GENIVI_AM_Command_Control_STUB_H_
#define ORG_GENIVI_AM_Command_Control_STUB_H_



#include <org/genivi/am.h>

#include "CommandControl.h"

#define COMMONAPI_INTERNAL_COMPILATION

#include <CommonAPI/InputStream.h>
#include <CommonAPI/OutputStream.h>
#include <CommonAPI/SerializableStruct.h>
#include <cstdint>
#include <string>
#include <vector>

#include <CommonAPI/Stub.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace am {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service CommandControl. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class CommandControlStubAdapter: virtual public CommonAPI::StubAdapter, public CommandControl {
 public:

    /**
     * Sends a broadcast event for newMainConnection. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireNewMainConnectionEvent(const am_MainConnectionType_s& mainConnection) = 0;
    /**
     * Sends a broadcast event for removedMainConnection. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireRemovedMainConnectionEvent(const am_mainConnectionID_t& mainConnection) = 0;
    /**
     * Sends a broadcast event for newSink. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireNewSinkEvent(const am_SinkType_s& sink) = 0;
    /**
     * Sends a broadcast event for removedSink. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireRemovedSinkEvent(const am_sinkID_t& sinkID) = 0;
    /**
     * Sends a broadcast event for newSource. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireNewSourceEvent(const am_SourceType_s& source) = 0;
    /**
     * Sends a broadcast event for removedSource. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireRemovedSourceEvent(const am_sourceID_t& source) = 0;
    /**
     * Sends a broadcast event for numberOfSinkClassesChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireNumberOfSinkClassesChangedEvent() = 0;
    /**
     * Sends a broadcast event for numberOfSourceClassesChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireNumberOfSourceClassesChangedEvent() = 0;
    /**
     * Sends a broadcast event for mainConnectionStateChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireMainConnectionStateChangedEvent(const am_mainConnectionID_t& connectionID, const am_ConnectionState_e& connectionState) = 0;
    /**
     * Sends a broadcast event for mainSinkSoundPropertyChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireMainSinkSoundPropertyChangedEvent(const am_sinkID_t& sinkID, const am_MainSoundProperty_s& soundProperty) = 0;
    /**
     * Sends a broadcast event for mainSourceSoundPropertyChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireMainSourceSoundPropertyChangedEvent(const am_sourceID_t& sourceID, const am_MainSoundProperty_s& soundProperty) = 0;
    /**
     * Sends a broadcast event for sinkAvailabilityChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireSinkAvailabilityChangedEvent(const am_sinkID_t& sinkID, const am_Availability_s& availability) = 0;
    /**
     * Sends a broadcast event for sourceAvailabilityChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireSourceAvailabilityChangedEvent(const am_sourceID_t& sourceID, const am_Availability_s& availability) = 0;
    /**
     * Sends a broadcast event for volumeChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireVolumeChangedEvent(const am_sinkID_t& sinkID, const am_mainVolume_t& volume) = 0;
    /**
     * Sends a broadcast event for sinkMuteStateChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireSinkMuteStateChangedEvent(const am_sinkID_t& sinkID, const am_MuteState_e& muteState) = 0;
    /**
     * Sends a broadcast event for systemPropertyChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireSystemPropertyChangedEvent(const am_SystemProperty_s& systemProperty) = 0;
    /**
     * Sends a broadcast event for timingInformationChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireTimingInformationChangedEvent(const am_mainConnectionID_t& mainConnectionID, const am_timeSync_t& time) = 0;
    /**
     * Sends a broadcast event for sinkUpdated. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireSinkUpdatedEvent(const am_sinkID_t& sinkID, const am_sinkClass_t& sinkClassID, const am_MainSoundProperty_L& listMainSoundProperties) = 0;
    /**
     * Sends a broadcast event for sourceUpdated. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireSourceUpdatedEvent(const am_sourceID_t& sourceID, const am_sourceClass_t& sourceClassID, const am_MainSoundProperty_L& listMainSoundProperties) = 0;
    /**
     * Sends a broadcast event for sinkNotification. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireSinkNotificationEvent(const am_sinkID_t& sinkID, const am_NotificationPayload_s& notification) = 0;
    /**
     * Sends a broadcast event for sourceNotification. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireSourceNotificationEvent(const am_sourceID_t& sourceID, const am_NotificationPayload_s& notification) = 0;
    /**
     * Sends a broadcast event for mainSinkNotificationConfigurationChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireMainSinkNotificationConfigurationChangedEvent(const am_sinkID_t& sinkID, const am_NotificationConfiguration_s& mainNotificationConfiguration) = 0;
    /**
     * Sends a broadcast event for mainSourceNotificationConfigurationChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireMainSourceNotificationConfigurationChangedEvent(const am_sourceID_t& sourceID, const am_NotificationConfiguration_s& mainNotificationConfiguration) = 0;
};


/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for CommandControl.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class CommandControlStubRemoteEvent {
 public:
    virtual ~CommandControlStubRemoteEvent() { }

};


/**
 * Defines the interface that must be implemented by any class that should provide
 * the service CommandControl to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class CommandControlStub : public CommonAPI::Stub<CommandControlStubAdapter , CommandControlStubRemoteEvent> {
 public:
    virtual ~CommandControlStub() { }


    /// This is the method that will be called on remote calls on the method connect.
    virtual void connect(am_sourceID_t sourceID, am_sinkID_t sinkID, am_mainConnectionID_t& mainConnectionID, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method disconnect.
    virtual void disconnect(am_mainConnectionID_t mainConnectionID, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method setVolume.
    virtual void setVolume(am_sinkID_t sinkID, am_mainVolume_t volume, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method volumeStep.
    virtual void volumeStep(am_sinkID_t sinkID, int16_t volumeStep, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method setSinkMuteState.
    virtual void setSinkMuteState(am_sinkID_t sinkID, am_MuteState_e muteState, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method setMainSinkSoundProperty.
    virtual void setMainSinkSoundProperty(am_sinkID_t sinkID, am_MainSoundProperty_s soundProperty, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method setMainSourceSoundProperty.
    virtual void setMainSourceSoundProperty(am_sourceID_t sourceID, am_MainSoundProperty_s soundProperty, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method setSystemProperty.
    virtual void setSystemProperty(am_SystemProperty_s property, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method getListMainConnections.
    virtual void getListMainConnections(am_MainConnection_L& listConnections, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method getListMainSinks.
    virtual void getListMainSinks(am_SinkType_L& listMainSinks, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method getListMainSources.
    virtual void getListMainSources(am_SourceType_L& listMainSources, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method getListMainSinkSoundProperties.
    virtual void getListMainSinkSoundProperties(am_sinkID_t sinkID, am_MainSoundProperty_L& listSoundProperties, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method getListMainSourceSoundProperties.
    virtual void getListMainSourceSoundProperties(am_sourceID_t sourceID, am_MainSoundProperty_L& listSourceProperties, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method getListSourceClasses.
    virtual void getListSourceClasses(am_SourceClass_L& listSourceClasses, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method getListSinkClasses.
    virtual void getListSinkClasses(am_SinkClass_L& listSinkClasses, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method getListSystemProperties.
    virtual void getListSystemProperties(am_SystemProperty_L& listSystemProperties, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method getTimingInformation.
    virtual void getTimingInformation(am_mainConnectionID_t mainConnectionID, am_timeSync_t& delay, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method getListMainSinkNotificationConfigurations.
    virtual void getListMainSinkNotificationConfigurations(am_sinkID_t sinkID, am_NotificationConfiguration_L& listMainNotificationConfigurations, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method getListMainSourceNotificationConfigurations.
    virtual void getListMainSourceNotificationConfigurations(am_sourceID_t sourceID, am_NotificationConfiguration_L& listMainNotificationConfigurations, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method setMainSinkNotificationConfiguration.
    virtual void setMainSinkNotificationConfiguration(am_sinkID_t sinkID, am_NotificationConfiguration_s mainNotificationConfiguration, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method setMainSourceNotificationConfiguration.
    virtual void setMainSourceNotificationConfiguration(am_sourceID_t sourceID, am_NotificationConfiguration_s mainNotificationConfiguration, am_Error_e& error) = 0;
    
    /// Sends a broadcast event for newMainConnection.
    virtual void fireNewMainConnectionEvent(const am_MainConnectionType_s& mainConnection) = 0;
    /// Sends a broadcast event for removedMainConnection.
    virtual void fireRemovedMainConnectionEvent(const am_mainConnectionID_t& mainConnection) = 0;
    /// Sends a broadcast event for newSink.
    virtual void fireNewSinkEvent(const am_SinkType_s& sink) = 0;
    /// Sends a broadcast event for removedSink.
    virtual void fireRemovedSinkEvent(const am_sinkID_t& sinkID) = 0;
    /// Sends a broadcast event for newSource.
    virtual void fireNewSourceEvent(const am_SourceType_s& source) = 0;
    /// Sends a broadcast event for removedSource.
    virtual void fireRemovedSourceEvent(const am_sourceID_t& source) = 0;
    /// Sends a broadcast event for numberOfSinkClassesChanged.
    virtual void fireNumberOfSinkClassesChangedEvent() = 0;
    /// Sends a broadcast event for numberOfSourceClassesChanged.
    virtual void fireNumberOfSourceClassesChangedEvent() = 0;
    /// Sends a broadcast event for mainConnectionStateChanged.
    virtual void fireMainConnectionStateChangedEvent(const am_mainConnectionID_t& connectionID, const am_ConnectionState_e& connectionState) = 0;
    /// Sends a broadcast event for mainSinkSoundPropertyChanged.
    virtual void fireMainSinkSoundPropertyChangedEvent(const am_sinkID_t& sinkID, const am_MainSoundProperty_s& soundProperty) = 0;
    /// Sends a broadcast event for mainSourceSoundPropertyChanged.
    virtual void fireMainSourceSoundPropertyChangedEvent(const am_sourceID_t& sourceID, const am_MainSoundProperty_s& soundProperty) = 0;
    /// Sends a broadcast event for sinkAvailabilityChanged.
    virtual void fireSinkAvailabilityChangedEvent(const am_sinkID_t& sinkID, const am_Availability_s& availability) = 0;
    /// Sends a broadcast event for sourceAvailabilityChanged.
    virtual void fireSourceAvailabilityChangedEvent(const am_sourceID_t& sourceID, const am_Availability_s& availability) = 0;
    /// Sends a broadcast event for volumeChanged.
    virtual void fireVolumeChangedEvent(const am_sinkID_t& sinkID, const am_mainVolume_t& volume) = 0;
    /// Sends a broadcast event for sinkMuteStateChanged.
    virtual void fireSinkMuteStateChangedEvent(const am_sinkID_t& sinkID, const am_MuteState_e& muteState) = 0;
    /// Sends a broadcast event for systemPropertyChanged.
    virtual void fireSystemPropertyChangedEvent(const am_SystemProperty_s& systemProperty) = 0;
    /// Sends a broadcast event for timingInformationChanged.
    virtual void fireTimingInformationChangedEvent(const am_mainConnectionID_t& mainConnectionID, const am_timeSync_t& time) = 0;
    /// Sends a broadcast event for sinkUpdated.
    virtual void fireSinkUpdatedEvent(const am_sinkID_t& sinkID, const am_sinkClass_t& sinkClassID, const am_MainSoundProperty_L& listMainSoundProperties) = 0;
    /// Sends a broadcast event for sourceUpdated.
    virtual void fireSourceUpdatedEvent(const am_sourceID_t& sourceID, const am_sourceClass_t& sourceClassID, const am_MainSoundProperty_L& listMainSoundProperties) = 0;
    /// Sends a broadcast event for sinkNotification.
    virtual void fireSinkNotificationEvent(const am_sinkID_t& sinkID, const am_NotificationPayload_s& notification) = 0;
    /// Sends a broadcast event for sourceNotification.
    virtual void fireSourceNotificationEvent(const am_sourceID_t& sourceID, const am_NotificationPayload_s& notification) = 0;
    /// Sends a broadcast event for mainSinkNotificationConfigurationChanged.
    virtual void fireMainSinkNotificationConfigurationChangedEvent(const am_sinkID_t& sinkID, const am_NotificationConfiguration_s& mainNotificationConfiguration) = 0;
    /// Sends a broadcast event for mainSourceNotificationConfigurationChanged.
    virtual void fireMainSourceNotificationConfigurationChangedEvent(const am_sourceID_t& sourceID, const am_NotificationConfiguration_s& mainNotificationConfiguration) = 0;
};

} // namespace am
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_AM_Command_Control_STUB_H_
