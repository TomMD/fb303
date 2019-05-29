/*
 * Copyright 2004-present Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <fb303/Timeseries.h>

#include <fb303/Timeseries-defs.h>

namespace facebook {
namespace fb303 {

// Explicitly instantiate the timeseries datastructures using int64_t.
//
// This way anyone who only needs these instantiations won't ever need to
// include Timeseries-defs.h

template class MultiLevelTimeSeries<int64_t>;

template class MinuteHourTimeSeries<int64_t>;
template class MinuteTenMinuteHourTimeSeries<int64_t>;
template class MinuteHourDayTimeSeries<int64_t>;
template class TenMinuteHourTimeSeries<int64_t>;
template class MinuteOnlyTimeSeries<int64_t>;
template class TenMinuteOnlyTimeSeries<int64_t>;
template class HourTimeSeries<int64_t>;
template class TenMinutesChunksTimeSeries<int64_t>;
} // namespace fb303
} // namespace facebook