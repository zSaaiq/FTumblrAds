//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, _TtC9Timelines21TimelineRepositoryKey;

@interface _TtC9Timelines17TimelineContainer : NSObject
{
    MISSING_TYPE *timeline;
}

- (void).cxx_destruct;
- (id)init;
- (void)updateObjects:(id)arg1 latest:(_Bool)arg2 appendingToTop:(_Bool)arg3;
- (void)updateObjects:(id)arg1;
- (id)getObjects;
@property(nonatomic, copy) NSString *timelineID;
@property(nonatomic) _Bool ephemeral;
@property(nonatomic, readonly) long long version;
@property(nonatomic, readonly) _TtC9Timelines21TimelineRepositoryKey *repositoryKey;
@property(nonatomic, readonly) NSArray *objects;
- (void)replaceTimelineWith:(id)arg1;
- (id)initWithTimeline:(id)arg1;

@end

