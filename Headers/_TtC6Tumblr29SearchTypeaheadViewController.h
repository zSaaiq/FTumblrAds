//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSString;

@interface _TtC6Tumblr29SearchTypeaheadViewController : UIViewController
{
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *session;
    MISSING_TYPE *tableView;
    MISSING_TYPE *tableViewDataSource;
    MISSING_TYPE *tableViewDelegate;
    MISSING_TYPE *emptyView;
    MISSING_TYPE *delegate;
    MISSING_TYPE *$__lazy_storage_$_typeaheadSearchResults;
    MISSING_TYPE *eventProvider;
    MISSING_TYPE *displaysGoToBlog;
    MISSING_TYPE *displaysBlogResults;
    MISSING_TYPE *cellConfiguration;
    MISSING_TYPE *screenIdentifier;
    MISSING_TYPE *searchString;
    MISSING_TYPE *keyboardInset;
    MISSING_TYPE *performSearchSubject;
    MISSING_TYPE *disposeBag;
    MISSING_TYPE *appColorScheme;
    MISSING_TYPE *cellProvider;
    MISSING_TYPE *sectionHeaderProvider;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateColors:(id)arg1;
- (void)performSearch;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, copy) NSString *screenIdentifier;

@end

