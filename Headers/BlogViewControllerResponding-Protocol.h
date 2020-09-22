//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIScrollView;
@protocol _TtP6Tumblr8BlogPage_;

@protocol BlogViewControllerResponding <NSObject>
- (void)scrollViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)presentBlogPageSettings;
- (void)dataDidFinishUpdating;
- (void)contentOffsetDidChangeForBlogPage:(id <_TtP6Tumblr8BlogPage_>)arg1;
- (void)updateTableHeaderDimensionsOfBlogPage:(id <_TtP6Tumblr8BlogPage_>)arg1;
- (NSString *)blogName;
@end

