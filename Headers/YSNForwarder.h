//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YSNForwarder : NSObject
{
    NSString *_spaceId;
    long long _environment;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) NSString *spaceId; // @synthesize spaceId=_spaceId;
- (void)forwardAllEvents;
- (id)initWithSpaceId:(id)arg1 environment:(long long)arg2;
- (id)init;

@end

