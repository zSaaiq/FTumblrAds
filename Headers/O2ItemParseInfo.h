//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, O2ItemID, O2ParseItemID;

@interface O2ItemParseInfo : NSObject
{
    O2ParseItemID *_parseID;
    O2ItemID *_itemID;
    NSString *_xml;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *xml; // @synthesize xml=_xml;
@property(readonly, copy, nonatomic) O2ItemID *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) O2ParseItemID *parseID; // @synthesize parseID=_parseID;
- (id)initWithItemID:(id)arg1 xml:(id)arg2;

@end

