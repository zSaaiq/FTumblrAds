//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMFormViewController.h"

#import "TMCustomizeAvatarShapeSelectorDelegate-Protocol.h"

@class NSString, _TtC8TumblrUI8TMSwitch;
@protocol TMCustomizePhotoOptionsViewControllerAvatarDelegate, TMCustomizePhotoOptionsViewControllerDelegate;

@interface TMCustomizePhotoOptionsViewController : TMFormViewController <TMCustomizeAvatarShapeSelectorDelegate>
{
    _Bool _initiallyVisible;
    _TtC8TumblrUI8TMSwitch *_visibilitySwitch;
    long long _initialAvatarShape;
    unsigned long long _type;
    id <TMCustomizePhotoOptionsViewControllerDelegate> _delegate;
    id <TMCustomizePhotoOptionsViewControllerAvatarDelegate> _avatarDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TMCustomizePhotoOptionsViewControllerAvatarDelegate> avatarDelegate; // @synthesize avatarDelegate=_avatarDelegate;
@property(nonatomic) __weak id <TMCustomizePhotoOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) long long initialAvatarShape; // @synthesize initialAvatarShape=_initialAvatarShape;
@property(nonatomic, getter=isInitiallyVisible) _Bool initiallyVisible; // @synthesize initiallyVisible=_initiallyVisible;
@property(retain, nonatomic) _TtC8TumblrUI8TMSwitch *visibilitySwitch; // @synthesize visibilitySwitch=_visibilitySwitch;
- (void)avatarShapeToggledByUser:(id)arg1;
- (void)avatarShapeToggled:(id)arg1;
- (void)callTakePhotoOptionDelegate;
- (void)presentCameraUnauthorizedPermissionsAlert;
- (void)takePhotoCellSelected;
- (void)visibilityToggled:(id)arg1;
- (void)configureTableViewSections;
- (long long)preferredStatusBarStyle;
- (id)childViewControllerForStatusBarStyle;
- (id)initWithType:(unsigned long long)arg1 visibility:(_Bool)arg2 session:(id)arg3 analyticsBuffer:(id)arg4 delegate:(id)arg5;
- (id)initWithHeaderVisibility:(_Bool)arg1 session:(id)arg2 analyticsBuffer:(id)arg3 delegate:(id)arg4;
- (id)initWithAvatarVisibility:(_Bool)arg1 avatarShape:(long long)arg2 session:(id)arg3 analyticsBuffer:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

