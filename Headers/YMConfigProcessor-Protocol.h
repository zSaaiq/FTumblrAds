//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, YMConfigContext;

@protocol YMConfigProcessor <NSObject>
- (NSDictionary *)processConfigObject:(NSDictionary *)arg1 domain:(NSString *)arg2 currentContext:(YMConfigContext *)arg3;
@end

