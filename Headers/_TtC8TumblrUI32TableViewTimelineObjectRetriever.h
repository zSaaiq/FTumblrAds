//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8TumblrUI32TableViewTimelineObjectRetriever : NSObject
{
    MISSING_TYPE *fetchedObjectIndexQueryer;
    MISSING_TYPE *tableView;
}

- (void).cxx_destruct;
- (id)init;
- (id)timelineObjectForIndexPath:(id)arg1 resolveMediatedWaterfalls:(_Bool)arg2;
- (id)timelineObjectAfterObject:(id)arg1 scrollsDownward:(_Bool)arg2;
- (id)timelineObjectBeforeObject:(id)arg1 scrollsDownward:(_Bool)arg2;
- (id)timelineObjectForCell:(id)arg1 resolveMediatedWaterfalls:(_Bool)arg2;
- (id)initWithFetchedObjectIndexQueryer:(id)arg1 tableView:(id)arg2;

@end

