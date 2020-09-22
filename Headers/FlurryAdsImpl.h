//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface FlurryAdsImpl : NSObject
{
    _Bool stateInitialized;
    NSMutableArray *_pendingInvocations;
    NSObject<OS_dispatch_queue> *queue;
}

+ (id)instance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue;
@property(nonatomic, getter=isStateInitialized) _Bool stateInitialized; // @synthesize stateInitialized;
@property(retain, nonatomic) NSMutableArray *pendingInvocations; // @synthesize pendingInvocations=_pendingInvocations;
- (void).cxx_destruct;
- (_Bool)adReadyForSpace:(id)arg1;
- (void)forwarded_removeAdFromSpace:(id)arg1;
- (void)forwarded_fetchAndDisplayAdForSpace:(id)arg1 view:(id)arg2 viewController:(id)arg3 size:(int)arg4;
- (void)forwarded_displayAdForSpace:(id)arg1 modallyForViewController:(id)arg2;
- (void)forwarded_displayAdForSpace:(id)arg1 onView:(id)arg2 viewControllerForPresentation:(id)arg3;
- (void)forwarded_fetchAdForSpace:(id)arg1 frame:(struct CGRect)arg2 size:(int)arg3;
- (void)forwarded_initialize:(id)arg1;
- (void)reportFailedToFetch:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)init;

@end

