//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface OPrivacyManager : NSObject
{
    NSSet *_clientSet;
    NSObject<OS_dispatch_queue> *_clientIdentifierQueue;
    NSURL *_privacyDashboardUrl;
    NSString *_namespace;
}

+ (void)registerClient:(id)arg1;
+ (void)prepareDashboardWithOptions:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *namespace; // @synthesize namespace=_namespace;
@property(retain, nonatomic) NSURL *privacyDashboardUrl; // @synthesize privacyDashboardUrl=_privacyDashboardUrl;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientIdentifierQueue; // @synthesize clientIdentifierQueue=_clientIdentifierQueue;
@property(retain) NSSet *clientSet; // @synthesize clientSet=_clientSet;
- (void)uploadClientIdentifiersWithOptions:(id)arg1;
- (id)appIdentifiers;
- (id)deviceIdentifiers;
- (void)initInternalStateForConfig:(id)arg1;

@end

