//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "YVExternalLoggerProtocol-Protocol.h"

@class NSString;

@interface VDMSAnalyticsLogger : NSObject <YVExternalLoggerProtocol>
{
}

- (void)logEvent:(id)arg1 parameters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

