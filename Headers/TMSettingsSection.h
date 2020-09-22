//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSSet, NSString, TMUser;

@interface TMSettingsSection : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
@property(nonatomic, readonly) NSArray *sortedSections;
@property(nonatomic, readonly) NSArray *sortedSettings;

// Remaining properties
@property(nonatomic, copy) NSSet *dependencies; // @dynamic dependencies;
@property(nonatomic, copy) NSString *detail; // @dynamic detail;
@property(nonatomic, copy) NSString *help; // @dynamic help;
@property(nonatomic, copy) NSString *key; // @dynamic key;
@property(nonatomic) int level; // @dynamic level;
@property(nonatomic, copy) NSSet *sections; // @dynamic sections;
@property(nonatomic, copy) NSSet *settings; // @dynamic settings;
@property(nonatomic, copy) NSString *sortId; // @dynamic sortId;
@property(nonatomic) int style; // @dynamic style;
@property(nonatomic, copy) NSString *title; // @dynamic title;
@property(nonatomic, retain) TMUser *user; // @dynamic user;

@end
