//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FABIcon, NSDictionary;

@interface FABAppIconUtility : NSObject
{
    FABIcon *_applicationIcon;
}

+ (id)iconNameSetWithAlternateNamesAddedToIconNameSet:(id)arg1;
+ (void)addIconNameWithModifier:(id)arg1 forIconWithName:(id)arg2 toSetOfIconNames:(id)arg3;
+ (_Bool)isIconImageFileNameExtensionPresentInName:(id)arg1;
+ (struct CGSize)sizeForImage:(id)arg1;
@property(retain, nonatomic) FABIcon *applicationIcon; // @synthesize applicationIcon=_applicationIcon;
- (void).cxx_destruct;
- (id)fetchApplicationIcon;
- (id)iconByFallingBackOnDefaultIconNamingConvention;
- (id)iconFromCFBundleIconFile;
- (id)iconFromCFBundleIconFiles;
- (id)iconFromIOS7StyleCFBundleIconsInFieldWithKey:(id)arg1;
- (id)largestIconInIconNames:(id)arg1 prerendered:(_Bool)arg2;
- (id)iconRootPath;
@property(readonly, nonatomic) NSDictionary *appInfoDictionary;

@end

