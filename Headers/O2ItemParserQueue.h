//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface O2ItemParserQueue : NSObject
{
    NSSet *_currentItems;
}

+ (id)reduceWithState:(id)arg1 action:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *currentItems; // @synthesize currentItems=_currentItems;
- (_Bool)containsItemID:(id)arg1;
- (id)initWithItems:(id)arg1;

@end
