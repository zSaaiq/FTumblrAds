//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKFeatureManager : NSObject
{
}

+ (_Bool)defaultStatus:(unsigned long long)arg1;
+ (id)featureName:(unsigned long long)arg1;
+ (_Bool)checkGK:(unsigned long long)arg1;
+ (unsigned long long)getParentFeature:(unsigned long long)arg1;
+ (void)disableFeature:(id)arg1;
+ (_Bool)isEnabled:(unsigned long long)arg1;
+ (void)checkFeature:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

