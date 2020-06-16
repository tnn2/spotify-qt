#pragma once

#include "spotify/spotify.hpp"
#include "mainwindow.hpp"
#include "songmenu.hpp"

#include <QDockWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QTabWidget>
#include <QListWidget>
#include <QTreeWidget>

class ArtistView : public QDockWidget
{
	Q_OBJECT

public:
	ArtistView(spt::Spotify *spotify, const QString &artistId, QWidget *parent);
};