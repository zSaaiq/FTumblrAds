//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FlurryAdUtil : NSObject
{
}

+ (_Bool)isValidHTTPUrl:(id)arg1;
+ (id)getGeoCheckServerURL;
+ (id)adConfigKey;
+ (id)adServerPath;
+ (id)adLogServerUrl;
+ (void)setAdLogServerUrl:(id)arg1;
+ (id)adServerUrl;
+ (void)setAdServerUrl:(id)arg1;
+ (id)parseAppIdFromItunesUrl:(id)arg1;
+ (void)substituteParamsInString:(id)arg1 withValuesDictionary:(id)arg2 forPattern:(id)arg3;
+ (_Bool)mainThread_isViewVisible:(id)arg1 withinScrollView:(id)arg2 asFraction:(double)arg3;
+ (_Bool)isViewVisible:(id)arg1 withinScrollView:(id)arg2 asFraction:(double)arg3;
+ (float)rectIntersectionInPercent:(struct CGRect)arg1 rect2:(struct CGRect)arg2;
+ (float)mainThread_rectIntersectionInPercentWithKeyWindowForView:(id)arg1;
+ (float)rectIntersectionInPercentWithKeyWindowForView:(id)arg1;
+ (_Bool)viewIsVisibleTopOrBottom:(id)arg1 asFraction:(double)arg2;
+ (_Bool)mainThread_viewIsVisibleTopOrBottom:(id)arg1 asFraction:(double)arg2 trackingViewisActive:(_Bool)arg3;
+ (_Bool)viewIsVisibleTopOrBottom:(id)arg1 asFraction:(double)arg2 trackingViewisActive:(_Bool)arg3;
+ (_Bool)viewIsVisible:(id)arg1;
+ (_Bool)viewIsVisible:(id)arg1 asFraction:(double)arg2;
+ (id)scrollViewParentForView:(id)arg1;
+ (id)cachePathDirectory;
+ (int)adViewTypeStringToEnum:(id)arg1;
+ (id)adViewTypeEnumToString:(int)arg1;
+ (id)adViewTypeArrayInstance;
+ (id)getOrientationStrFromInterfaceOrientation:(long long)arg1;
+ (int)getScreenOrientation;
+ (int)screenOrientationStringToEnum:(id)arg1;
+ (id)screenOrientationEnumToString:(int)arg1;
+ (id)screenOrientationArrayInstance;
+ (int)interactionTypeStringToEnum:(id)arg1;
+ (id)interactionTypeEnumToString:(int)arg1;
+ (id)interactionTypeArrayInstance;
+ (id)getUserAgent;
+ (void)initUserAgent:(id)arg1;
+ (id)getDefaultImage:(id)arg1;
+ (id)getCorrectImageAsset:(id)arg1;
+ (int)getFrameSizeInPixels:(float)arg1;
+ (_Bool)isRetinaDisplay;
+ (_Bool)isAdTrackingEnabled;
+ (id)getFlurryId;
+ (_Bool)isModalViewPresent;
+ (_Bool)canDoSKAppStore;

@end

