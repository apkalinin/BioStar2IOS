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
#import "NotiTimeCell.h"
#import "ImageCell.h"
#import "PreferenceProvider.h"
#import "CommonUtil.h"

@interface AlarmTimeTablePopupController : BaseViewController
{
    __weak IBOutlet UILabel *titleLabel;
    __weak IBOutlet UIView *containerView;
    __weak IBOutlet UIImageView *notiImage;
    __weak IBOutlet UITableView *timeTableView;
    __weak IBOutlet UIView *contentView;
}

@property (strong, nonatomic) NSMutableArray *timeArray;

- (IBAction)closePopup:(id)sender;

@end
