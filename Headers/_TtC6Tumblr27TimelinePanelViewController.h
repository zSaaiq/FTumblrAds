//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class MISSING_TYPE;

@interface _TtC6Tumblr27TimelinePanelViewController : UITableViewController
{
    MISSING_TYPE *session;
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *linkRouter;
    MISSING_TYPE *clientSideAdSources;
    MISSING_TYPE *timelinePanelOptions;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (_Bool)textFieldCellShouldReturn:(id)arg1;
- (_Bool)textFieldCellIsEditable:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoreDataController:(id)arg1 analyticsBuffer:(id)arg2 linkRouter:(id)arg3 session:(id)arg4 clientSideAdSources:(id)arg5;

@end
