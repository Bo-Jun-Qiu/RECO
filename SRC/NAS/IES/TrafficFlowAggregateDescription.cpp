/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under 
 * the Apache License, Version 2.0  (the "License"); you may not use this file
 * except in compliance with the License.  
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "bstrlib.h"

#include "log.h"
#include "TLVEncoder.h"
#include "TLVDecoder.h"

extern "C"{
#include "TrafficFlowAggregateDescription.h"
}

//------------------------------------------------------------------------------
int decode_traffic_flow_aggregate_description (
    traffic_flow_aggregate_description_t * trafficflowaggregatedescription,
    uint8_t iei,
    uint8_t * buffer,
    uint32_t len)
{
  AssertFatal(0, "The Traffic flow aggregate description information element is decoded using the same format as the Traffic flow template (TFT) information element");
  return 0;
}

//------------------------------------------------------------------------------
int encode_traffic_flow_aggregate_description (
    traffic_flow_aggregate_description_t * trafficflowaggregatedescription,
    uint8_t iei,
    uint8_t * buffer,
    uint32_t len)
{
  AssertFatal(0, "The Traffic flow aggregate description information element is encoded using the same format as the Traffic flow template (TFT) information element");
  return 0;
}
