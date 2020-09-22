//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface YMAdViewStateToViewDictionary : NSObject
{
    NSArray *_views;
    NSDictionary *_viewDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *viewDictionary; // @synthesize viewDictionary=_viewDictionary;
@property(retain, nonatomic) NSArray *views; // @synthesize views=_views;
- (void)eachViewOfType:(Class)arg1 doAction:(CDUnknownBlockType)arg2;
- (void)eachViewDoAction:(CDUnknownBlockType)arg1;
- (id)viewForViewState:(int)arg1;
- (void)awakeFromNib;

@end

