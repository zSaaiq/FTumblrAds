//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSFetchedResultsController.h>

#import "_TtP15CoreDataHelpers35ReversibleFetchedObjectIndexQueryer_-Protocol.h"

@interface _TtC6Tumblr26TMFetchedResultsController : NSFetchedResultsController <_TtP15CoreDataHelpers35ReversibleFetchedObjectIndexQueryer_>
{
}

- (id)init;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4;
- (id)indexPathForFetchedObject:(id)arg1;
- (id)fetchedObjectAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfFetchedSections;
- (id)fetchedResults;

@end

