//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC6Tumblr17BlogPageViewModel : NSObject
{
    MISSING_TYPE *blogUUID;
    MISSING_TYPE *blogName;
    MISSING_TYPE *customizeOnAppearance;
    MISSING_TYPE *isPreviewing;
    MISSING_TYPE *initialBlogPageType;
    MISSING_TYPE *activeState;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithBlogUUID:(id)arg1 blogName:(id)arg2 customizeOnAppearance:(unsigned long long)arg3 isPreviewing:(_Bool)arg4 initialBlogPageType:(long long)arg5 activeState:(int)arg6;
@property(nonatomic) int activeState; // @synthesize activeState;
@property(nonatomic, readonly) long long initialBlogPageType; // @synthesize initialBlogPageType;
@property(nonatomic, readonly) _Bool isPreviewing; // @synthesize isPreviewing;
@property(nonatomic) unsigned long long customizeOnAppearance; // @synthesize customizeOnAppearance;
@property(nonatomic, readonly) NSString *blogName;
@property(nonatomic, copy) NSString *blogUUID;

@end

