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

#import "RadioCell.h"

@implementation RadioCell

- (void)awakeFromNib {
    // Initialization code
    [super awakeFromNib];
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)checkSelected:(BOOL)isSelected
{
    if (isSelected)
    {
        [self.contentView setBackgroundColor:UIColorFromRGB(0xf7ce86)];
        [_checkImage setHidden:NO];
    }
    else
    {
        [self.contentView setBackgroundColor:[UIColor whiteColor]];
        [_checkImage setHidden:YES];
    }
    
}

- (void)checkSelected:(BOOL)isSelected isSupportMobileCredential:(BOOL)isSupport
{
    if (isSelected)
    {
        [self.contentView setBackgroundColor:UIColorFromRGB(0xf7ce86)];
        [_checkImage setHidden:NO];
    }
    else
    {
        if (isSupport)
        {
            [self.contentView setBackgroundColor:[UIColor whiteColor]];
            [_checkImage setHidden:YES];
        }
        else
        {
            [self.contentView setBackgroundColor:[UIColor lightGrayColor]];
            [_checkImage setHidden:YES];
        }
        
    }
}

- (void)checkSelected:(BOOL)isSelected isLimited:(BOOL)isLimited
{
    if (!isLimited)
    {
        [self checkSelected:isSelected];
    }
    else
    {
        if (isSelected)
        {
            [self.contentView setBackgroundColor:UIColorFromRGB(0xf7ce86)];
            [_checkImage setHidden:NO];
        }
        else
        {
            [self.contentView setBackgroundColor:[UIColor grayColor]];
            [_checkImage setHidden:YES];
        }
    }
}

@end
