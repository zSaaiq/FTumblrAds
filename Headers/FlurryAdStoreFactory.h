//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryAdActor.h"

@class NSMutableDictionary;

@interface FlurryAdStoreFactory : FlurryAdActor
{
    NSMutableDictionary *_adBuilders;
    NSMutableDictionary *_adStores;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *adStores; // @synthesize adStores=_adStores;
@property(retain, nonatomic) NSMutableDictionary *adBuilders; // @synthesize adBuilders=_adBuilders;
- (void).cxx_destruct;
- (id)adStoreForKey:(id)arg1;
- (void)setBuilder:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

