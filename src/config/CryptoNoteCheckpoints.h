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
        {2500, "1fef1a554c5245897aa053a85ca5fd4649ec80d5473e6661fb8b61e1b0544116"},
        {5000, "1e19db456c4b39c2f0842f5cec29ea367c0b21106b3e309b7b021426e0cfa136"},
        {6000, "3c6629f003a021c94ba1b997046ef6b99c11f851fcae02c3fe34cce8541d0737"},
        {6500, "9aecb9f6022df9b6d148dcd2c9f7a5b0ed6d04b1182607325c8548e39fd0a958"},
        {7000, "967e0b3651c320303293c205edcc777ecb84f83ae8c97b0f521dfebc4d3c6e79"},
        {7500, "ac872d5803b726be71ecb77e32c56d8fd6c6833ad48ddb30fc82f26d5775d0c4"},
        {8000, "9629a04f8008df04bd2216e02c3a14458113bc020f291ae3ee17fea2c009828a"}};
}
