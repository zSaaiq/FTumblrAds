//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdViewVideoControllerDelegate-Protocol.h"
#import "GADMediationNativeAdVideoControllerDelegate-Protocol.h"
#import "GADVideoControllerDelegate-Protocol.h"
#import "GADVideoControlling-Protocol.h"

@class NSString;
@protocol GADVideoControllerDelegate, GADVideoControlling;

@interface GADVideoController : NSObject <GADAdViewVideoControllerDelegate, GADMediationNativeAdVideoControllerDelegate, GADVideoControllerDelegate, GADVideoControlling>
{
    id <GADVideoControllerDelegate> _delegate;
    id <GADVideoControlling> _internalVideoController;
}

@property(retain, nonatomic) id <GADVideoControlling> internalVideoController; // @synthesize internalVideoController=_internalVideoController;
@property(nonatomic) __weak id <GADVideoControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoControllerDidUnmuteVideo:(id)arg1;
- (void)videoControllerDidMuteVideo:(id)arg1;
- (void)videoControllerDidEndVideoPlayback:(id)arg1;
- (void)videoControllerDidPauseVideo:(id)arg1;
- (void)videoControllerDidPlayVideo:(id)arg1;
- (void)mediationNativeAdVideoControllerDidEndVideoPlayback:(id)arg1;
- (void)mediationNativeAdVideoControllerDidPauseVideo:(id)arg1;
- (void)mediationNativeAdVideoControllerDidPlayVideo:(id)arg1;
- (void)adViewVideoControllerDidUnmuteVideo:(id)arg1;
- (void)adViewVideoControllerDidMuteVideo:(id)arg1;
- (void)adViewVideoControllerDidEndVideoPlayback:(id)arg1;
- (void)adViewVideoControllerDidPauseVideo:(id)arg1;
- (void)adViewVideoControllerDidPlayVideo:(id)arg1;
- (void)setInternalVideoControllerDelegate:(id)arg1;
- (long long)videoPlaybackState;
- (_Bool)customControlsEnabled;
- (void)setInitialStateWithVideoOptions:(id)arg1;
- (double)aspectRatio;
- (_Bool)hasVideoContent;
- (void)setMute:(_Bool)arg1;
- (void)pause;
- (void)play;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

