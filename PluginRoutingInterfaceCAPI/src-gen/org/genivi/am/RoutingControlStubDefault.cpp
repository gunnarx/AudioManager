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
#include <org/genivi/am/RoutingControlStubDefault.h>

namespace org {
namespace genivi {
namespace am {

RoutingControlStubDefault::RoutingControlStubDefault():
        remoteEventHandler_(this) {
}

RoutingControlStubRemoteEvent* RoutingControlStubDefault::initStubAdapter(const std::shared_ptr<RoutingControlStubAdapter>& stubAdapter) {
    stubAdapter_ = stubAdapter;
    return &remoteEventHandler_;
}


void RoutingControlStubDefault::asyncAbort(am_Handle_s handle) {
    // No operation in default
}

void RoutingControlStubDefault::asyncConnect(am_Handle_s handle, am_connectionID_t connectionID, am_sourceID_t sourceID, am_sinkID_t sinkID, am_ConnectionFormat_pe connectionFormat) {
    // No operation in default
}

void RoutingControlStubDefault::asyncDisconnect(am_Handle_s handle, am_connectionID_t connectionID) {
    // No operation in default
}

void RoutingControlStubDefault::asyncSetSinkVolume(am_Handle_s handle, am_sinkID_t sinkID, am_volume_t volume, am_RampType_pe ramp, am_time_t time) {
    // No operation in default
}

void RoutingControlStubDefault::asyncSetSourceVolume(am_Handle_s handle, am_sourceID_t sourceID, am_volume_t volume, am_RampType_pe ramp, am_time_t time) {
    // No operation in default
}

void RoutingControlStubDefault::asyncSetSourceState(am_Handle_s handle, am_sourceID_t sourceID, am_SourceState_e state) {
    // No operation in default
}

void RoutingControlStubDefault::asyncSetSinkSoundProperties(am_Handle_s handle, am_sinkID_t sinkID, am_SoundProperty_L listSoundProperties) {
    // No operation in default
}

void RoutingControlStubDefault::asyncSetSinkSoundProperty(am_Handle_s handle, am_sinkID_t sinkID, am_SoundProperty_s soundProperty) {
    // No operation in default
}

void RoutingControlStubDefault::asyncSetSourceSoundProperties(am_Handle_s handle, am_sourceID_t sourceID, am_SoundProperty_L listSoundProperties) {
    // No operation in default
}

void RoutingControlStubDefault::asyncSetSourceSoundProperty(am_Handle_s handle, am_sourceID_t sourceID, am_SoundProperty_s soundProperty) {
    // No operation in default
}

void RoutingControlStubDefault::asyncCrossFade(am_Handle_s handle, am_crossfaderID_t crossfaderID, am_HotSink_e hotSink, am_RampType_pe rampType, am_time_t time) {
    // No operation in default
}

void RoutingControlStubDefault::setDomainState(am_domainID_t domainID, am_DomainState_e domainState, am_Error_e& error) {
    // No operation in default
}

void RoutingControlStubDefault::asyncSetVolumes(am_Handle_s handle, am_Volumes_L volumes) {
    // No operation in default
}

void RoutingControlStubDefault::asyncSetSinkNotificationConfiguration(am_Handle_s handle, am_sinkID_t sinkID, am_NotificationConfiguration_s notificationConfiguration) {
    // No operation in default
}

void RoutingControlStubDefault::asyncSetSourceNotificationConfiguration(am_Handle_s handle, am_sourceID_t sourceID, am_NotificationConfiguration_s notificationConfiguration) {
    // No operation in default
}



RoutingControlStubDefault::RemoteEventHandler::RemoteEventHandler(RoutingControlStubDefault* defaultStub):
        defaultStub_(defaultStub) {
}

} // namespace am
} // namespace genivi
} // namespace org
