//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YVProcessPrivate-Protocol.h"

@class NSArray, NSEnumerator, NSHashTable;

@protocol YVSubsequent <YVProcessPrivate>
@property(retain, nonatomic) NSArray *untrackedDemands;
@property(retain, nonatomic) NSHashTable *demands;
@property(nonatomic) unsigned long long enqueuedSequence;
@property(nonatomic) long long orderingState;
@property(nonatomic) unsigned long long order;
- (NSEnumerator *)demandsEnumerator;
@end

