//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IFlurryFrameSource-Protocol.h"

@class FlurryTransaction, NSDictionary, NSString;

@protocol IFlurryEventFrameSource <IFlurryFrameSource>
- (void)endTimedEvent:(NSString *)arg1 withParameters:(NSDictionary *)arg2;
- (void)recordEvent:(NSString *)arg1 withParameters:(NSDictionary *)arg2 timed:(_Bool)arg3 transaction:(FlurryTransaction *)arg4;
@end

