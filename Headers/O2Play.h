//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface O2Play : NSObject
{
    _Bool _isAdPlaying;
    _Bool _isContentPlaying;
    unsigned long long _userAction;
}

+ (id)reduce:(id)arg1 andAction:(id)arg2;
+ (id)stateWithAdPlay:(_Bool)arg1 andContentPlay:(_Bool)arg2 userAction:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long userAction; // @synthesize userAction=_userAction;
@property(readonly, nonatomic) _Bool isContentPlaying; // @synthesize isContentPlaying=_isContentPlaying;
@property(readonly, nonatomic) _Bool isAdPlaying; // @synthesize isAdPlaying=_isAdPlaying;
- (id)initWithAdPlay:(_Bool)arg1 andContentPlay:(_Bool)arg2 userAction:(unsigned long long)arg3;

@end
