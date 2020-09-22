//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMDictionaryUpdatableManagedObject.h"

@class NSDate, NSString;

@interface TMBlockedBlog : TMDictionaryUpdatableManagedObject
{
}

- (id)initWithContext:(id)arg1 dictionary:(id)arg2;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (void)updateWithDictionary:(id)arg1;

// Remaining properties
@property(nonatomic, copy) NSString *blockingBlogUUID; // @dynamic blockingBlogUUID;
@property(nonatomic) _Bool isAdult; // @dynamic isAdult;
@property(nonatomic, copy) NSString *name; // @dynamic name;
@property(nonatomic, copy) NSString *placementID; // @dynamic placementID;
@property(nonatomic, copy) NSDate *timeBlocked; // @dynamic timeBlocked;
@property(nonatomic, copy) NSString *title; // @dynamic title;
@property(nonatomic, copy) NSString *uuid; // @dynamic uuid;

@end
