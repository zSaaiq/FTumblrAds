//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface YMAdViewComponents : NSObject
{
    NSArray *_viewComponents;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *viewComponents; // @synthesize viewComponents=_viewComponents;
- (void)eachLayoutComponentDoAction:(CDUnknownBlockType)arg1;
- (void)eachStatefulComponentDoAction:(CDUnknownBlockType)arg1;
- (void)eachThemableComponentDoAction:(CDUnknownBlockType)arg1;
- (void)eachFontScalableComponentDoAction:(CDUnknownBlockType)arg1;
- (void)eachComponentOfType:(id)arg1 doAction:(CDUnknownBlockType)arg2;
- (void)setAdOnAdViewComponents:(id)arg1;

@end
