//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIActivityIndicatorView, UILabel, UIView;

@interface LSLoadMoreView : UIControl
{
    UIActivityIndicatorView *_indicatorView;
    UILabel *_textLabel;
    UIView *_lineView;
    CDUnknownBlockType _clickCallback;
}

@property(copy, nonatomic) CDUnknownBlockType clickCallback; // @synthesize clickCallback=_clickCallback;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void).cxx_destruct;
- (void)layoutContentViews;
- (void)refreshType:(int)arg1 text:(id)arg2 clickCallback:(CDUnknownBlockType)arg3;
- (void)refreshType:(int)arg1 text:(id)arg2;
- (void)layoutSubviews;
- (void)clickAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)scrollViewDidScroll:(id)arg1;

@end

