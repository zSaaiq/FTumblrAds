//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, TMBlogHeaderViewController, UIBarButtonItem;

@protocol TMBlogHeaderViewControllerDelegate <NSObject>
- (void)updateBlogPagesDimensions;
- (void)updateToReflectCurrentCustomizationState:(_Bool)arg1;
- (void)beginCustomization;
- (_Bool)allowsCustomization;
- (void)blogHeaderViewController:(TMBlogHeaderViewController *)arg1 tappedLinkWithURL:(NSURL *)arg2;
- (void)blogHeaderViewControllerDidCancelCustomization:(TMBlogHeaderViewController *)arg1;
- (void)blogHeaderViewControllerDidSaveCustomization:(TMBlogHeaderViewController *)arg1;
- (void)blogHeaderViewController:(TMBlogHeaderViewController *)arg1 wantsNavigationItemUpdateWithTitle:(NSString *)arg2 leftBarButtonItem:(UIBarButtonItem *)arg3 rightBarButtonItem:(UIBarButtonItem *)arg4;
@end

