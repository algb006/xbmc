/*
 *      Copyright (C) 2005-2013 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */
#include "system.h"
#include "SectionLoader.h"
#include "GUILargeTextureManager.h"
#include "guilib/TextureManager.h"
#include "utils/AlarmClock.h"
#include "GUIInfoManager.h"
#include "filesystem/DllLibCurl.h"
#include "filesystem/DirectoryCache.h"
#include "GUIPassword.h"
#include "utils/LangCodeExpander.h"
#include "PartyModeManager.h"
#include "guilib/LocalizeStrings.h"
#ifdef HAS_PYTHON
#include "interfaces/python/XBPython.h"
#endif

// Guarantee that CSpecialProtocol is initialized before and uninitialized after ZipManager
#include "filesystem/SpecialProtocol.h"
std::map<std::string, std::string> CSpecialProtocol::m_pathMap;

#include "filesystem/ZipManager.h"

#ifdef TARGET_RASPBERRY_PI
#include "linux/RBP.h"
#endif

  CLangCodeExpander  g_LangCodeExpander;
  CLocalizeStrings   g_localizeStrings;
  CLocalizeStrings   g_localizeStringsTemp;

  XFILE::CDirectoryCache g_directoryCache;

  CGUITextureManager g_TextureManager;
  CGUILargeTextureManager g_largeTextureManager;

  CGUIPassword       g_passwordManager;
  CGUIInfoManager    g_infoManager;

  XCURL::DllLibCurlGlobal g_curlInterface;
  CPartyModeManager     g_partyModeManager;

  CAlarmClock        g_alarmClock;

#ifdef TARGET_RASPBERRY_PI
  CRBP               g_RBP;
#endif

  CZipManager g_ZipManager;
