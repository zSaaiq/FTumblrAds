//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "YMKeyValueStore-Protocol.h"

@class NSDictionary, NSSet, NSString;
@protocol OS_dispatch_queue, YMConfigProcessor;

@interface YMDefaultConfigManager : NSObject <YMKeyValueStore>
{
    _Bool _enabled;
    NSDictionary *_defaultSDKConfigsByName;
    NSDictionary *_defaultAppConfig;
    id <YMConfigProcessor> _configProcessor;
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_sdksSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *sdksSet; // @synthesize sdksSet=_sdksSet;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <YMConfigProcessor> configProcessor; // @synthesize configProcessor=_configProcessor;
@property(retain, nonatomic) NSDictionary *defaultAppConfig; // @synthesize defaultAppConfig=_defaultAppConfig;
@property(retain, nonatomic) NSDictionary *defaultSDKConfigsByName; // @synthesize defaultSDKConfigsByName=_defaultSDKConfigsByName;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)reset;
@property(readonly, nonatomic) _Bool isReady;
- (id)valueForKey:(id)arg1 domain:(id)arg2;
- (_Bool)updateSDKsConfig:(id)arg1 withCurrentConfigContext:(id)arg2;
- (_Bool)loadDefaultFeatureConfigWithContext:(id)arg1;
- (_Bool)canLoadDefaultConfigurations;
- (id)initWithConfigProcessor:(id)arg1 SDKList:(id)arg2;
- (id)initWithConfigProcessor:(id)arg1;
- (id)p_valueForKey:(id)arg1 domain:(id)arg2;
- (_Bool)p_loadSDKConfigFromDisk:(id)arg1 withCurrentConfigContext:(id)arg2;
- (_Bool)p_loadLocalAppConfigFromDiskWithCurrentConfigContext:(id)arg1;
- (id)p_contentsOfFileAtPath:(id)arg1;
- (_Bool)p_fileExists:(id)arg1;
- (id)p_getConfigFilePath:(id)arg1;
- (id)p_sdkConfigFromDiskForSDK:(id)arg1 withCurrentConfigContext:(id)arg2;
- (_Bool)p_isConfigWithDomain:(id)arg1;
- (id)p_resolveFeatureConfigMetaTags:(id)arg1 domain:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

