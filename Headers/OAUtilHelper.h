//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface OAUtilHelper : NSObject
{
}

+ (void)delegateToTelemetryWithName:(id)arg1 params:(id)arg2;
+ (void)delegateToTelemetryForDurationEventWithName:(id)arg1 duration:(id)arg2 params:(id)arg3;
+ (void)delegateToTelemetryForMemoryWithName:(id)arg1 params:(id)arg2;
+ (void)delegateToTelemetryForColdStartType:(long long)arg1 duration:(double)arg2 params:(id)arg3;
+ (void)delegateToTelemetryWithURL:(id)arg1 eventParams:(id)arg2;
+ (void)delegateToSnoopySetGlobalParameter:(id)arg1 forKey:(id)arg2;
+ (void)delegateToSnoopyWithClickInfo:(id)arg1 eventParams:(id)arg2;
+ (void)delegateToSnoopyWithEventName:(id)arg1 eventParams:(id)arg2 eventType:(long long)arg3 isDirect:(_Bool)arg4 eventTrigger:(long long)arg5 paramPriority:(id)arg6;
+ (long long)YSNExtensionTypeForOAExtensionType:(long long)arg1;
+ (long long)YSNEventTypeForOAEventType:(long long)arg1;
+ (long long)YSNEventTriggerForOATrigger:(long long)arg1;
+ (long long)YSNFlavorForOAFlavor:(long long)arg1;
+ (long long)YSNEnvForOAEnv:(long long)arg1;

@end

