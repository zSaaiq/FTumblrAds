//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADMediaContentDisplaying-Protocol.h"

@class GADMediationNativeAdVideoController, NSString, UIView;

@interface GADMediationNativeAdMediaContent : NSObject <GADMediaContentDisplaying>
{
    UIView *_mediaView;
    GADMediationNativeAdVideoController *_videoController;
}

@property(readonly, nonatomic) GADMediationNativeAdVideoController *videoController; // @synthesize videoController=_videoController;
@property(readonly, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
- (void).cxx_destruct;
- (void)loadVideoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithMediatedNativeContentAd:(id)arg1;
- (id)initWithMediatedNativeAppInstallAd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
