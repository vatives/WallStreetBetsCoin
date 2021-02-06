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
        {1, "6c4541f634a7ac986e0f55c32144f17a53bfc7c519dbad8699bf2539a13023c9"},
        {10, "2de360c9db2c930209f7c6e1ea95422863b67d5ff7950573d6f50f8e0c177896"},
        {100, "924e05c80c8c58a8eb76dfd5971ca06c807058f4965e98d7b8c4dec60dc5a4af"},
        {1000, "5d06b9ed7dcd0c476c263b7058051293cf07e96253213961f3b0d9ec9b05b1c0"},
        {1500, "1499ef7d821c22180fcdba84f65be8f6f345f0066553684732a57bf0f1200d59"},
        {2500, "d58c4bbfc8d343d24d486c9b50bc9ba2049e1157e1f0fda5df0362947ad7818f"},
        {5000, "2b49b49922a0cffb51b224771b0246e41f748d946d0c6878ff6291d918064653"},
        {6000, "d75129cabee7570167a6ce48247f9dc4cd768cdf25fa3950aef81bc84050cb45"},
        {6500, "d68d8e1897027cc59354d15b46407006d467025e2146a5890b433c9e6eb50a8f"},
        {7000, "86bc339179cc9f56eed3db4c21bae759b915d1beca0a4f0bf2cc909d0685a0c2"},
        {7500, "4056f43a0402f9f974c7bf2284a74d501a64d4b2e776190bdca9f7ddb68baef2"},
        {8000, "65493dd07d57deb5266bc8ecae756508f35fdc2b847b1bdb53ce5e47ed8be754"}};
}
