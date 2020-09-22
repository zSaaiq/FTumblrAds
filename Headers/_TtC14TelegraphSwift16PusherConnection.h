//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSTimer, NSURLSession, _TtC10Starscream9WebSocket, _TtC14TelegraphSwift13GlobalChannel, _TtC14TelegraphSwift14PusherChannels, _TtC14TelegraphSwift19PusherClientOptions;
@protocol _TtP14TelegraphSwift14PusherDelegate_;

@interface _TtC14TelegraphSwift16PusherConnection : NSObject
{
    MISSING_TYPE *url;
    MISSING_TYPE *key;
    MISSING_TYPE *options;
    MISSING_TYPE *globalChannel;
    MISSING_TYPE *socketId;
    MISSING_TYPE *connectionState;
    MISSING_TYPE *channels;
    MISSING_TYPE *socket;
    MISSING_TYPE *URLSession;
    MISSING_TYPE *userDataFetcher;
    MISSING_TYPE *reconnectAttemptsMax;
    MISSING_TYPE *reconnectAttempts;
    MISSING_TYPE *maxReconnectGapInSeconds;
    MISSING_TYPE *delegate;
    MISSING_TYPE *pongResponseTimeoutInterval;
    MISSING_TYPE *activityTimeoutInterval;
    MISSING_TYPE *reconnectTimer;
    MISSING_TYPE *pongResponseTimeoutTimer;
    MISSING_TYPE *activityTimeoutTimer;
    MISSING_TYPE *intentionalDisconnect;
    MISSING_TYPE *socketConnected;
    MISSING_TYPE *connectionEstablishedMessageReceived;
    MISSING_TYPE *$__lazy_storage_$_reachability;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleEventWithEventName:(id)arg1 jsonObject:(id)arg2;
- (id)getEventDataJSONFrom:(id)arg1;
- (id)getPusherEventJSONFrom:(id)arg1;
- (void)cleanupAfterNoPongResponse;
- (void)sendPing;
- (void)cleanUpActivityAndPongResponseTimeoutTimers;
- (void)resetActivityTimeoutTimer;
- (void)updateConnectionStateTo:(long long)arg1;
- (void)removeAllCallbacksFromGlobalChannel;
- (void)removeCallbackFromGlobalChannelWithCallbackId:(id)arg1;
- (id)addCallbackToGlobalChannel:(CDUnknownBlockType)arg1;
- (void)createGlobalChannel;
- (void)connect;
- (void)disconnect;
- (void)sendEventWithEvent:(id)arg1 data:(id)arg2 channel:(id)arg3;
- (void)unsubscribeAll;
- (void)unsubscribeWithChannelName:(id)arg1;
- (id)subscribeToPresenceChannelWithChannelName:(id)arg1 auth:(id)arg2 onMemberAdded:(CDUnknownBlockType)arg3 onMemberRemoved:(CDUnknownBlockType)arg4;
- (id)subscribeWithChannelName:(id)arg1 auth:(id)arg2 onMemberAdded:(CDUnknownBlockType)arg3 onMemberRemoved:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithKey:(id)arg1 socket:(id)arg2 url:(id)arg3 options:(id)arg4 URLSession:(id)arg5;
@property(nonatomic) _Bool connectionEstablishedMessageReceived; // @synthesize connectionEstablishedMessageReceived;
@property(nonatomic) _Bool socketConnected; // @synthesize socketConnected;
@property(nonatomic) _Bool intentionalDisconnect; // @synthesize intentionalDisconnect;
@property(nonatomic, retain) NSTimer *activityTimeoutTimer; // @synthesize activityTimeoutTimer;
@property(nonatomic, retain) NSTimer *pongResponseTimeoutTimer; // @synthesize pongResponseTimeoutTimer;
@property(nonatomic, retain) NSTimer *reconnectTimer; // @synthesize reconnectTimer;
@property(nonatomic) double activityTimeoutInterval; // @synthesize activityTimeoutInterval;
@property(nonatomic) double pongResponseTimeoutInterval; // @synthesize pongResponseTimeoutInterval;
@property(nonatomic) __weak id <_TtP14TelegraphSwift14PusherDelegate_> delegate; // @synthesize delegate;
@property(nonatomic) long long reconnectAttempts; // @synthesize reconnectAttempts;
@property(nonatomic, copy) CDUnknownBlockType userDataFetcher;
@property(nonatomic, retain) NSURLSession *URLSession; // @synthesize URLSession;
@property(nonatomic, retain) _TtC10Starscream9WebSocket *socket; // @synthesize socket;
@property(nonatomic, retain) _TtC14TelegraphSwift14PusherChannels *channels; // @synthesize channels;
@property(nonatomic) long long connectionState; // @synthesize connectionState;
@property(nonatomic, copy) NSString *socketId;
@property(nonatomic, retain) _TtC14TelegraphSwift13GlobalChannel *globalChannel; // @synthesize globalChannel;
@property(nonatomic, retain) _TtC14TelegraphSwift19PusherClientOptions *options; // @synthesize options;

@end

