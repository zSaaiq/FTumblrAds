//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC9Messaging26ConversationViewController : UIViewController
{
    MISSING_TYPE *blogHeaderView;
    MISSING_TYPE *headerLoaderView;
    MISSING_TYPE *messageField;
    MISSING_TYPE *layoutManager;
    MISSING_TYPE *tableView;
    MISSING_TYPE *pillView;
    MISSING_TYPE *pillViewManager;
    MISSING_TYPE *headerViewManager;
    MISSING_TYPE *conversationMessageSender;
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *keyboardNotificationObserver;
    MISSING_TYPE *viewControllerConfiguration;
    MISSING_TYPE *configurationProvider;
    MISSING_TYPE *initialConfigurationProvider;
    MISSING_TYPE *bannerSuppressorManager;
    MISSING_TYPE *theme;
    MISSING_TYPE *fetchedResultsControllerManager;
    MISSING_TYPE *tableViewDelegate;
    MISSING_TYPE *tableViewDataSource;
    MISSING_TYPE *dataDisplayViewUpdater;
    MISSING_TYPE *dataDisplayViewUpdaterDelegate;
    MISSING_TYPE *emptyViewManager;
    MISSING_TYPE *delegate;
    MISSING_TYPE *firstResponderOperationQueue;
    MISSING_TYPE *visibilityStatusViewController;
    MISSING_TYPE *isPreviewing;
    MISSING_TYPE *wasMessageFieldFirstResponder;
    MISSING_TYPE *mediaMessagePreviewView;
    MISSING_TYPE *messageCompositionView;
    MISSING_TYPE *messagingAnalyticsLogger;
    MISSING_TYPE *externalThemableItems;
    MISSING_TYPE *scrollOffsetUpdaterDelegate;
    MISSING_TYPE *mediaSendingCoordinator;
    MISSING_TYPE *backgroundProvider;
    MISSING_TYPE *messagingApplicationInstanceDelegate;
    MISSING_TYPE *session;
    MISSING_TYPE *preferences;
    MISSING_TYPE *reachabilityDeterminer;
    MISSING_TYPE *conversationMessageFieldModel;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)stopPreview;
- (void)startPreviewingWithEventualContainerNavigationController:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)presentNativeShareSheet:(id)arg1;
- (void)unblurPostlessMedia;
- (void)handleLinkTapFromAttribute:(id)arg1;
- (long long)handleBlogLinkTapForBlogNamed:(id)arg1 postID:(id)arg2 tag:(id)arg3 inCell:(id)arg4;
- (void)updateChangedUI:(id)arg1;
- (void)updateColors:(id)arg1;
- (id)preferredTheme;
- (void)updateTheming:(id)arg1;
- (void)stopUpdating;
- (void)startUpdating;
- (void)showConversationMenu:(id)arg1;
@property(nonatomic) _Bool hidesBottomBarWhenPushed;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)reload;
@property(nonatomic) struct CGSize preferredContentSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end
