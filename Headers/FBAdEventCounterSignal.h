//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSDictionary, NSString;

@interface FBAdEventCounterSignal : NSObject <NSCopying, NSMutableCopying>
{
    NSDictionary *_eventCounts;
    NSString *_measuredSessionId;
}

@property(readonly, copy, nonatomic) NSString *measuredSessionId; // @synthesize measuredSessionId=_measuredSessionId;
@property(readonly, copy, nonatomic) NSDictionary *eventCounts; // @synthesize eventCounts=_eventCounts;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCounterSignal:(id)arg1;

@end

