//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADVideoControlling-Protocol.h"

@class NSString;
@protocol GADMediationNativeAdVideoControllerDelegate, NSObject;

@interface GADMediationNativeAdVideoController : NSObject <GADVideoControlling>
{
    id <NSObject> _mediatedNativeAdDidPlayVideoObserver;
    id <NSObject> _mediatedNativeAdDidPauseVideoObserver;
    id <NSObject> _mediatedNativeAdDidEndVideoPlaybackObserver;
    _Bool _hasVideoContent;
    id <GADMediationNativeAdVideoControllerDelegate> _delegate;
    long long _videoPlaybackState;
}

@property(nonatomic) long long videoPlaybackState; // @synthesize videoPlaybackState=_videoPlaybackState;
@property(nonatomic) _Bool hasVideoContent; // @synthesize hasVideoContent=_hasVideoContent;
@property(retain, nonatomic) id <GADMediationNativeAdVideoControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopObservingMediatedNativeAd;
- (void)observeMediatedNativeAd:(id)arg1;
- (_Bool)customControlsEnabled;
- (double)aspectRatio;
- (void)setInitialStateWithVideoOptions:(id)arg1;
- (void)pause;
- (void)play;
- (void)setMute:(_Bool)arg1;
- (void)dealloc;
- (id)initWithMediatedNativeContentAd:(id)arg1;
- (id)initWithMediatedNativeAppInstallAd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

