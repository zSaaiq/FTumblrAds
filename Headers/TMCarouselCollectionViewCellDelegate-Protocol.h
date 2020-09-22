//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TMCarouselBlogCardCollectionViewCell, TMCarouselCollectionViewCell, TMCarouselItem;
@protocol _TtP9Timelines14PreviewChiclet_;

@protocol TMCarouselCollectionViewCellDelegate <NSObject>
- (void)carouselCollectionViewCellDidTapSponsoredBadge:(TMCarouselCollectionViewCell *)arg1 withURLString:(NSString *)arg2;
- (void)carouselCollectionViewCellDidBecomeVisible:(TMCarouselCollectionViewCell *)arg1;

@optional
- (void)markCarouselItemAsNonDisplayable:(TMCarouselItem *)arg1;
- (void)carouselCollectionViewCell:(TMCarouselBlogCardCollectionViewCell *)arg1 didTapChiclet:(id <_TtP9Timelines14PreviewChiclet_>)arg2;
- (void)carouselCollectionViewCellDidTapFollowBlog:(TMCarouselBlogCardCollectionViewCell *)arg1;
- (void)carouselCollectionViewCellDidTapDismissBlog:(TMCarouselBlogCardCollectionViewCell *)arg1;
- (void)carouselCollectionViewCellDidTapBlog:(NSString *)arg1 placementIdentifier:(NSString *)arg2 postIdentifier:(NSString *)arg3;
@end

