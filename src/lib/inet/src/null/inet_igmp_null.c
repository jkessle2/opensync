/*
Copyright (c) 2015, Plume Design Inc. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
   1. Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
   2. Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
   3. Neither the name of the Plume Design Inc. nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL Plume Design Inc. BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*
 * ===========================================================================
 *  Dummy IGMP driver -- for platforms that do not support IGMP
 * ===========================================================================
 */
#include <stdlib.h>

#include "log.h"
#include "inet_igmp.h"

struct __inet_igmp
{

};


/*
 * Start/stop the IGMP snooping service
 */
bool inet_igmp_start(inet_igmp_t *self)
{
    (void)self;

    return true;
}

bool inet_igmp_stop(inet_igmp_t *self)
{
	(void)self;

	return true;
}

bool inet_igmp_set(inet_igmp_t *self, bool enable, int iage, int itsize)
{
    (void)enable;
    (void)iage;
    (void)itsize;

    return true;
}

bool inet_igmp_get(inet_igmp_t *self, bool *igmp_enabled)
{
	(void)igmp_enabled;
	return true;
}

inet_igmp_t *inet_igmp_new(const char *ifname)
{
    (void)ifname;

    LOG(WARN, "inet_igmp: %s: IGMP snooping not available on platform.", ifname);

    return (void *)0xdeadc0de;
}

bool inet_igmp_del(inet_igmp_t *self)
{
    (void)self;
    return true;
}
