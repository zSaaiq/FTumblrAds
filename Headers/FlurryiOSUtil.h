//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FlurryiOSUtil : NSObject
{
}

+ (_Bool)mainThread_isNotificationsSettingsEnabled;
+ (_Bool)isNotificationsSettingsEnabled;
+ (_Bool)isInBackground;
+ (_Bool)isIPad;
+ (id)getIdentifierForVendor;
+ (id)deviceModel;
+ (id)deviceBuild;
+ (id)appVersion;
+ (id)appShortVersion;
+ (long long)userDeviceIdiom;
+ (unsigned short)agentPlatform;
+ (long long)getStatusBarOrientation;
+ (_Bool)canvasInLandscapeLeft;
+ (_Bool)canvasInLandscapeRight;
+ (_Bool)canvasInLandscape;

@end

