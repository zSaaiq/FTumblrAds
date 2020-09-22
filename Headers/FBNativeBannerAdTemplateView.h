//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBNativeBannerAdView.h"

@class FBAdBannerTemplateHeaderView, NSNumber, UILabel;

@interface FBNativeBannerAdTemplateView : FBNativeBannerAdView
{
    NSNumber *_headerSize;
    NSNumber *_mediaViewSize;
    NSNumber *_detailsSize;
    UILabel *_headerTitleLabel;
    UILabel *_headerBodyLabel;
    FBAdBannerTemplateHeaderView *_bannerHeaderView;
}

+ (id)defaultAttributes;
@property(nonatomic) __weak FBAdBannerTemplateHeaderView *bannerHeaderView; // @synthesize bannerHeaderView=_bannerHeaderView;
@property(nonatomic) __weak UILabel *headerBodyLabel; // @synthesize headerBodyLabel=_headerBodyLabel;
@property(nonatomic) __weak UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) NSNumber *detailsSize; // @synthesize detailsSize=_detailsSize;
@property(retain, nonatomic) NSNumber *mediaViewSize; // @synthesize mediaViewSize=_mediaViewSize;
@property(retain, nonatomic) NSNumber *headerSize; // @synthesize headerSize=_headerSize;
- (void).cxx_destruct;
- (void)updateView:(_Bool)arg1;
- (void)constructCallToActionButton;
- (void)constructIconView;
- (long long)nativeBannerAdViewType;
- (void)constructBodyView;

@end

