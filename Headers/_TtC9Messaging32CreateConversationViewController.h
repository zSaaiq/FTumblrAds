//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC9Messaging32CreateConversationViewController : UIViewController
{
    MISSING_TYPE *tableView;
    MISSING_TYPE *topConstraint;
    MISSING_TYPE *typeaheadDebouncer;
    MISSING_TYPE *sendingBlogUUID;
    MISSING_TYPE *delegate;
    MISSING_TYPE *requestSenderProvider;
    MISSING_TYPE *headerView;
    MISSING_TYPE *keyboardNotificationObserver;
    MISSING_TYPE *tableViewDataSource;
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *appColorScheme;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)cancel;
- (void)updateColors:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

@end

