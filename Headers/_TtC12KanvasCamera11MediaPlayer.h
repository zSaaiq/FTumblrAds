//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC12KanvasCamera11MediaPlayer : _TtCs12_SwiftObject
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *renderer;
    MISSING_TYPE *playerView;
    MISSING_TYPE *lastStillFilterTime;
    MISSING_TYPE *playableMedia;
    MISSING_TYPE *currentlyPlayingMediaIndex;
    MISSING_TYPE *nextImageTimer;
    MISSING_TYPE *displayLink;
    MISSING_TYPE *currentPixelBuffer;
    MISSING_TYPE *firstFrameSent;
    MISSING_TYPE *startTime;
    MISSING_TYPE *$__lazy_storage_$_avPlayer;
    MISSING_TYPE *rate;
    MISSING_TYPE *startMediaIndex;
    MISSING_TYPE *endMediaIndex;
    MISSING_TYPE *playSingleFrameAtIndex;
    MISSING_TYPE *playbackDirection;
    MISSING_TYPE *playbackMode;
}

- (void)videoFailedToPlayToEndTimeWithNotification:(id)arg1;
- (void)videoDidPlayToEndTimeWithNotification:(id)arg1;
- (void)step;

@end
