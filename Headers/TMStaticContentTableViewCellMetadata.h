//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMStaticContentTableViewCellMetadata : NSObject
{
    NSString *_reuseIdentifier;
    double _cellHeight;
    long long _cellStyle;
    Class _tableViewCellSubclass;
    CDUnknownBlockType _configureBlock;
    CDUnknownBlockType _addBlock;
    CDUnknownBlockType _didSelectBlock;
    CDUnknownBlockType _willSelectBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType willSelectBlock; // @synthesize willSelectBlock=_willSelectBlock;
@property(copy, nonatomic) CDUnknownBlockType didSelectBlock; // @synthesize didSelectBlock=_didSelectBlock;
@property(copy, nonatomic) CDUnknownBlockType addBlock; // @synthesize addBlock=_addBlock;
@property(copy, nonatomic) CDUnknownBlockType configureBlock; // @synthesize configureBlock=_configureBlock;
@property(retain, nonatomic) Class tableViewCellSubclass; // @synthesize tableViewCellSubclass=_tableViewCellSubclass;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (id)init;

@end
