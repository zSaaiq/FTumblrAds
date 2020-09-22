//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface YMAdDynamicViewSettingsCollection : NSObject
{
    NSArray *_settingsCollection;
    NSString *_searchKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(retain, nonatomic) NSArray *settingsCollection; // @synthesize settingsCollection=_settingsCollection;
- (void)setLayoutHeight:(id)arg1 forView:(id)arg2;
- (id)getLayoutHeightForView:(id)arg1;
- (double)getWidthForView:(id)arg1;
- (double)getRightMarginForView:(id)arg1;
- (double)getLeftMarginForView:(id)arg1;
- (double)getTopMarginForView:(id)arg1;
- (id)getAlternateViewSettingsForView:(id)arg1 withKey:(id)arg2;

@end
