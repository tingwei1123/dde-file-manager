/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c DiskInterface -p ./dbusinterface/disk_interface disk.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "./dbusinterface/disk_interface.h"

/*
 * Implementation of interface class DiskInterface
 */

DiskInterface::DiskInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

DiskInterface::~DiskInterface()
{
}

