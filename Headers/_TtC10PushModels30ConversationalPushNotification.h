//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC10CoreTumblr16PushNotification.h"

@class MISSING_TYPE, NSString;

@interface _TtC10PushModels30ConversationalPushNotification : _TtC10CoreTumblr16PushNotification
{
    MISSING_TYPE *targetBlogName;
    MISSING_TYPE *targetBlogUUID;
    MISSING_TYPE *postID;
}

- (void).cxx_destruct;
- (id)initWithNotificationDictionary:(id)arg1;
@property(nonatomic, readonly) NSString *postID;
@property(nonatomic, readonly) NSString *targetBlogUUID;
@property(nonatomic, readonly) NSString *targetBlogName;
@property(nonatomic, readonly) NSString *type;

@end
