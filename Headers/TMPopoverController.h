//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class NSString, UIColor, UIViewController;
@protocol UIPopoverPresentationControllerDelegate;

@interface TMPopoverController : NSObject <UIPopoverPresentationControllerDelegate>
{
    id <UIPopoverPresentationControllerDelegate> _delegate;
    UIColor *_backgroundColor;
    UIViewController *_presentedViewController;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) id <UIPopoverPresentationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
@property(readonly, nonatomic, getter=isPopoverVisible) _Bool popoverVisible;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (_Bool)prepareToPresentPopover;
- (void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)presentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
