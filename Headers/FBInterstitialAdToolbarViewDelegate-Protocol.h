//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBInterstitialAdToolbarView, NSDictionary;

@protocol FBInterstitialAdToolbarViewDelegate <NSObject>
- (void)interstitialAdToolbarDidCloseAdChoices:(FBInterstitialAdToolbarView *)arg1;
- (void)interstitialAdToolbarDidTapAdChoices:(FBInterstitialAdToolbarView *)arg1;
- (void)interstitialAdToolbarDidClose:(FBInterstitialAdToolbarView *)arg1 withTouchData:(NSDictionary *)arg2;

@optional
- (void)interstitialAdToolbarDidTapAdInfo:(FBInterstitialAdToolbarView *)arg1;
@end

