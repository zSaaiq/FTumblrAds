//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC14TelegraphSwift13PusherChannel.h"

@class MISSING_TYPE;

@interface _TtC14TelegraphSwift13GlobalChannel : _TtC14TelegraphSwift13PusherChannel
{
    MISSING_TYPE *globalCallbacks;
}

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 connection:(id)arg2 auth:(id)arg3;
- (void)unbindAll;
- (void)unbindWithCallbackId:(id)arg1;
- (id)bind:(CDUnknownBlockType)arg1;
- (void)handleErrorEventWithName:(id)arg1 data:(id)arg2;
- (void)handleEventWithName:(id)arg1 data:(id)arg2 channelName:(id)arg3;
- (id)initWithConnection:(id)arg1;

@end

