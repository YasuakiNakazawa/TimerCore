//
//  TimerManager.h
//  Timer_Core
//
//  Created by myuon on 2014/11/30.
//  Copyright (c) 2014年 yasu. All rights reserved.
//

#ifndef __Timer_Core__TimerManager__
#define __Timer_Core__TimerManager__

#include <list>
#include <string>

// models
#include "Timer.h"

/*!
 @todo TimerManagerインターフェイスを抽出する
 @todo TimerFileManagerを実装する
 @todo TimerDatabaseManagerを実装する
 */
class TimerManager {
private:
    TimerManager() {}

public:
    static const std::string &getFinishedMarkString();
    static const std::string &getMessageMarkString();

    static void getTimer(const std::string &path, std::list<core::Timer> &results);

    static void registerTimer(const std::string &path, const core::Timer &timer);
    static void updateTimer(const std::string &path, const core::Timer &timer);
    static void deleteTimer(const std::string &path, const core::Timer &timer);

    static const std::string &getTimerFormat(const core::Timer &timer, std::string &result);
    static void getTimer(const unsigned int lineNumber, const std::string &formattedText, core::Timer &timer);
};

#endif /* defined(__Timer_Core__TimerManager__) */
