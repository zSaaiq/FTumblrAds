//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDate, NSDictionary, NSString, _TtC9Timelines26TimelineObjectCommonValues, _TtC9Timelines8APILinks;

@interface _TtC9Timelines37ConversationalNoteTimelineObjectModel : NSObject
{
    MISSING_TYPE *type;
    MISSING_TYPE *identifier;
    MISSING_TYPE *commonValues;
    MISSING_TYPE *blogUUID;
    MISSING_TYPE *conversationalItemType;
    MISSING_TYPE *npfPostJSON;
    MISSING_TYPE *rebloggedPostID;
    MISSING_TYPE *reblogParentBlogName;
    MISSING_TYPE *reblogPostURL;
    MISSING_TYPE *sourcePostID;
    MISSING_TYPE *isOriginalPoster;
    MISSING_TYPE *isOwner;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSDate *date;
@property(nonatomic, readonly) NSArray *supplyLogging;
@property(nonatomic, readonly) NSString *serveId;
@property(nonatomic, readonly) _TtC9Timelines8APILinks *links;
@property(nonatomic, readonly) NSArray *dismissalOptions;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 commonValues:(id)arg2 blogUUID:(id)arg3 conversationalItemType:(int)arg4 npfPostJSON:(id)arg5 rebloggedPostID:(id)arg6 reblogParentBlogName:(id)arg7 reblogPostURL:(id)arg8 sourcePostID:(id)arg9 isOriginalPoster:(_Bool)arg10 isOwner:(_Bool)arg11;
@property(nonatomic, readonly) _Bool isOwner; // @synthesize isOwner;
@property(nonatomic, readonly) _Bool isOriginalPoster; // @synthesize isOriginalPoster;
@property(nonatomic, readonly) NSString *sourcePostID;
@property(nonatomic, readonly) NSString *reblogPostURL;
@property(nonatomic, readonly) NSString *reblogParentBlogName;
@property(nonatomic, readonly) NSString *rebloggedPostID;
@property(nonatomic, readonly) NSDictionary *npfPostJSON;
@property(nonatomic, readonly) int conversationalItemType; // @synthesize conversationalItemType;
@property(nonatomic, readonly) NSString *blogUUID;
@property(nonatomic, readonly) _TtC9Timelines26TimelineObjectCommonValues *commonValues; // @synthesize commonValues;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) int type; // @synthesize type;

@end
