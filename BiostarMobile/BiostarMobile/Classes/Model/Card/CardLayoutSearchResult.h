//
//  CardLayoutSearchResult.h
//  BiostarMobile
//
//  Created by 정의석 on 2016. 11. 18..
//  Copyright © 2016년 suprema. All rights reserved.
//

#import "Response.h"
#import "SmartCardLayout.h"

@interface CardLayoutSearchResult : Response

@property (nonatomic, strong) NSArray <SmartCardLayout*> *records;
@property (nonatomic, assign) NSInteger total;

@end
