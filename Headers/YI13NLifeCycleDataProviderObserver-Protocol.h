//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YI13NLifeCycleData, YI13NLifeCycleDataProvider;

@protocol YI13NLifeCycleDataProviderObserver <NSObject>

@optional
- (void)lifecycleDataDidChange:(YI13NLifeCycleDataProvider *)arg1 withlifeCycleData:(YI13NLifeCycleData *)arg2;
@end
