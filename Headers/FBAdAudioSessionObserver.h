//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSession, NSHashTable, NSString;

@interface FBAdAudioSessionObserver : NSObject
{
    AVAudioSession *_audioSession;
    NSString *_appCategory;
    unsigned long long _appCategoryOptions;
    _Bool _isVideoPlaying;
    NSHashTable *_volumeObservers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)videoDidEndPlaying;
- (void)videoVolumeChanged;
- (void)videoWillStartPlaying;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeSystemVolumeObserver:(id)arg1;
- (void)addSystemVolumeObserver:(id)arg1;
- (id)init;

@end

