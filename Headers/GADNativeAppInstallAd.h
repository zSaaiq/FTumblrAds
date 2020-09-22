//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GADNativeAd.h"

#import "GADLoadable-Protocol.h"
#import "GADMediatedNativeAppInstallAd-Protocol.h"
#import "GADNativeAdMediaDisplaying-Protocol.h"
#import "GADNativeAdSourceAttributing-Protocol.h"
#import "GADOverlayViewSource-Protocol.h"

@class GADNativeAdAttribution, GADNativeAdImage, GADNativeAdViewPolicy, GADOverlayView, GADVideoController, NSArray, NSDecimalNumber, NSMutableArray, NSString, UIView;
@protocol GADMediaContentDisplaying;

@interface GADNativeAppInstallAd : GADNativeAd <GADMediatedNativeAppInstallAd, GADLoadable, GADNativeAdMediaDisplaying, GADNativeAdSourceAttributing, GADOverlayViewSource>
{
    _Bool _disableImageLoading;
    NSArray *_nativeAdImages;
    NSMutableArray *_availableNativeAdImages;
    GADOverlayView *_overlayView;
    GADVideoController *_videoController;
    GADNativeAdAttribution *_attribution;
    NSString *_headline;
    NSString *_callToAction;
    GADNativeAdImage *_icon;
    NSString *_body;
    NSString *_store;
    NSString *_price;
    NSDecimalNumber *_starRating;
    GADNativeAdViewPolicy *_nativeAdViewPolicy;
    _Bool _publisherOwnedAdViewAllowed;
    GADNativeAdImage *_adChoicesIcon;
    id <GADMediaContentDisplaying> _mediaContent;
    UIView *_adChoicesContentView;
}

+ (_Bool)canInitWithAdLoader:(id)arg1 error:(id *)arg2;
+ (id)requestParametersForAdLoader:(id)arg1;
+ (id)requiredDelegateProtocol;
@property(retain, nonatomic) UIView *adChoicesContentView; // @synthesize adChoicesContentView=_adChoicesContentView;
@property(retain, nonatomic) id <GADMediaContentDisplaying> mediaContent; // @synthesize mediaContent=_mediaContent;
@property(readonly, nonatomic) GADNativeAdImage *adChoicesIcon; // @synthesize adChoicesIcon=_adChoicesIcon;
@property(readonly, nonatomic) GADVideoController *videoController; // @synthesize videoController=_videoController;
@property(readonly, copy, nonatomic) NSDecimalNumber *starRating; // @synthesize starRating=_starRating;
@property(readonly, copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(readonly, copy, nonatomic) NSString *store; // @synthesize store=_store;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
- (void).cxx_destruct;
- (id)overlayView;
- (void)adLoaderDidReceiveAd:(id)arg1;
- (void)loadAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *images;
@property(readonly, nonatomic) GADNativeAdImage *icon;
@property(readonly, copy, nonatomic) NSString *callToAction;
@property(readonly, copy, nonatomic) NSString *headline;
- (id)requiredAssets;
- (void)unregisterAdView;
- (void)registerAdView:(id)arg1 assetViews:(id)arg2;
- (_Bool)recordImpressionWithData:(id)arg1;
- (void)reportTouchEventWithData:(id)arg1;
- (void)performClickWithData:(id)arg1;
- (id)adFormatTemplateID;
- (void)setSlot:(id)arg1;
- (id)initWithMediatedNativeAd:(id)arg1 options:(id)arg2;
- (id)initWithDictionary:(id)arg1 options:(id)arg2;
- (void)GADNativeAppInstallAd_category;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

