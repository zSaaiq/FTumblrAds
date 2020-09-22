//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKMetadataIndexer : NSObject
{
}

+ (id)pruneValue:(id)arg1 forKey:(id)arg2;
+ (id)normalizeValue:(id)arg1;
+ (id)normalizeField:(id)arg1;
+ (_Bool)checkMetadataText:(id)arg1 matchRuleV:(id)arg2;
+ (_Bool)checkMetadataHint:(id)arg1 matchRuleK:(id)arg2;
+ (_Bool)checkMetadataLabels:(id)arg1 matchRuleK:(id)arg2;
+ (void)checkAndAppendData:(id)arg1 forKey:(id)arg2;
+ (void)getMetadataWithText:(id)arg1 placeholder:(id)arg2 labels:(id)arg3 secureTextEntry:(_Bool)arg4 inputType:(long long)arg5;
+ (long long)getKeyboardType:(id)arg1;
+ (_Bool)checkSecureTextEntry:(id)arg1;
+ (id)getLabelsOfView:(id)arg1;
+ (id)getSiblingViewsOfView:(id)arg1;
+ (void)setupMetadataIndexing;
+ (void)constructRules:(id)arg1;
+ (void)initStore;
+ (void)setupWithRules:(id)arg1;
+ (void)enable;
+ (void)initialize;

@end
