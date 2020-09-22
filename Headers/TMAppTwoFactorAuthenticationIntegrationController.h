//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMTwoFactorAuthenticationIntegrationController-Protocol.h"

@class NSArray, NSString;

@interface TMAppTwoFactorAuthenticationIntegrationController : NSObject <TMTwoFactorAuthenticationIntegrationController>
{
    NSArray *_allInstalledTwoFactorAuthenticationApplications;
    NSString *_openAuthyButtonTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *openAuthyButtonTitle; // @synthesize openAuthyButtonTitle=_openAuthyButtonTitle;
@property(retain, nonatomic) NSArray *allInstalledTwoFactorAuthenticationApplications; // @synthesize allInstalledTwoFactorAuthenticationApplications=_allInstalledTwoFactorAuthenticationApplications;
@property(readonly, nonatomic) _Bool isTwoFactorAuthenticationApplicationInstalled;
@property(readonly, copy, nonatomic) NSString *localizedOpenButtonTitle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
