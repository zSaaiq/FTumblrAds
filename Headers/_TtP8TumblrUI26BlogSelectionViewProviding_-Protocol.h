//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, TMBlog, UIView;
@protocol _TtP8TumblrUI34BlogSelectionViewProvidingDelegate_;

@protocol _TtP8TumblrUI26BlogSelectionViewProviding_
@property(nonatomic, readonly) struct CGSize preferredContentSize;
@property(nonatomic, readonly) UIView *blogSelectionView;
@property(nonatomic, retain) UIView *footerView;
@property(nonatomic, retain) UIView *headerView;
@property(nonatomic, retain) id <_TtP8TumblrUI34BlogSelectionViewProvidingDelegate_> delegate;
- (void)removeBlog:(TMBlog *)arg1;
- (void)addBlog:(TMBlog *)arg1 shouldSelect:(_Bool)arg2;
@property(nonatomic, copy) NSArray *presentedBlogs;
@property(nonatomic, retain) TMBlog *selectedBlog;
@end

