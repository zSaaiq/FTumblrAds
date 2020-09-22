//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "O2Action-Protocol.h"

@class NSDate, NSString, NSURL, O2ItemID;

@interface O2RetryItem : NSObject <O2Action>
{
    O2ItemID *_itemID;
    NSURL *_url;
    NSDate *_date;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) O2ItemID *itemID; // @synthesize itemID=_itemID;
@property(readonly, copy) NSString *description;
- (id)initWithItemID:(id)arg1 url:(id)arg2 date:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

