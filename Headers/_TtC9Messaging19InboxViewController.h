//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class MISSING_TYPE;

@interface _TtC9Messaging19InboxViewController : UITableViewController
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *blogUUID;
    MISSING_TYPE *conversationBadgeController;
    MISSING_TYPE *previewCoordinator;
    MISSING_TYPE *dataDisplayViewCoordinator;
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *headerLoader;
    MISSING_TYPE *messagingAnalyticsLogger;
    MISSING_TYPE *lastReloadDate;
    MISSING_TYPE *minimumTimeBetweenReloading;
    MISSING_TYPE *scheduledReload;
    MISSING_TYPE *inboxDataService;
    MISSING_TYPE *didLoadView;
    MISSING_TYPE *dataChangeAppliner;
    MISSING_TYPE *inboxCacheValidators;
    MISSING_TYPE *missingConversationsDeleteDeterminer;
    MISSING_TYPE *inboxObjectQueryer;
    MISSING_TYPE *inboxCellProvider;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)updateChangedUI:(id)arg1;
- (void)updateColors:(id)arg1;
- (void)willReloadAllData;
- (void)didPerformBatchUpdates;
- (void)willPerformBatchUpdates;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
@property(nonatomic) struct CGSize preferredContentSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end

