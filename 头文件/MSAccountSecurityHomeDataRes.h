//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSMobileSecurityResult.h"

@class NSString;

@interface MSAccountSecurityHomeDataRes : MSMobileSecurityResult
{
    NSString *_securityLevel;
    NSString *_freePwdSwitchStatus;
}

@property(retain, nonatomic) NSString *freePwdSwitchStatus; // @synthesize freePwdSwitchStatus=_freePwdSwitchStatus;
@property(retain, nonatomic) NSString *securityLevel; // @synthesize securityLevel=_securityLevel;
- (void).cxx_destruct;

@end

