//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer, MISSING_TYPE;

@interface _TtC7TMAudio13TMAudioPlayer : NSObject
{
    MISSING_TYPE *application;
    MISSING_TYPE *audioQueue;
    MISSING_TYPE *wasPlaying;
    MISSING_TYPE *player;
    MISSING_TYPE *rateObserver;
    MISSING_TYPE *statusObserver;
    MISSING_TYPE *title;
    MISSING_TYPE *artist;
    MISSING_TYPE *artwork;
    MISSING_TYPE *playbackState;
    MISSING_TYPE *audioURL;
    MISSING_TYPE *audioType;
}

- (void).cxx_destruct;
- (void)audioSessionInterruption:(id)arg1;
- (void)pause;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;
- (id)init;
@property(nonatomic, retain) AVPlayer *player; // @synthesize player;

@end

