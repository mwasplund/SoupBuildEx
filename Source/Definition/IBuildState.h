// <copyright file="IBuildState.h" company="Soup">
// Copyright (c) Soup. All rights reserved.
// </copyright>

#pragma once

namespace Soup::BuildEx
{
	/// <summary>
	/// Build State Extension interface
	/// </summary>
	class IBuildState
	{
	public:
		virtual const std::any& GetProperty(const char* name) = 0;
		virtual void SetProperty(const char* name, std::any value) = 0;
	};
}
