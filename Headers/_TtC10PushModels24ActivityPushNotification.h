//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC10CoreTumblr16PushNotification.h"

@class MISSING_TYPE, NSString;

@interface _TtC10PushModels24ActivityPushNotification : _TtC10CoreTumblr16PushNotification
{
    MISSING_TYPE *activityPushNotificationType;
    MISSING_TYPE *campaignID;
    MISSING_TYPE *fromBlogName;
    MISSING_TYPE *targetBlogName;
    MISSING_TYPE *targetBlogUUID;
    MISSING_TYPE *fromBlogUUID;
    MISSING_TYPE *targetPostType;
    MISSING_TYPE *postID;
    MISSING_TYPE *reblogKey;
    MISSING_TYPE *isPrivateMessage;
    MISSING_TYPE *isFromAdultBlog;
    MISSING_TYPE *isAnonymous;
    MISSING_TYPE *badgeCount;
}

- (void).cxx_destruct;
- (id)initWithNotificationDictionary:(id)arg1;
@property(nonatomic, readonly) _Bool isAnonymous; // @synthesize isAnonymous;
@property(nonatomic, readonly) _Bool isFromAdultBlog; // @synthesize isFromAdultBlog;
@property(nonatomic, readonly) _Bool isPrivateMessage; // @synthesize isPrivateMessage;
@property(nonatomic, readonly) NSString *reblogKey;
@property(nonatomic, readonly) NSString *postID;
@property(nonatomic, readonly) int targetPostType; // @synthesize targetPostType;
@property(nonatomic, readonly) NSString *fromBlogUUID;
@property(nonatomic, readonly) NSString *targetBlogUUID;
@property(nonatomic, readonly) NSString *targetBlogName;
@property(nonatomic, readonly) NSString *fromBlogName;
@property(nonatomic, readonly) NSString *blogName;
@property(nonatomic, readonly) NSString *campaignID;
@property(nonatomic, readonly) long long activityItemType;
@property(nonatomic, readonly) long long activityPushNotificationType; // @synthesize activityPushNotificationType;
@property(nonatomic, readonly) NSString *type;

@end
