//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IFlurryManagedUIAdLogger-Protocol.h"

@class NSString, YMAdLogger;

@interface YMAdSnoopyAnalytics : NSObject <IFlurryManagedUIAdLogger>
{
    YMAdLogger *_logger;
}

+ (id)createSnoopyAnalyticsWithLogger:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) YMAdLogger *logger; // @synthesize logger=_logger;
- (void)logEvent:(id)arg1 params:(id)arg2 userInteraction:(_Bool)arg3;
- (_Bool)isFromUserInteraction:(id)arg1 params:(id)arg2;
- (id)constructParameters:(int)arg1 value:(id)arg2 ad:(id)arg3 adUnit:(id)arg4 requestID:(id)arg5 targetURL:(id)arg6 apiKey:(id)arg7 options:(id)arg8;
- (void)logErrorEvent:(int)arg1 value:(id)arg2 apiKey:(id)arg3 ad:(id)arg4 adUnit:(id)arg5 requestID:(id)arg6 targetURL:(id)arg7;
- (void)logAdActionEvent:(int)arg1 value:(id)arg2 apiKey:(id)arg3 ad:(id)arg4 adUnit:(id)arg5 requestID:(id)arg6 targetURL:(id)arg7;
- (void)logAdActionEvent:(int)arg1 value:(id)arg2 apiKey:(id)arg3 ad:(id)arg4 adUnit:(id)arg5 requestID:(id)arg6 targetURL:(id)arg7 options:(id)arg8;
- (id)initWithLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
