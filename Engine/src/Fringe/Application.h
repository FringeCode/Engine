#pragma once

#include "Core.h"


namespace Fringe
{

	class FRINGE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
}