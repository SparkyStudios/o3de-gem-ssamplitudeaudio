// Copyright (c) 2021-present Sparky Studios. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <SparkyStudios/Audio/Amplitude/Core/Memory.h>
#include <SparkyStudios/Audio/Amplitude/Core/Version.h>

namespace SparkyStudios::Audio::Amplitude
{
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    // Amplitude Xml Element Names
    namespace XmlTags
    {
        static constexpr char kEventTag[] = "AmplitudeEvent";
        static constexpr char kRtpcTag[] = "AmplitudeRtpc";
        static constexpr char kSwitchTag[] = "AmplitudeSwitch";
        static constexpr char kSwitchStateTag[] = "AmplitudeSwitchState";
        static constexpr char kStateTag[] = "AmplitudeState";
        static constexpr char kFileTag[] = "AmplitudeFile";
        static constexpr char kBusTag[] = "AmplitudeBus";
        static constexpr char kEnvironmentTag[] = "AmplitudeEnvironment";

        static constexpr char kLocalizedAttribute[] = "amplitude_localized";
        static constexpr char kIdAttribute[] = "amplitude_id";
        static constexpr char kNameAttribute[] = "amplitude_name";
        static constexpr char kValueAttribute[] = "amplitude_value";
        static constexpr char kMultiplierAttribute[] = "atl_multiplier";
        static constexpr char kShiftAttribute[] = "atl_shift";
    } // namespace XmlTags

    ///////////////////////////////////////////////////////////////////////////////////////////////////
    AZ_INLINE static const char* gMemoryManagerPools[]{ "Engine", "Amplimix", "SoundData", "Filtering", "Codec" };

    AZ_INLINE hmm_vec3 ATLVec3ToAmVec3(const AZ::Vector3& vec)
    {
        return AM_Vec3(vec.GetX(), vec.GetY(), vec.GetZ());
    }
} // namespace SparkyStudios::Audio::Amplitude