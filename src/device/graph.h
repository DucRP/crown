/*
 * Copyright (c) 2012-2020 Daniele Bartolini and individual contributors.
 * License: https://github.com/dbartolini/crown/blob/master/LICENSE
 */

#pragma once

#include "config.h"

#if CROWN_DEBUG

#include "device/types.h"
#include "world/types.h"

namespace crown
{
///
/// @ingroup Device
namespace graph_globals
{
	///
	void register_console_commands(ConsoleServer& cs);

	///
	void shutdown();

	/// Draws all the graphs.
	void draw_all(DebugLine& dl, u16 window_width, u16 window_height);

} // namespce graph_globals

} // namespace crown

#endif // CROWN_DEBUG
