//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface RuleGroup : NSObject
{
    NSString *_ruleDescription;
    NSMutableDictionary *_positionMap;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *positionMap; // @synthesize positionMap=_positionMap;
@property(retain) NSString *ruleDescription; // @synthesize ruleDescription=_ruleDescription;
- (id)preEvaluate:(id)arg1;
- (id)evaluate:(id)arg1 clipDuration:(id)arg2 timeUpdate:(id)arg3;
- (id)getActionRuleList:(id)arg1;
- (void)addActionRule:(id)arg1 position:(id)arg2;
- (id)init;

@end
