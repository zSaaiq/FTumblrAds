//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC9PostForms22PostFormLinkController : UIViewController
{
    MISSING_TYPE *currentLink;
    MISSING_TYPE *linkEntered;
    MISSING_TYPE *dismissalCompletion;
    MISSING_TYPE *$__lazy_storage_$_errorContainerView;
    MISSING_TYPE *errorBannerHeightAnchor;
    MISSING_TYPE *controllerModel;
    MISSING_TYPE *linkValidator;
    MISSING_TYPE *bannerPresenter;
    MISSING_TYPE *keyboardTracker;
    MISSING_TYPE *backgroundView;
    MISSING_TYPE *popupContainerView;
    MISSING_TYPE *textFieldBackgroundView;
    MISSING_TYPE *textField;
    MISSING_TYPE *doneButton;
    MISSING_TYPE *cancelButton;
    MISSING_TYPE *popupCenterConstraint;
    MISSING_TYPE *appColorScheme;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dismissLinkController;
- (void)addLink;
- (void)textFieldDidChangeWithTextField:(id)arg1;
- (void)keyboardWillHideWithNotification:(id)arg1;
- (void)keyboardWillShowWithNotification:(id)arg1;
- (void)updateColors:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

@end

