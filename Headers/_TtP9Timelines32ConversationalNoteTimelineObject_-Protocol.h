//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtP9Timelines14TimelineObject_-Protocol.h"

@class NSDictionary, NSString;

@protocol _TtP9Timelines32ConversationalNoteTimelineObject_ <_TtP9Timelines14TimelineObject_>
@property(nonatomic, readonly) _Bool isOwner;
@property(nonatomic, readonly) _Bool isOriginalPoster;
@property(nonatomic, readonly) NSString *sourcePostID;
@property(nonatomic, readonly) NSString *reblogPostURL;
@property(nonatomic, readonly) NSString *reblogParentBlogName;
@property(nonatomic, readonly) NSString *rebloggedPostID;
@property(nonatomic, readonly) NSDictionary *npfPostJSON;
@property(nonatomic, readonly) int conversationalItemType;
@property(nonatomic, readonly) NSString *blogUUID;
@end

