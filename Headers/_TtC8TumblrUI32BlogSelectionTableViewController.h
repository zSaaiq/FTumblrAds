//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class MISSING_TYPE, NSArray, TMBlog, UIView;
@protocol _TtP8TumblrUI34BlogSelectionViewProvidingDelegate_;

@interface _TtC8TumblrUI32BlogSelectionTableViewController : UITableViewController
{
    MISSING_TYPE *viewModel;
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *previewingCommitHandler;
    MISSING_TYPE *$__lazy_storage_$_previewHandler;
    MISSING_TYPE *delegate;
    MISSING_TYPE *headerView;
    MISSING_TYPE *footerView;
    MISSING_TYPE *selectedBlog;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)removeBlog:(id)arg1;
- (void)addBlog:(id)arg1 shouldSelect:(_Bool)arg2;
@property(nonatomic, retain) TMBlog *selectedBlog; // @synthesize selectedBlog;
@property(nonatomic, readonly) UIView *blogSelectionView;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
@property(nonatomic, retain) UIView *footerView; // @synthesize footerView;
@property(nonatomic, retain) UIView *headerView; // @synthesize headerView;
@property(nonatomic, copy) NSArray *presentedBlogs;
@property(nonatomic) __weak id <_TtP8TumblrUI34BlogSelectionViewProvidingDelegate_> delegate; // @synthesize delegate;

@end

