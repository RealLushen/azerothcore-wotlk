/*
 * Copyright (C) 2016+     AzerothCore <www.azerothcore.org>, released under GNU AGPL v3 license: https://github.com/azerothcore/azerothcore-wotlk/blob/master/LICENSE-AGPL3
 * Copyright (C) 2008-2016 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 */

#ifndef _IMMAPMANAGER_H
#define _IMMAPMANAGER_H

#include "Define.h"
#include <string>

// Interface for IMMapManger
namespace MMAP
{
    enum MMAP_LOAD_RESULT
    {
        MMAP_LOAD_RESULT_ERROR,
        MMAP_LOAD_RESULT_OK,
        MMAP_LOAD_RESULT_IGNORED,
    };

    class IMMapMgr
    {
    private:
        bool iEnablePathFinding;

    public:
        IMMapMgr() : iEnablePathFinding(true) {}
        virtual ~IMMapMgr(void) {}

        //Enabled/Disabled Pathfinding
        void setEnablePathFinding(bool value) { iEnablePathFinding = value; }
        bool isEnablePathFinding() const { return (iEnablePathFinding); }
    };
}

#endif
