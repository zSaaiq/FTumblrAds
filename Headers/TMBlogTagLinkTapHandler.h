//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP10CoreTumblr21TMBlogLinkTapHandling_-Protocol.h"

@class NSString;

@interface TMBlogTagLinkTapHandler : NSObject <_TtP10CoreTumblr21TMBlogLinkTapHandling_>
{
    NSString *_tag;
    NSString *_blog;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *blog; // @synthesize blog=_blog;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (long long)handleBlogLinkTapForBlogNamed:(id)arg1 postID:(id)arg2 tag:(id)arg3 inCell:(id)arg4;
- (id)initWithBlog:(id)arg1 tag:(id)arg2;
- (id)init;

@end

