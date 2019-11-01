// <copyright file="IBuildSystem.h" company="Soup">
// Copyright (c) Soup. All rights reserved.
// </copyright>

#pragma once

namespace Soup::BuildEx
{
	/// <summary>
	/// Build Task Extension interface
	/// </summary>
	export class IBuildSystem
	{
	public:
		virtual void AddIncludePath(const char* path) = 0;
		virtual void AddLibraryPath(const char* path) = 0;
	};
}
