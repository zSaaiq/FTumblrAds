//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "O2Action-Protocol.h"

@class NSArray, NSDate, NSString;

@interface O2HardTimeoutReached : NSObject <O2Action>
{
    NSArray *_ids;
    NSDate *_date;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSArray *ids; // @synthesize ids=_ids;
- (id)initWithIDs:(id)arg1 date:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
