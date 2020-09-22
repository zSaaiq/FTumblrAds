//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAudioVideoManager;

@interface GADMobileAds : NSObject
{
    _Bool _applicationMuted;
    float _applicationVolume;
    GADAudioVideoManager *_audioVideoManager;
}

+ (void)enableBackgroundAdLoading;
+ (void)disableSDKCrashReporting;
+ (void)disableAutomatedInAppPurchaseReporting;
+ (void)configureWithApplicationID:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) GADAudioVideoManager *audioVideoManager; // @synthesize audioVideoManager=_audioVideoManager;
@property(nonatomic) _Bool applicationMuted; // @synthesize applicationMuted=_applicationMuted;
@property(nonatomic) float applicationVolume; // @synthesize applicationVolume=_applicationVolume;
- (void).cxx_destruct;
- (_Bool)isSDKVersionAtLeastMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3;
@property(readonly, nonatomic) float clampedApplicationVolume;
- (id)init;

@end

