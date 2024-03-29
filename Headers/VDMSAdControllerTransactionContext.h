//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VDMSTransactionContext.h"

@class NSArray, VDMSBreakItem;

@interface VDMSAdControllerTransactionContext : VDMSTransactionContext
{
    _Bool _contentReachedEnd;
    NSArray *_failedBreakItems;
    NSArray *_cancelledAdBreaks;
    VDMSBreakItem *_becameReadyBreakItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool contentReachedEnd; // @synthesize contentReachedEnd=_contentReachedEnd;
@property(retain, nonatomic) VDMSBreakItem *becameReadyBreakItem; // @synthesize becameReadyBreakItem=_becameReadyBreakItem;
@property(retain, nonatomic) NSArray *cancelledAdBreaks; // @synthesize cancelledAdBreaks=_cancelledAdBreaks;
@property(retain, nonatomic) NSArray *failedBreakItems; // @synthesize failedBreakItems=_failedBreakItems;
- (void)addCancelledAdBreak:(id)arg1;
- (void)addFailedBreakItem:(id)arg1;

@end

