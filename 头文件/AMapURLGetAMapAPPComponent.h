//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMapComponent.h"

@class NSString;

@interface AMapURLGetAMapAPPComponent : NSObject <AMapComponent>
{
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *userAgent;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSString *product;
@property(readonly, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

