//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdPolicy.h"

@class NSNumber, NSString, UIColor, YMAdL10NTable;

@interface YMAdAppRenderingPolicy : YMAdPolicy
{
    YMAdL10NTable *_appInstallTextL10NTable;
    YMAdL10NTable *_availableInAppStoreTextL10NTable;
    UIColor *_appInstallTextColor;
    UIColor *_availableInAppStoreTextColor;
    UIColor *_appNameTextColor;
    UIColor *_appCategoryTextColor;
    NSNumber *_minAppRatingVisibility;
}

+ (id)policyFromManifest:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *minAppRatingVisibility; // @synthesize minAppRatingVisibility=_minAppRatingVisibility;
@property(retain, nonatomic) UIColor *appCategoryTextColor; // @synthesize appCategoryTextColor=_appCategoryTextColor;
@property(retain, nonatomic) UIColor *appNameTextColor; // @synthesize appNameTextColor=_appNameTextColor;
@property(retain, nonatomic) UIColor *availableInAppStoreTextColor; // @synthesize availableInAppStoreTextColor=_availableInAppStoreTextColor;
@property(retain, nonatomic) UIColor *appInstallTextColor; // @synthesize appInstallTextColor=_appInstallTextColor;
@property(retain, nonatomic) YMAdL10NTable *availableInAppStoreTextL10NTable; // @synthesize availableInAppStoreTextL10NTable=_availableInAppStoreTextL10NTable;
@property(retain, nonatomic) YMAdL10NTable *appInstallTextL10NTable; // @synthesize appInstallTextL10NTable=_appInstallTextL10NTable;
@property(readonly, nonatomic) NSString *availableInAppStoreText;
@property(readonly, nonatomic) NSString *appInstallText;

@end
