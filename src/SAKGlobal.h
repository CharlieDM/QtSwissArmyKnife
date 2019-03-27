﻿/*
* The file is encoding with utf-8 (with BOM)
*
* I write the comment with English, it's not because that I'm good at English,
* but for "installing B".
*
* Copyright (C) 2018-2018 wuhai persionnal. All rights reserved.
*/
#ifndef SAKGLOBAL_H
#define SAKGLOBAL_H

#include <QObject>

class SAKGlobal:public QObject
{
    Q_OBJECT
public:
    SAKGlobal(QObject* parent = nullptr);

    enum ToolButtonType {
        TypeSerialPortAssistant,
        TypeUdpClient,
        TypeTcpClient,
        TypeTcpServer,
        TypeBlueToothClient,
        TypeBlueToothServer,
        TypeTool,
        TypeAbout,
        TypeSetting
    };
    Q_ENUM(ToolButtonType)
};

#endif
