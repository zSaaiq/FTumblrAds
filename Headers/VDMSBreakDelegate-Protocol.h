//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class VDMSBreak, VDMSBreakItem;

@protocol VDMSBreakDelegate <NSObject>
- (void)breakItemClickthroughDismissed:(VDMSBreakItem *)arg1;
- (void)breakItemClickthroughPresented:(VDMSBreakItem *)arg1;
- (void)breakNow:(VDMSBreak *)arg1;
- (void)cancelAdBreak:(VDMSBreak *)arg1;
- (void)openExternalTransaction:(void (^)(void))arg1;
@end

