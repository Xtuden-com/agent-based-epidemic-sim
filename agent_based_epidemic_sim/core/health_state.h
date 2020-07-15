/*
 * Copyright 2020 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AGENT_BASED_EPIDEMIC_SIM_CORE_HEALTH_STATE_H_
#define AGENT_BASED_EPIDEMIC_SIM_CORE_HEALTH_STATE_H_

#include "agent_based_epidemic_sim/core/pandemic.pb.h"

namespace abesim {

// Helper function for determining if a given HealthState is infectious.
inline bool IsInfectious(const HealthState::State& state) {
  return state == HealthState::INFECTIOUS ||
         state == HealthState::ASYMPTOMATIC ||
         state == HealthState::PRE_SYMPTOMATIC_MILD ||
         state == HealthState::PRE_SYMPTOMATIC_SEVERE ||
         state == HealthState::SYMPTOMATIC_MILD ||
         state == HealthState::SYMPTOMATIC_SEVERE ||
         state == HealthState::SYMPTOMATIC_HOSPITALIZED ||
         state == HealthState::SYMPTOMATIC_CRITICAL ||
         state == HealthState::SYMPTOMATIC_HOSPITALIZED_RECOVERING;
}

}  // namespace abesim

#endif  // AGENT_BASED_EPIDEMIC_SIM_CORE_HEALTH_STATE_H_
