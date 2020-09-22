//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BFAppLinkReturnToRefererViewDelegate-Protocol.h"

@class BFAppLinkReturnToRefererView, NSString, UINavigationController;
@protocol BFAppLinkReturnToRefererControllerDelegate;

@interface BFAppLinkReturnToRefererController : NSObject <BFAppLinkReturnToRefererViewDelegate>
{
    UINavigationController *_navigationController;
    BFAppLinkReturnToRefererView *_view;
    id <BFAppLinkReturnToRefererControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <BFAppLinkReturnToRefererControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)openRefererAppLink:(id)arg1;
- (void)closeViewAnimated:(_Bool)arg1 explicitlyClosed:(_Bool)arg2;
- (void)closeViewAnimated:(_Bool)arg1;
- (void)updateNavigationBarY:(double)arg1;
- (void)moveNavigationBar;
- (void)orientationDidChange:(id)arg1;
- (void)statusBarFrameDidChange:(id)arg1;
- (void)statusBarFrameWillChange:(id)arg1;
- (void)returnToRefererViewDidTapInsideLink:(id)arg1 link:(id)arg2;
- (void)returnToRefererViewDidTapInsideCloseButton:(id)arg1;
- (void)removeFromNavController;
- (void)showViewForRefererURL:(id)arg1;
- (void)showViewForRefererAppLink:(id)arg1;
@property(retain, nonatomic) BFAppLinkReturnToRefererView *view;
- (void)dealloc;
- (id)initForDisplayAboveNavController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
