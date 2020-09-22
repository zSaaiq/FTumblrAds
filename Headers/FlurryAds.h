//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FlurryAds : NSObject
{
}

+ (void)setAdServerUrl:(id)arg1;
+ (void)setAdLogServerUrl:(id)arg1;
+ (_Bool)isTestDevice;
+ (id)getAdDelegate;
+ (void)addCustomAdNetwork:(Class)arg1 withProperties:(id)arg2;
+ (void)clearKeywords;
+ (void)setKeywordsForTargeting:(id)arg1;
+ (void)clearUserCookies;
+ (void)setUserCookies:(id)arg1;
+ (void)enableTestAds:(_Bool)arg1;
+ (void)setAdDelegate:(id)arg1;
+ (void)removeAdFromSpace:(id)arg1;
+ (void)fetchAndDisplayAdForSpace:(id)arg1 view:(id)arg2 viewController:(id)arg3 size:(int)arg4;
+ (_Bool)showAdForSpace:(id)arg1 view:(id)arg2 size:(int)arg3 timeout:(long long)arg4;
+ (_Bool)isAdAvailableForSpace:(id)arg1 view:(id)arg2 size:(int)arg3 timeout:(long long)arg4;
+ (void)displayAdForSpace:(id)arg1 modallyForViewController:(id)arg2;
+ (void)displayAdForSpace:(id)arg1 onView:(id)arg2 viewControllerForPresentation:(id)arg3;
+ (_Bool)adReadyForSpace:(id)arg1;
+ (void)fetchAdForSpace:(id)arg1 frame:(struct CGRect)arg2 size:(int)arg3;
+ (void)initialize:(id)arg1;

@end
