/*
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *   Copyright (C) 2008 John Crispin <blogic@openwrt.org> 
 *   Copyright (C) 2008 Steven Barth <steven@midlink.org>
 *   Copyright (C) 2009 Jo-Philipp Wich <xm@subsignal.org>
 */

#ifndef _IWCONFIG_H__
#define _IWCONFIG_H__
int iwc_startup(void);
void iwc_shutdown(void);
int iwc_get(lua_State *L);
int iwc_getall(lua_State *L);
int iwc_set_essid(lua_State *L);
int iwc_set_mode(lua_State *L);
int iwc_set_channel(lua_State *L);
int iwc_scan(lua_State *L);
int iwc_frequencies(lua_State *L);
#endif
