//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSLayoutConstraint, UIView, _TtC8TumblrUI22BlogSelectorHeaderView;

@interface _TtC8TumblrUI44BlogSelectionViewProvidingDropdownController : UIViewController
{
    MISSING_TYPE *viewProvider;
    MISSING_TYPE *transitionAnimator;
    MISSING_TYPE *headerView;
    MISSING_TYPE *dropdownTopConstraint;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) UIView *footerView;
@property(nonatomic, readonly) UIView *dropdownContainerView;
@property(nonatomic, readonly) UIView *dropdownView;
@property(nonatomic, retain) NSLayoutConstraint *dropdownTopConstraint; // @synthesize dropdownTopConstraint;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) UIView *headerView; // @synthesize headerView;
@property(nonatomic, readonly) _TtC8TumblrUI22BlogSelectorHeaderView *blogSelectorHeaderView;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

@end
