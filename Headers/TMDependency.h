//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString, TMSettings;

@interface TMDependency : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) id conditionalValues; // @dynamic conditionalValues;
@property(nonatomic, retain) TMSettings *depend; // @dynamic depend;
@property(nonatomic, copy) NSString *key; // @dynamic key;
@property(nonatomic) int operatorType; // @dynamic operatorType;
@property(nonatomic, retain) TMSettings *settings; // @dynamic settings;

@end

