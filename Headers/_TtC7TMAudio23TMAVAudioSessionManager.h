//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC7TMAudio23TMAVAudioSessionManager : NSObject
{
    MISSING_TYPE *audioSessionConfigurations;
}

+ (void)setShared:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;
- (id)init;
- (void)toggleTo:(long long)arg1 owner:(id)arg2;
- (void)deregisterAudioSessionOwner:(id)arg1;
- (void)registerAudioSessionOwner:(id)arg1 category:(long long)arg2;

@end
