//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NYMainPopupModel, UIView, UIViewController;

@protocol NYPopupProtocol <NSObject>
+ (_Bool)canPopupWithPrize:(NYMainPopupModel *)arg1;
- (UIView *)view;
- (void)dismissPopup;
- (void)popupInController:(UIViewController *)arg1;

@optional
- (id)initWithPrize:(NYMainPopupModel *)arg1;
@end

