//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6Tumblr21LightBoxEventProvider : NSObject
{
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *screenEventProvider;
    MISSING_TYPE *screenID;
}

- (void).cxx_destruct;
- (id)init;
- (id)screenLeaveEvent;
- (id)screenViewEvent;
- (id)openEventWithMethod:(long long)arg1 type:(long long)arg2;
- (id)dismissEventWithMethod:(long long)arg1 type:(long long)arg2;
- (id)initWithScreenID:(id)arg1 analyticsBuffer:(id)arg2;

@end

