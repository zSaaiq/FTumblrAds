//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol GADAudioVideoManagerDelegate;

@interface GADAudioVideoManager : NSObject
{
    NSMutableSet *_playingVideos;
    NSMutableSet *_soundVideos;
    _Bool _audioSessionIsApplicationManaged;
    id <GADAudioVideoManagerDelegate> _delegate;
}

@property(nonatomic) _Bool audioSessionIsApplicationManaged; // @synthesize audioSessionIsApplicationManaged=_audioSessionIsApplicationManaged;
@property(nonatomic) __weak id <GADAudioVideoManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateAudioSessionAfterAllVideoStopPlayingSound;
- (void)playerDidStopPlayingSound:(id)arg1;
- (void)playerWillStartPlayingSound:(id)arg1;
- (void)playerDidPauseVideo:(id)arg1;
- (void)playerWillStartPlayingVideo:(id)arg1;
- (id)init;

@end
