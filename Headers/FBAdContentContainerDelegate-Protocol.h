//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdViewabilityValidator, FBAdWebKitContentContainer, NSDictionary, NSError;

@protocol FBAdContentContainerDelegate <NSObject>
- (void)adDidFailToLoadWithError:(NSError *)arg1;
- (void)adWantsToLogImpression:(FBAdWebKitContentContainer *)arg1 withExtraData:(NSDictionary *)arg2;
- (void)adDidLoad;

@optional
- (FBAdViewabilityValidator *)contentContainerViewabilityValidator;
- (void)adDidTerminate;
- (void)adDidLogClick;
- (void)adCTAClick;
@end
