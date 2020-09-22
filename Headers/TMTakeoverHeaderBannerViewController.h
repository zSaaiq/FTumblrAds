//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "_TtP11TumblrTheme16AppColorScheming_-Protocol.h"

@class NSString, NSURL, TMHeaderImageView, TMHeaderParallaxController, UITableView;
@protocol TMTakeoverHeaderBannerViewControllerDelegate;

@interface TMTakeoverHeaderBannerViewController : UIViewController <UIGestureRecognizerDelegate, _TtP11TumblrTheme16AppColorScheming_>
{
    id <TMTakeoverHeaderBannerViewControllerDelegate> _delegate;
    TMHeaderParallaxController *_parallaxController;
    NSURL *_bannerImageURL;
    NSURL *_headerSelectionUrl;
    UITableView *_tableView;
    TMHeaderImageView *_bannerImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TMHeaderImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSURL *headerSelectionUrl; // @synthesize headerSelectionUrl=_headerSelectionUrl;
@property(retain, nonatomic) NSURL *bannerImageURL; // @synthesize bannerImageURL=_bannerImageURL;
@property(retain, nonatomic) TMHeaderParallaxController *parallaxController; // @synthesize parallaxController=_parallaxController;
@property(nonatomic) __weak id <TMTakeoverHeaderBannerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)bannerTap:(id)arg1;
- (void)updateColors:(id)arg1;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
