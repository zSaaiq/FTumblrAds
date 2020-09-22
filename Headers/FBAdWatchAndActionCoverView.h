//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBAdArrowIconView, FBAdCTAButton, FBInterstitialAdTextView, FBNativeAdDataModel, UIButton, UIImageView, UIVisualEffectView;

@interface FBAdWatchAndActionCoverView : UIView
{
    FBNativeAdDataModel *_dataModel;
    CDUnknownBlockType _onTap;
    UIImageView *_iconView;
    UIImageView *_backgroundImageView;
    FBInterstitialAdTextView *_textContainerView;
    UIButton *_ctaButton;
    FBAdCTAButton *_ctaButtonLandscape;
    UIButton *_coverButton;
    UIVisualEffectView *_blurEffectView;
    FBAdArrowIconView *_arrowIconView;
}

@property(nonatomic) __weak FBAdArrowIconView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(nonatomic) __weak UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(nonatomic) __weak UIButton *coverButton; // @synthesize coverButton=_coverButton;
@property(nonatomic) __weak FBAdCTAButton *ctaButtonLandscape; // @synthesize ctaButtonLandscape=_ctaButtonLandscape;
@property(nonatomic) __weak UIButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(retain, nonatomic) FBInterstitialAdTextView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType onTap; // @synthesize onTap=_onTap;
@property(retain, nonatomic) FBNativeAdDataModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (void)startAnimatingArrowIcon:(_Bool)arg1;
- (void)handleTap:(id)arg1 event:(id)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)increaseYOffsetOfView:(id)arg1 by:(double)arg2;
- (void)hideImageOverlay;

@end

