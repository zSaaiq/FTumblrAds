//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RTObject.h"

@class NSMutableDictionary, RTKeyValueStoreCreator;

@interface RTKeyValueStoreProvider : RTObject
{
    NSMutableDictionary *mStores;
    RTKeyValueStoreCreator *mStoreCreator;
}

+ (id)validSyncCallers;
- (void).cxx_destruct;
@property(retain, nonatomic) RTKeyValueStoreCreator *storeCreator; // @synthesize storeCreator=mStoreCreator;
@property(retain, nonatomic) NSMutableDictionary *stores; // @synthesize stores=mStores;
- (void)reset;
- (void)storeForNamespace:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)storeForNamespace:(id)arg1;
- (void)updateDefaultsPackagePath:(id)arg1;
- (id)initWithKeyValueStoreCreator:(id)arg1;
- (id)initWithID:(id)arg1;
- (id)initWithDefaultsPackagePath:(id)arg1 customValuesPath:(id)arg2;

@end

