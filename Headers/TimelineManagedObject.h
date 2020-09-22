//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSDate, _TtC9Timelines21TimelineRepositoryKey;

@interface TimelineManagedObject : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
@property(nonatomic, readonly) long long version;
@property(nonatomic, readonly) _TtC9Timelines21TimelineRepositoryKey *repositoryKey;
@property(nonatomic, readonly) NSArray *objects;
- (void)updateManagedObjects:(id)arg1;
- (id)managedObjects;
- (void)updateObjects:(id)arg1 latest:(_Bool)arg2 appendingToTop:(_Bool)arg3;
- (void)updateObjects:(id)arg1;
- (id)getObjects;

// Remaining properties
@property(nonatomic) _Bool ephemeral; // @dynamic ephemeral;
@property(nonatomic, copy) NSDate *updatedAt; // @dynamic updatedAt;

@end
