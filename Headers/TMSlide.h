//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, TMPost;

@interface TMSlide : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, retain) NSNumber *duration; // @dynamic duration;
@property(nonatomic) _Bool hideAttribution; // @dynamic hideAttribution;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic, retain) TMPost *post; // @dynamic post;
@property(nonatomic, copy) NSString *sortId; // @dynamic sortId;
@property(nonatomic, copy) NSString *title; // @dynamic title;

@end
