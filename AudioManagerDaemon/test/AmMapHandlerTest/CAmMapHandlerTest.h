/**
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
 * \author Christian Mueller, christian.ei.mueller@bmw.de BMW 2011,2012
 * \author Aleksandar Donchev, aleksander.donchev@partner.bmw.de BMW 2013
 *
 * For further information see http://www.genivi.org/.
 *
 */

#ifndef MAPHANDLERTEST_H_
#define MAPHANDLERTEST_H_

#define UNIT_TEST 1

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "shared/CAmSocketHandler.h"
#include "CAmDatabaseHandlerMap.h"
#include "CAmControlReceiver.h"
#include "CAmControlSender.h"
#include "CAmDatabaseObserver.h"
#include "CAmRoutingSender.h"
#include "CAmRouter.h"
#include "CAmControlSender.h"
#include "../IAmControlBackdoor.h"
#include "../IAmCommandBackdoor.h"
#include "../CAmCommonFunctions.h"
#include "../MockIAmControlSend.h"
#include "../MockIAmCommandSend.h"
#include "MockDatabaseObserver.h"

namespace am
{

class CAmMapHandlerTest: public ::testing::Test
{
public:
	CAmMapHandlerTest();
    ~CAmMapHandlerTest();
    std::vector<std::string> plistRoutingPluginDirs;
    std::vector<std::string> plistCommandPluginDirs;
    CAmSocketHandler pSocketHandler;
    CAmDatabaseHandlerMap pDatabaseHandler;
    CAmRoutingSender pRoutingSender;
    CAmCommandSender pCommandSender;
    MockIAmCommandSend pMockInterface;
    IAmRoutingBackdoor pRoutingInterfaceBackdoor;
    IAmCommandBackdoor pCommandInterfaceBackdoor;
    CAmControlSender pControlSender;
    CAmRouter pRouter;
    CAmControlReceiver pControlReceiver;
    CAmDatabaseObserver pObserver;
    CAmCommonFunctions pCF;
    void SetUp();
    void TearDown();

    void createMainConnectionSetup();
};

class CAmMapHandlerObserverCallbacksTest: public ::testing::Test
{
public:
    std::vector<std::string> plistRoutingPluginDirs;
    std::vector<std::string> plistCommandPluginDirs;
	CAmSocketHandler pSocketHandler;
    CAmRoutingSender pRoutingSender;
    CAmCommandSender pCommandSender;
    CAmControlSender pControlSender;
	CAmDatabaseObserver mMockObserver;
    CAmDatabaseHandlerMap pDatabaseHandler;
    CAmRouter pRouter;
    CAmCommonFunctions pCF;
    CAmMapHandlerObserverCallbacksTest();
    ~CAmMapHandlerObserverCallbacksTest();
    void SetUp();
    void TearDown();
};

}

#endif /* MAPHANDLERTEST_H_ */