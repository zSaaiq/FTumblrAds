//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMBackgroundTaskToken-Protocol.h"

@class NSString;

@interface TMApplicationBackgroundTaskToken : NSObject <TMBackgroundTaskToken>
{
    _Bool _valid;
    _Bool _isBeingRetrieved;
}

@property(nonatomic) _Bool isBeingRetrieved; // @synthesize isBeingRetrieved=_isBeingRetrieved;
- (void)dealloc;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
- (void)invalidate;
- (void)retrieve;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
