//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MOBILEAPPMobileAppInfoVO, NSMutableDictionary;

@interface OPApp : NSObject
{
    NSMutableDictionary *_params;
    MOBILEAPPMobileAppInfoVO *_appInfo;
}

@property(retain, nonatomic) MOBILEAPPMobileAppInfoVO *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (_Bool)openApp;

@end

