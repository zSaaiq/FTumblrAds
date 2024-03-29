//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKModelManager : NSObject
{
}

+ (id)getSuggestedEventsMapping;
+ (id)getIntegrityMapping;
+ (id)convertToDictionary:(id)arg1;
+ (void)download:(id)arg1 filePath:(id)arg2 queue:(id)arg3 group:(id)arg4;
+ (void)clearCacheForModel:(id)arg1 suffix:(id)arg2;
+ (void)getModelAndRules:(id)arg1 onSuccess:(CDUnknownBlockType)arg2;
+ (void)checkFeaturesAndExecuteForMTML;
+ (void)processMTML;
+ (_Bool)isValidTimestamp:(id)arg1;
+ (id)processSuggestedEvents:(id)arg1 denseData:(float *)arg2;
+ (_Bool)processIntegrity:(id)arg1;
+ (id)getThresholdsForKey:(id)arg1;
+ (id)getWeightsForKey:(id)arg1;
+ (id)getRulesForKey:(id)arg1;
+ (void)enable;

@end

