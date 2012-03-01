#ifndef MOCKCOMMANDRECEIVENTERFACE_H_
#define MOCKCOMMANDRECEIVENTERFACE_H_

#include "command/IAmCommandReceive.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace am {

class MockIAmCommandReceive : public IAmCommandReceive {
 public:
  MOCK_METHOD3(connect,
      am_Error_e(const am_sourceID_t sourceID, const am_sinkID_t sinkID, am_mainConnectionID_t& mainConnectionID));
  MOCK_METHOD1(disconnect,
      am_Error_e(const am_mainConnectionID_t mainConnectionID));
  MOCK_METHOD2(setVolume,
      am_Error_e(const am_sinkID_t sinkID, const am_mainVolume_t volume));
  MOCK_METHOD2(volumeStep,
      am_Error_e(const am_sinkID_t sinkID, const int16_t volumeStep));
  MOCK_METHOD2(setSinkMuteState,
      am_Error_e(const am_sinkID_t sinkID, const am_MuteState_e muteState));
  MOCK_METHOD2(setMainSinkSoundProperty,
      am_Error_e(const am_MainSoundProperty_s& soundProperty, const am_sinkID_t sinkID));
  MOCK_METHOD2(setMainSourceSoundProperty,
      am_Error_e(const am_MainSoundProperty_s& soundProperty, const am_sourceID_t sourceID));
  MOCK_METHOD1(setSystemProperty,
      am_Error_e(const am_SystemProperty_s& property));
  MOCK_CONST_METHOD1(getListMainConnections,
      am_Error_e(std::vector<am_MainConnectionType_s>& listConnections));
  MOCK_CONST_METHOD1(getListMainSinks,
      am_Error_e(std::vector<am_SinkType_s>& listMainSinks));
  MOCK_CONST_METHOD1(getListMainSources,
      am_Error_e(std::vector<am_SourceType_s>& listMainSources));
  MOCK_CONST_METHOD2(getListMainSinkSoundProperties,
      am_Error_e(const am_sinkID_t sinkID, std::vector<am_MainSoundProperty_s>& listSoundProperties));
  MOCK_CONST_METHOD2(getListMainSourceSoundProperties,
      am_Error_e(const am_sourceID_t sourceID, std::vector<am_MainSoundProperty_s>& listSourceProperties));
  MOCK_CONST_METHOD1(getListSourceClasses,
      am_Error_e(std::vector<am_SourceClass_s>& listSourceClasses));
  MOCK_CONST_METHOD1(getListSinkClasses,
      am_Error_e(std::vector<am_SinkClass_s>& listSinkClasses));
  MOCK_CONST_METHOD1(getListSystemProperties,
      am_Error_e(std::vector<am_SystemProperty_s>& listSystemProperties));
  MOCK_CONST_METHOD2(getTimingInformation,
      am_Error_e(const am_mainConnectionID_t mainConnectionID, am_timeSync_t& delay));
  MOCK_CONST_METHOD1(getDBusConnectionWrapper,
      am_Error_e(CAmDbusWrapper*& dbusConnectionWrapper));
  MOCK_CONST_METHOD1(getSocketHandler,
      am_Error_e(CAmSocketHandler*& socketHandler));
  MOCK_CONST_METHOD1(getInterfaceVersion,
      void(std::string& version));
  MOCK_METHOD1(confirmCommandReady,
      void(const uint16_t handle));
  MOCK_METHOD1(confirmCommandRundown,
      void(const uint16_t handle));
};

}  // namespace am
#endif /* MOCKCOMMANDRECEIVENTERFACE_H_ */