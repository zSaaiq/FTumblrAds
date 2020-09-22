//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class O2PlayerState, O2VRMState;

@interface O2State : NSObject
{
    O2VRMState *_vrmState;
    O2PlayerState *_playerState;
}

+ (id)reduceWithState:(id)arg1 action:(id)arg2 actionId:(id)arg3;
+ (id)stateWithVRMState:(id)arg1 andPlayerState:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) O2PlayerState *playerState; // @synthesize playerState=_playerState;
@property(readonly, nonatomic) O2VRMState *vrmState; // @synthesize vrmState=_vrmState;
- (id)initWithVRMState:(id)arg1 andPlayerState:(id)arg2;

@end
