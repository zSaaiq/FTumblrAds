//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "_TtP8TumblrUI32BlogPickerViewControllerDelegate_-Protocol.h"

@class NSArray, NSString, TMAvatarView, TMComposeHeaderButton, TMPopoverController, TMUser, UIImageView, UILabel, UITapGestureRecognizer, _TtC8TumblrUI24BlogPickerViewController;
@protocol TMComposeHeaderViewDelegate;

@interface TMComposeHeaderView : UIView <UIGestureRecognizerDelegate, _TtP8TumblrUI32BlogPickerViewControllerDelegate_>
{
    _Bool _showCamera;
    _Bool _showHeadphones;
    _Bool _showOptions;
    _Bool _showFacebookToggle;
    _Bool _showTwitterToggle;
    _Bool _showLineSeparator;
    _Bool _canLinkSocialAccounts;
    _Bool _showingBlogPicker;
    id <TMComposeHeaderViewDelegate> _delegate;
    NSArray *_visibleItems;
    UIView *_lineSeparator;
    double _blogPickerHeight;
    TMComposeHeaderButton *_cameraButton;
    TMComposeHeaderButton *_headphonesButton;
    TMUser *_user;
    TMAvatarView *_avatarView;
    UILabel *_titleLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _TtC8TumblrUI24BlogPickerViewController *_blogPickerController;
    TMComposeHeaderButton *_optionsButton;
    TMComposeHeaderButton *_twitterButton;
    TMComposeHeaderButton *_facebookButton;
    TMPopoverController *_popoverController;
    UIImageView *_arrow;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) TMPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(retain, nonatomic) TMComposeHeaderButton *facebookButton; // @synthesize facebookButton=_facebookButton;
@property(retain, nonatomic) TMComposeHeaderButton *twitterButton; // @synthesize twitterButton=_twitterButton;
@property(retain, nonatomic) TMComposeHeaderButton *optionsButton; // @synthesize optionsButton=_optionsButton;
@property(retain, nonatomic) _TtC8TumblrUI24BlogPickerViewController *blogPickerController; // @synthesize blogPickerController=_blogPickerController;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TMAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) TMUser *user; // @synthesize user=_user;
@property(retain, nonatomic) TMComposeHeaderButton *headphonesButton; // @synthesize headphonesButton=_headphonesButton;
@property(retain, nonatomic) TMComposeHeaderButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(readonly, nonatomic) double blogPickerHeight; // @synthesize blogPickerHeight=_blogPickerHeight;
@property(readonly, nonatomic, getter=isShowingBlogPicker) _Bool showingBlogPicker; // @synthesize showingBlogPicker=_showingBlogPicker;
@property(nonatomic) _Bool canLinkSocialAccounts; // @synthesize canLinkSocialAccounts=_canLinkSocialAccounts;
@property(nonatomic) _Bool showLineSeparator; // @synthesize showLineSeparator=_showLineSeparator;
@property(nonatomic) _Bool showTwitterToggle; // @synthesize showTwitterToggle=_showTwitterToggle;
@property(nonatomic) _Bool showFacebookToggle; // @synthesize showFacebookToggle=_showFacebookToggle;
@property(nonatomic) _Bool showOptions; // @synthesize showOptions=_showOptions;
@property(nonatomic) _Bool showHeadphones; // @synthesize showHeadphones=_showHeadphones;
@property(nonatomic) _Bool showCamera; // @synthesize showCamera=_showCamera;
@property(readonly, nonatomic) UIView *lineSeparator; // @synthesize lineSeparator=_lineSeparator;
@property(readonly, nonatomic) NSArray *visibleItems; // @synthesize visibleItems=_visibleItems;
@property(nonatomic) __weak id <TMComposeHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)blogPickerViewController:(id)arg1 didSelect:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(readonly, nonatomic) _Bool facebookOn;
@property(readonly, nonatomic) _Bool twitterOn;
- (void)setBlog:(id)arg1;
- (void)headphonesTapped:(id)arg1;
- (void)cameraTapped:(id)arg1;
- (void)optionsTapped:(id)arg1;
- (void)toggleButton:(id)arg1;
- (void)tapped:(id)arg1;
- (void)showBlogPicker:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 user:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
