//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FlurryAdAssetListContainer, NSError;

@protocol FlurryAdNativePresenterDelegate <NSObject>
- (void)adNativePresenterFetchFailure:(NSError *)arg1;
- (void)adNativePresenterFetchSuccess:(FlurryAdAssetListContainer *)arg1;
@end

