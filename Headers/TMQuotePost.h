//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMPost.h"

@class NSString;

@interface TMQuotePost : TMPost
{
}

+ (id)textWithQuotationMarks:(id)arg1;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (id)initWithContext:(id)arg1 dictionary:(id)arg2;
- (void)updateWith:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
@property(nonatomic, readonly) NSString *textWithQuotationMarks;

// Remaining properties
@property(nonatomic, copy) NSString *source; // @dynamic source;
@property(nonatomic, copy) NSString *text; // @dynamic text;

@end

