/*
 *	This file is part of OGS Engine
 *	Copyright (C) 2018 BlackPhrase
 *
 *	OGS Engine is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	OGS Engine is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with OGS Engine. If not, see <http://www.gnu.org/licenses/>.
 */

/// @file

#include "GameUI.hpp"

EXPOSE_SINGLE_INTERFACE(CGameUI, IGameUI, GAMEUI_INTERFACE_VERSION);

CGameUI::CGameUI() = default;
CGameUI::~CGameUI() = default;

void CGameUI::Initialize(CreateInterfaceFn *factories, int count)
{
};

void CGameUI::Start(/*cl_enginefunc_t*/ struct cl_enginefuncs_s *engineFuncs, int interfaceVersion, /*void*/ IBaseSystem *system)
{
};

void CGameUI::Shutdown()
{
};

int CGameUI::ActivateGameUI()
{
	return true;
};

int CGameUI::ActivateDemoUI()
{
	return false;
};

int CGameUI::HasExclusiveInput()
{
	return false;
};

void CGameUI::RunFrame()
{
};

void CGameUI::ConnectToServer(const char *game, int IP, int port)
{
};

void CGameUI::DisconnectFromServer()
{
};

void CGameUI::HideGameUI()
{
};

bool CGameUI::IsGameUIActive()
{
	return true;
};

void CGameUI::LoadingStarted(const char *resourceType, const char *resourceName)
{
};

void CGameUI::LoadingFinished(const char *resourceType, const char *resourceName)
{
};

void CGameUI::StartProgressBar(const char *progressType, int progressSteps)
{
};

int CGameUI::ContinueProgressBar(int progressPoint, float progressFraction)
{
	return 0;
};

void CGameUI::StopProgressBar(bool bError, const char *failureReason, const char *extendedReason)
{
};

int CGameUI::SetProgressBarStatusText(const char *statusText)
{
	return 0;
};

void CGameUI::SetSecondaryProgressBar(float progress)
{
};

void CGameUI::SetSecondaryProgressBarText(const char *statusText)
{
};

void CGameUI::ValidateCDKey(bool force, bool inConnect)
{
};

void CGameUI::OnDisconnectFromServer(int eSteamLoginFailure, const char *username)
{
};