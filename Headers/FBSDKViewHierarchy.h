//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKViewHierarchy : NSObject
{
}

+ (id)recursiveGetLabelsFromView:(id)arg1;
+ (id)getDimensionOf:(id)arg1;
+ (long long)getTag:(id)arg1;
+ (id)getParentCollectionView:(id)arg1;
+ (id)getParentTableView:(id)arg1;
+ (id)getParentViewController:(id)arg1;
+ (_Bool)isView:(id)arg1 superViewOfView:(id)arg2;
+ (id)getViewReactTag:(id)arg1;
+ (_Bool)isRCTButton:(id)arg1;
+ (id)recursiveCaptureTreeWithCurrentNode:(id)arg1 targetNode:(id)arg2 objAddressSet:(id)arg3 hash:(_Bool)arg4;
+ (_Bool)isUserInputView:(id)arg1;
+ (unsigned long long)getClassBitmask:(id)arg1;
+ (id)getHint:(id)arg1;
+ (id)getTextStyle:(id)arg1;
+ (id)getText:(id)arg1;
+ (id)getIndexPath:(id)arg1;
+ (id)getDetailAttributesOf:(id)arg1 withHash:(_Bool)arg2;
+ (id)getDetailAttributesOf:(id)arg1;
+ (id)getAttributesOf:(id)arg1 parent:(id)arg2;
+ (id)getPath:(id)arg1 limit:(int)arg2;
+ (id)getPath:(id)arg1;
+ (id)getParent:(id)arg1;
+ (id)getChildren:(id)arg1;

@end

