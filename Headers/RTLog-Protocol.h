//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RTLogDelegate-Protocol.h"

@class NSString;
@protocol RTLogComponent;

@protocol RTLog <RTLogDelegate>
- (int)severityForComponent:(id <RTLogComponent>)arg1;
- (id <RTLogComponent>)componentWithName:(NSString *)arg1;
@end

