//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMBlogHeaderViewControllerDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC6Tumblr32BlogHeaderViewControllerDelegate : NSObject <TMBlogHeaderViewControllerDelegate>
{
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *linkRouter;
    MISSING_TYPE *screenIdentifier;
    MISSING_TYPE *blogHeaderCoordinator;
    MISSING_TYPE *blogCustomizationManager;
    MISSING_TYPE *blogViewController;
}

- (void).cxx_destruct;
- (id)init;
- (void)updateTheming:(id)arg1;
- (void)updateBlogPagesDimensions;
- (void)updateToReflectCurrentCustomizationState:(_Bool)arg1;
- (_Bool)allowsCustomization;
- (void)beginCustomization;
- (void)blogHeaderViewController:(id)arg1 tappedLinkWithURL:(id)arg2;
- (void)blogHeaderViewControllerDidCancelCustomization:(id)arg1;
- (void)blogHeaderViewControllerDidSaveCustomization:(id)arg1;
- (void)blogHeaderViewController:(id)arg1 wantsNavigationItemUpdateWithTitle:(id)arg2 leftBarButtonItem:(id)arg3 rightBarButtonItem:(id)arg4;

@end

