//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GADGMSGHandler.h"

@class GADGCacheURLLoader;

@interface GADGCacheGMSGHandler : GADGMSGHandler
{
    GADGCacheURLLoader *_gcacheURLLoader;
}

+ (id)subActionBlockDictionary;
+ (id)actionBlockDictionary;
- (void).cxx_destruct;
- (void)adView:(id)arg1 didReceiveStartCacheAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveGCacheAction:(id)arg2;
- (id)init;

@end

