//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKCodelessIndexer : NSObject
{
}

+ (id)dimensionOf:(id)arg1;
+ (id)screenshot;
+ (id)currentViewTree;
+ (void)uploadIndexing:(id)arg1;
+ (void)uploadIndexing;
+ (void)startIndexing;
+ (id)extInfo;
+ (id)currentSessionDeviceID;
+ (void)checkCodelessIndexingSession;
+ (void)setupGesture;
+ (_Bool)_codelessSetupTimestampIsValid:(id)arg1;
+ (id)requestToLoadCodelessSetup:(id)arg1;
+ (void)loadCodelessSettingWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)enable;

@end

