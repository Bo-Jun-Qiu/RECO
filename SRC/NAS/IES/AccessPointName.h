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

#ifndef ACCESS_POINT_NAME_H_
#define ACCESS_POINT_NAME_H_
#include <stdint.h>
#include "bstrlib.h"

#define ACCESS_POINT_NAME_MINIMUM_LENGTH 3
#define ACCESS_POINT_NAME_MAXIMUM_LENGTH 102

class AccessPointName{
	
public:
	AccessPointName(bstring _accesspointname);
	~AccessPointName();
			
	int encode(uint8_t iei, uint8_t *buffer, uint32_t len);
	int decode(uint8_t iei, uint8_t *buffer, uint32_t len);
	void dump(uint8_t iei);
	
private:
	bstring accesspointname;
	
};

#endif /* ACCESS POINT NAME_H_ */


