//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "YMAdAnalytics-Protocol.h"

@class NSString;

@interface YMAdNullAnalytics : NSObject <YMAdAnalytics>
{
    NSString *tag;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *tag; // @synthesize tag;
- (void)logAdActionEvent:(int)arg1 value:(id)arg2 apiKey:(id)arg3 ad:(id)arg4 adUnit:(id)arg5 requestID:(id)arg6 targetURL:(id)arg7 options:(id)arg8;
- (id)createWithLoggerSubtaggedWith:(id)arg1;
- (void)logErrorEvent:(int)arg1 value:(id)arg2 ad:(id)arg3 adUnit:(id)arg4 requestID:(id)arg5 targetURL:(id)arg6;
- (void)logAdActionEvent:(int)arg1 value:(id)arg2 ad:(id)arg3 adUnit:(id)arg4 requestID:(id)arg5 targetURL:(id)arg6 options:(id)arg7;
- (void)logAdActionEvent:(int)arg1 value:(id)arg2 ad:(id)arg3 adUnit:(id)arg4 requestID:(id)arg5 targetURL:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

