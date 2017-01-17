//
//  NSString+EnumParser.m
//  BiostarMobile
//
//  Created by 정의석 on 2016. 11. 17..
//  Copyright © 2016년 suprema. All rights reserved.
//

#import "NSString+EnumParser.h"

@implementation NSString (EnumParser)

- (CardType)cardTypeEnumFromString
{
    NSDictionary<NSString*,NSNumber*> *cardTypes = @{
                                                     @"CSN": @(CSN),
                                                     @"WIEGAND": @(WIEGAND),
                                                     @"CSN_WIEGAND": @(CSN_WIEGAND),
                                                     @"SECURE_CREDENTIAL": @(SECURE_CREDENTIAL),
                                                     @"ACCESS_ON": @(ACCESS_ON)
                                                     };
    return cardTypes[self].integerValue;
}


+ (NSString*)cardTypeStringFromEnum:(CardType)type
{
    NSDictionary<NSNumber*,NSString*> *cardTypes = @{
                                                     @(CSN): @"CSN",
                                                     @(WIEGAND) : @"WIEGAND",
                                                     @(CSN_WIEGAND) : @"CSN_WIEGAND",
                                                     @(SECURE_CREDENTIAL) : @"SECURE_CREDENTIAL",
                                                     @(ACCESS_ON) : @"ACCESS_ON"
                                                     };
    
    NSString *stringType = [cardTypes objectForKey:@(type)];
    return stringType;
}


- (NotificationType)notificationTypeEnumFromString
{
    NSDictionary<NSString*,NSNumber*> *notificationType = @{
                                                     @"DOOR_OPEN_REQUEST": @(DOOR_OPEN_REQUEST),
                                                     @"DOOR_FORCED_OPEN": @(DOOR_FORCED_OPEN),
                                                     @"DOOR_HELD_OPEN": @(DOOR_HELD_OPEN),
                                                     @"DEVICE_TAMPERING": @(DEVICE_TAMPERING),
                                                     @"DEVICE_REBOOT": @(DEVICE_REBOOT),
                                                     @"DEVICE_RS485_DISCONNECT": @(DEVICE_RS485_DISCONNECT),
                                                     @"ZONE_APB": @(ZONE_APB),
                                                     @"ZONE_FIRE": @(ZONE_FIRE)
                                                     };
    return notificationType[self].integerValue;
}

- (EventLevel)eventLevelEnumFromString
{
    NSDictionary<NSString*,NSNumber*> *eventLevels = @{
                                                            @"GREEN": @(GREEN),
                                                            @"YELLOW": @(YELLOW),
                                                            @"RED": @(RED)
                                                            };
    return eventLevels[self].integerValue;
}

- (LogType)logTypeEnumFromString
{
    NSDictionary<NSString*,NSNumber*> *logTypes = @{
                                                       @"DEVICE": @(DEVICE),
                                                       @"DOOR": @(DOOR),
                                                       @"USER": @(USER),
                                                       @"ZONE": @(ZONE),
                                                       @"AUTHENTICATION": @(AUTHENTICATION)
                                                       };
    return logTypes[self].integerValue;

}

@end
