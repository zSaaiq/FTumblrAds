//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdUnitContainerController.h"

#import "YMAdCarouselContainerViewDelegate-Protocol.h"

@class NSArray;

@interface YMAdUnitCarouselContainerController : YMAdUnitContainerController <YMAdCarouselContainerViewDelegate>
{
    unsigned char _startAutoPlay;
    NSArray *_adControllers;
    long long _currentAdIndex;
}

+ (id)createWithAdUnit:(id)arg1 containerWidth:(double)arg2 diagnostics:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned char startAutoPlay; // @synthesize startAutoPlay=_startAutoPlay;
@property(nonatomic) long long currentAdIndex; // @synthesize currentAdIndex=_currentAdIndex;
@property(copy, nonatomic) NSArray *adControllers; // @synthesize adControllers=_adControllers;
- (struct CGSize)sizeWithReusableView:(id)arg1;
- (void)updateReusableView:(id)arg1;
- (void)adContainerView:(id)arg1 didShowAdAtIndex:(long long)arg2;
- (void)adContainerView:(id)arg1 didCarouselSwipeFromIndex:(long long)arg2 toIndex:(long long)arg3;
- (id)adController:(id)arg1 impressionPositionForAd:(id)arg2;
- (id)generateImpressionPositionForAd:(id)arg1 atIndexPosition:(long long)arg2;
- (void)reportImpressionForCarouselAd:(id)arg1 indexPosition:(long long)arg2 instrumentationTag:(id)arg3;
- (_Bool)canCreateView;
- (id)adContainerView:(id)arg1 reuseAdView:(id)arg2 atIndex:(long long)arg3;
- (id)adContainerView:(id)arg1 newAdViewAtIndex:(long long)arg2;
- (id)createView:(int)arg1;
- (id)adSizeCacheKey;
- (struct CGSize)adSize;
- (struct CGSize)viewSize;
- (id)initWithAdUnit:(id)arg1 containerWidth:(double)arg2 diagnostics:(id)arg3;

@end

