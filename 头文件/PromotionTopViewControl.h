//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString;

@interface PromotionTopViewControl : UIControl
{
    CDUnknownBlockType _touchesBegan;
    CDUnknownBlockType _touchesMoved;
    CDUnknownBlockType _touchesCancel;
    NSString *_viewControllerName;
    double _heightOfControl;
}

@property(nonatomic) double heightOfControl; // @synthesize heightOfControl=_heightOfControl;
@property(copy, nonatomic) NSString *viewControllerName; // @synthesize viewControllerName=_viewControllerName;
@property(copy, nonatomic) CDUnknownBlockType touchesCancel; // @synthesize touchesCancel=_touchesCancel;
@property(copy, nonatomic) CDUnknownBlockType touchesMoved; // @synthesize touchesMoved=_touchesMoved;
@property(copy, nonatomic) CDUnknownBlockType touchesBegan; // @synthesize touchesBegan=_touchesBegan;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)setOrigin:(struct CGPoint)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end

