//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "O2Action-Protocol.h"

@class NSString;

@interface O2CurrentTimeAction : NSObject <O2Action>
{
    CDStruct_1b6d18a9 _currentTime;
}

+ (id)actionWithTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
- (id)initWithTime:(CDStruct_1b6d18a9)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

