//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol FBAdFunnel;

@protocol FBAdDebugFunnelLogging <NSObject>
@property(readonly, nonatomic) _Bool shouldLogDebugFunnel;
- (void)logFunnelEventWithCode:(unsigned long long)arg1 info:(NSDictionary *)arg2;
- (void)recalculateDebugFunnelSamplingWithRate:(long long)arg1;
- (id <FBAdFunnel>)funnelForKey:(NSString *)arg1;
- (void)registerFunnel:(id <FBAdFunnel>)arg1 forKey:(NSString *)arg2;
@end

