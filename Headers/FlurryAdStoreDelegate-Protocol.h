//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FlurryAdStore, NSError;

@protocol FlurryAdStoreDelegate <NSObject>
- (void)adStore:(FlurryAdStore *)arg1 fetchFailedWithError:(NSError *)arg2;
- (void)adStore:(FlurryAdStore *)arg1 fetchSuccessfulWithObject:(id)arg2;
@end

