/*
*  Copyright (c) 2011-2020, Zingaya, Inc. All rights reserved.
*/

#define isNotNull(value) value && ![value isEqual:[NSNull null]]
#define isNull(value) !value || [value isEqual:[NSNull null]]
