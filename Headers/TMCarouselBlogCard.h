//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMCarouselItem.h"

@class NSOrderedSet, NSString, RelatedBlogs, TMBlog;

@interface TMCarouselBlogCard : TMCarouselItem
{
    NSString *recommendationReason;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *recommendationReason; // @synthesize recommendationReason;
- (void)updateWithDictionary:(id)arg1;

// Remaining properties
@property(retain, nonatomic) TMBlog *blog; // @dynamic blog;
@property(nonatomic, getter=isDisplayable) _Bool isDisplayable; // @dynamic isDisplayable;
@property(retain, nonatomic) NSOrderedSet *previewChiclets; // @dynamic previewChiclets;
@property(retain, nonatomic) RelatedBlogs *relatedBlogs; // @dynamic relatedBlogs;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
