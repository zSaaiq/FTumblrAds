//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class UIView, UIViewController;

@interface FBAdViewControllerProxy : NSProxy
{
    UIViewController *__fb_ad_viewController;
    UIView *__fb_ad_view;
}

+ (_Bool)isViewControllerProxy:(id)arg1;
+ (id)proxyWithViewController:(id)arg1 withView:(id)arg2;
+ (id)proxyWithViewController:(id)arg1;
+ (id)viewController;
+ (void)initialize;
- (void).cxx_destruct;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)checkAndUpdateCurrentViewControllerWithCondition:(CDUnknownBlockType)arg1;
- (id)currentViewController;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithViewController:(id)arg1 withView:(id)arg2;

@end
