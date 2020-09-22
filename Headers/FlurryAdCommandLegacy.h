//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryAdCommand.h"

@class NSString;

@interface FlurryAdCommandLegacy : FlurryAdCommand
{
    int _type;
    struct NSString *_action;
}

@property(readonly, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)hash;
- (_Bool)isEqualToCommand:(id)arg1;
- (void)executeWithParams:(id)arg1 fromAdEvent:(id)arg2 forEventHandler:(id)arg3 macroDictionary:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)executeWithParams:(id)arg1 fromAdEvent:(id)arg2 forCombinableAdUnit:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithAction:(struct NSString *)arg1;
@property(readonly, nonatomic) int actionValue;

@end
