//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10LinkRouter10LinkRouter : NSObject
{
    MISSING_TYPE *registeredRoutes;
    MISSING_TYPE *fallbackHandler;
    MISSING_TYPE *linkHandler;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleLink:(id)arg1 presentingViewController:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)routeWithURL:(id)arg1 viewController:(id)arg2 animated:(_Bool)arg3 extras:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)isRoutableWithURL:(id)arg1;

@end

