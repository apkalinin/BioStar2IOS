/*
 * Copyright 2015 Suprema(biostar2@suprema.co.kr)
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

#import <Foundation/Foundation.h>
#import "BSNetwork.h"
#import "ObjectMapper.h"
#import "InCodeMappingProvider.h"
#import "RoleSearchResult.h"
#import "PrivilegeSearchResult.h"
#import "User.h"
#import "AuthProvider.h"

/**
 *
 *  @brief PermissionProvider handle permission API
 */

@interface PermissionProvider : NSObject
{
    BSNetwork *network;
    ObjectMapper *mapper;
    InCodeMappingProvider *mappingProvider;
}

typedef void(^PermissionBolck)(RoleSearchResult *permissionResult);
typedef void(^PrivilegeBolck)(PrivilegeSearchResult *permissionResult);


/**
 *  Get permissions
 *
 *  @param permissionBlock      PermissionBolck
 *  @param errorBlock           ErrorBlock
 */

- (void)getPermissions:(PermissionBolck)permissionBlock onError:(ErrorBlock)errorBlock;


/**
 *  Get permissions
 *
 *  @param privilegeBlock       PrivilegeBolck
 *  @param errorBlock           ErrorBlock
 */

- (void)getPrivileges:(PrivilegeBolck)privilegeBlock onError:(ErrorBlock)errorBlock;

+ (BOOL)isEnableModifyUser:(User*)user;

+ (BOOL)isEnableDeleteUser:(User*)user;

@end
