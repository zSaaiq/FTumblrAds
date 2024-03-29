//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSString, _TtC9Timelines8APILinks;

@protocol _TtP11ActivityKit12ActivityItem_ <NSObject>
@property(nonatomic, readonly) _Bool canBeMuted;
@property(nonatomic, readonly) _Bool isMuted;
@property(nonatomic, readonly) _TtC9Timelines8APILinks *activityRollupLinks;
@property(nonatomic, readonly) long long rollupTotalCount;
@property(nonatomic, readonly) NSArray *rollupBlogs;
@property(nonatomic, readonly) long long attributionMediaType;
@property(nonatomic, readonly) NSString *answerText;
@property(nonatomic, readonly) NSString *replyText;
@property(nonatomic, readonly) NSString *addedText;
@property(nonatomic, readonly) _Bool isFollowing;
@property(nonatomic, readonly) NSString *mediaURL;
@property(nonatomic, readonly) NSString *postSummary;
@property(nonatomic, readonly) int postType;
@property(nonatomic, readonly) NSString *targetPostID;
@property(nonatomic, readonly) NSString *fromPostID;
@property(nonatomic, readonly) NSString *targetBlogUUID;
@property(nonatomic, readonly) NSString *targetBlogName;
@property(nonatomic, readonly) _Bool isFromCensoredBlog;
@property(nonatomic, readonly) _Bool fromBlogIsPrivate;
@property(nonatomic, readonly) long long type;
@property(nonatomic, readonly) NSDate *date;
@property(nonatomic, readonly) NSString *fromBlogUUID;
@property(nonatomic, readonly) NSString *fromBlogName;
@end

