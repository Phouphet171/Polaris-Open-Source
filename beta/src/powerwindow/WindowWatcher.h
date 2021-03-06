// Copyright 2010 Hewlett-Packard under the terms of the MIT X license
// found at http://www.opensource.org/licenses/mit-license.html

#pragma once

struct ActiveWorld;
struct EventLoop;
struct Runnable;

Runnable* MakeWindowWatcher(EventLoop* event_loop, ActiveWorld* world);
