//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC9Timelines18TimelineRepository : NSObject
{
    MISSING_TYPE *cache;
    MISSING_TYPE *updateNotifier;
    MISSING_TYPE *persistenceManager;
    MISSING_TYPE *referenceCounts;
}

+ (void)deletePersistedTimelines;
- (void).cxx_destruct;
- (void)forEachTimelineObject:(CDUnknownBlockType)arg1;
- (id)findAllTimelineObjectsWithWhere:(CDUnknownBlockType)arg1;
- (id)findTimelineObjectWithWhere:(CDUnknownBlockType)arg1;
- (void)applyMutation:(id)arg1;
- (void)removeTimelineWith:(id)arg1;
- (id)getTimelineWith:(id)arg1;
- (void)loadPersistedTimelines;
- (id)init;

@end

