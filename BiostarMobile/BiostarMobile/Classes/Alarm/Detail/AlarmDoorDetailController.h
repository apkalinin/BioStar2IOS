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

#import <UIKit/UIKit.h>
#import "BaseViewController.h"
#import "AlarmDoorDetailNormalCell.h"
#import "AlarmDoorDetailAcclCell.h"
#import "DoorControlPopupViewController.h"
#import "DoorProvider.h"
#import "UserNewDetailViewController.h"
#import "ImagePopupViewController.h"
#import "AlarmTimeTablePopupController.h"
#import "EventQuery.h"
#import "PreferenceProvider.h"
#import "AuthProvider.h"


@interface AlarmDoorDetailController : BaseViewController
{
    __weak IBOutlet UILabel *titleLabel;
    __weak IBOutlet UILabel *doorNameLabel;
    __weak IBOutlet UILabel *doorDescription;
    __weak IBOutlet UITableView *detailTableView;
    __weak IBOutlet UIButton *logImageButton;
    __weak IBOutlet UIButton *logButton;
    __weak IBOutlet UILabel *logLabel;
    __weak IBOutlet UIButton *doorControlButton;

    DoorProvider *doorProvider;
    EventProvider *eventProvider;
    
    EventQuery *searchQuery;
    ListDoorItem *searchedDoor;
    SimpleUser *user;
    NSString *phoneNumber;
    BOOL isFoundDoor;
    NSInteger doorID;
    NSInteger menuIndex;
}

@property (strong, nonatomic) GetNotification *detailInfo;

- (void)getDoor:(NSInteger)searchDoorID;
- (IBAction)moveToBack:(id)sender;
- (IBAction)showDoorController:(id)sender;
- (IBAction)moveToLog:(id)sender;
- (void)controlDoorOperator:(NSInteger)index;
- (NSString*)getToastContent;
- (NSString*)getErrorToastContent:(NSString *)message;
- (void)setDefaultPeriod;
- (void)setDefaultEventType;
- (void)setDefaultDevice;
- (void)showErrorToast:(NSString*)errorMessage;
@end
