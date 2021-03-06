//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MASConstraint, UIButton, UILabel;

@interface MVFilmDetailIntroCell : UITableViewCell
{
    _Bool _open;
    _Bool _showTitle;
    UILabel *_introContentLabel;
    UIButton *_showMoreButton;
    MASConstraint *_introContentLabelBottomConstraint;
}

@property(nonatomic) _Bool showTitle; // @synthesize showTitle=_showTitle;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
@property(retain, nonatomic) MASConstraint *introContentLabelBottomConstraint; // @synthesize introContentLabelBottomConstraint=_introContentLabelBottomConstraint;
@property(retain, nonatomic) UIButton *showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(retain, nonatomic) UILabel *introContentLabel; // @synthesize introContentLabel=_introContentLabel;
- (void).cxx_destruct;
- (void)showMore:(id)arg1;
- (void)loadSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

