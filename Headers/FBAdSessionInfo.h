//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSUUID;

@interface FBAdSessionInfo : NSObject
{
    NSUUID *_sessionId;
    NSDate *_startTime;
}

@property(readonly, copy, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSUUID *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)initWithSessionId:(id)arg1 startTime:(id)arg2;

@end

