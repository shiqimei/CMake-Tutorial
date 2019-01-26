cmake_minimum_required(VERSION 3.13.3)

project(
    "Digital Clock"
    VERSION 1.2.3
)


set(QT Core Gui Widgets Network DBus Sql LinguistTools)
find_package(Qt5 REQUIRED ${QT})