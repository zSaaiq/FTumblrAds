//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADDelayPageLoadGMSGHandler;

@protocol GADDelayLoadDelegate <NSObject>
- (void)loadHandlerDidChangeDelay:(GADDelayPageLoadGMSGHandler *)arg1 from:(long long)arg2 to:(long long)arg3;
- (void)loadHandlerDidCancel:(GADDelayPageLoadGMSGHandler *)arg1;
@end

