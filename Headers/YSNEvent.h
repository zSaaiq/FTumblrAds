//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface YSNEvent : NSObject
{
    _Bool _fromUserInteraction;
    long long _type;
    NSString *_name;
    NSDictionary *_parameters;
    long long _lifecycleEventType;
    unsigned long long _spaceId;
    NSArray *_links;
    NSString *_sdkName;
    NSString *_eventTrigger;
    NSArray *_parameterPriority;
}

+ (id)eventNameFromLifecycleEventType:(long long)arg1;
+ (id)eventWithType:(long long)arg1 name:(id)arg2 fromUserInteraction:(_Bool)arg3 eventTrigger:(id)arg4 andParameters:(id)arg5;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *parameterPriority; // @synthesize parameterPriority=_parameterPriority;
@property(readonly, copy, nonatomic) NSString *eventTrigger; // @synthesize eventTrigger=_eventTrigger;
@property(copy, nonatomic) NSString *sdkName; // @synthesize sdkName=_sdkName;
@property(readonly, nonatomic) NSArray *links; // @synthesize links=_links;
@property(readonly, nonatomic) unsigned long long spaceId; // @synthesize spaceId=_spaceId;
@property(readonly, nonatomic) long long lifecycleEventType; // @synthesize lifecycleEventType=_lifecycleEventType;
@property(readonly, nonatomic) _Bool fromUserInteraction; // @synthesize fromUserInteraction=_fromUserInteraction;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (id)initWithType:(long long)arg1 name:(id)arg2 spaceId:(unsigned long long)arg3 fromUserInteraction:(_Bool)arg4 andParameters:(id)arg5 links:(id)arg6 eventTrigger:(id)arg7 parameterPriority:(id)arg8;
- (id)initWithType:(long long)arg1 name:(id)arg2 spaceId:(unsigned long long)arg3 fromUserInteraction:(_Bool)arg4 andParameters:(id)arg5 links:(id)arg6 eventTrigger:(id)arg7;
- (id)initLifecycleEventWithType:(long long)arg1 fromUserInteraction:(_Bool)arg2 eventTrigger:(id)arg3 andParameters:(id)arg4;
- (id)initWithType:(long long)arg1 name:(id)arg2 fromUserInteraction:(_Bool)arg3 eventTrigger:(id)arg4 andParameters:(id)arg5;
- (id)init;

@end
