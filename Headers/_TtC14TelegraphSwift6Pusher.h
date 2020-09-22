//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, _TtC14TelegraphSwift12NativePusher, _TtC14TelegraphSwift16PusherConnection;
@protocol _TtP14TelegraphSwift14PusherDelegate_;

@interface _TtC14TelegraphSwift6Pusher : NSObject
{
    MISSING_TYPE *connection;
    MISSING_TYPE *delegate;
    MISSING_TYPE *key;
    MISSING_TYPE *nativePusher;
}

- (void).cxx_destruct;
- (id)init;
- (void)connect;
- (void)disconnect;
- (void)unbindAll;
- (void)unbindWithCallbackId:(id)arg1;
- (id)bind:(CDUnknownBlockType)arg1;
- (void)unsubscribeAll;
- (void)unsubscribe:(id)arg1;
- (id)subscribeToPresenceChannelWithChannelName:(id)arg1 auth:(id)arg2 onMemberAdded:(CDUnknownBlockType)arg3 onMemberRemoved:(CDUnknownBlockType)arg4;
- (id)subscribe:(id)arg1 auth:(id)arg2 onMemberAdded:(CDUnknownBlockType)arg3 onMemberRemoved:(CDUnknownBlockType)arg4;
- (id)initWithUrl:(id)arg1 options:(id)arg2 nativePusher:(id)arg3;
@property(nonatomic, readonly) _TtC14TelegraphSwift12NativePusher *nativePusher; // @synthesize nativePusher;
@property(nonatomic) __weak id <_TtP14TelegraphSwift14PusherDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, readonly) _TtC14TelegraphSwift16PusherConnection *connection; // @synthesize connection;

@end
