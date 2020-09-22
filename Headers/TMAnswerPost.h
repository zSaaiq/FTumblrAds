//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMPost.h"

@class NSString;

@interface TMAnswerPost : TMPost
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (id)initWithContext:(id)arg1 dictionary:(id)arg2;
- (void)updateWith:(id)arg1;
@property(nonatomic, readonly) _Bool isAnonymousPost;
- (void)updateWithDictionary:(id)arg1;

// Remaining properties
@property(nonatomic, copy) NSString *answer; // @dynamic answer;
@property(nonatomic) _Bool askingIsNSFW; // @dynamic askingIsNSFW;
@property(nonatomic, copy) NSString *askingName; // @dynamic askingName;
@property(nonatomic, copy) NSString *askingURL; // @dynamic askingURL;
@property(nonatomic, copy) NSString *cleanAnswer; // @dynamic cleanAnswer;
@property(nonatomic, copy) NSString *question; // @dynamic question;

@end
