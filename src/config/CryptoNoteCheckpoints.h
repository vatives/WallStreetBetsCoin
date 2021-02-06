// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2021, WallStreetBets Coin
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
        {1, "b9f397f541f5a5a9349e4760a5121e8aa1bbe73155400431860380972ca395aa"},
        {10, "fe33576ba5a9f522ae7889f09144d8e68da02e3edcd3ab0e6d176a3aa0681aac"},
        {100, "d7e2d1726788b106407a304b9ffbebf30d659fea4ff978bc320262e6bfb00a98"},
        {1000, "36d65a110552e197651e3fb4f8d88a6d6b8a306800eaa10b955538a06eb38671"},
        {1500, "b1b32be559c9242de21edfc7edffe3cb226bf42c7430d080f801972e7841e104"},
        {2500, "1fef1a554c5245897aa053a85ca5fd4649ec80d5473e6661fb8b61e1b0544116"}};
}
