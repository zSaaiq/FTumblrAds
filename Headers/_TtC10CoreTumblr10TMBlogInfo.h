//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, _TtC11TumblrTheme15SizedImageModel;

@interface _TtC10CoreTumblr10TMBlogInfo : NSObject
{
    MISSING_TYPE *name;
    MISSING_TYPE *placementIdentifier;
    MISSING_TYPE *uuid;
    MISSING_TYPE *headerImageModel;
    MISSING_TYPE *isNSFW;
    MISSING_TYPE *theme;
    MISSING_TYPE *url;
    MISSING_TYPE *isFollowing;
    MISSING_TYPE *avatar;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 placementIdentifier:(id)arg2 uuid:(id)arg3 isNSFW:(_Bool)arg4 headerImageModel:(id)arg5 theme:(id)arg6 url:(id)arg7 isFollowing:(_Bool)arg8 avatar:(id)arg9;
- (id)initWithName:(id)arg1 placementIdentifier:(id)arg2 uuid:(id)arg3 isNSFW:(_Bool)arg4 headerImageModel:(id)arg5;
- (id)initWithName:(id)arg1 placementIdentifier:(id)arg2 uuid:(id)arg3 isNSFW:(_Bool)arg4;
@property(nonatomic, readonly) _Bool isNSFW; // @synthesize isNSFW;
@property(nonatomic, readonly) _TtC11TumblrTheme15SizedImageModel *headerImageModel; // @synthesize headerImageModel;
@property(nonatomic, readonly) NSString *uuid;
@property(nonatomic, readonly) NSString *placementIdentifier;
@property(nonatomic, readonly) NSString *name;

@end

