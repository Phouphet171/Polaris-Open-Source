// Copyright 2010 Hewlett-Packard under the terms of the MIT X license
// found at http://www.opensource.org/licenses/mit-license.html

// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once


#define _WIN32_WINNT 0x0500
#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>
// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

// Reference additional headers your program requires here
#include <commdlg.h>
#include <shellapi.h>
#include <cderr.h>
#include <userenv.h>
#include <assert.h>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <queue>
#include <algorithm>

#include "../polaris/utils.h"