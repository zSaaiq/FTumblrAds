//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC6Tumblr28LightBoxPostControlViewModel : NSObject
{
    MISSING_TYPE *postViewModel;
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)showsHighlightedColorForPostControlType:(long long)arg1;
- (void)update:(id)arg1;
- (id)initWithPostViewModel:(id)arg1;
@property(nonatomic, readonly) _Bool reblogged;
@property(nonatomic, readonly) _Bool liked;
@property(nonatomic, readonly) _Bool replied;
@property(nonatomic, readonly) _Bool hasNotes;
@property(nonatomic, readonly) NSArray *postControlTypes;
@property(nonatomic, readonly) NSString *postID;

@end
