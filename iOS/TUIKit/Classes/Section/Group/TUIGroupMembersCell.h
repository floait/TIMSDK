//
//  TUIGroupMembersCell.h
//  UIKit
//
//  Created by kennethmiao on 2018/9/25.
//  Copyright © 2018年 Tencent. All rights reserved.
//


#import <UIKit/UIKit.h>

@class TUIGroupMembersCell;

@protocol TGroupMembersCellDelegate <NSObject>
- (void)groupMembersCell:(TUIGroupMembersCell *)cell didSelectItemAtIndex:(NSInteger)index;
@end

@interface TGroupMembersCellData : NSObject
@property (nonatomic, strong) NSMutableArray *members;
@property (nonatomic, assign) SEL selector;
@end

@interface TUIGroupMembersCell : UITableViewCell
@property (nonatomic, strong) UICollectionView *memberCollectionView;
@property (nonatomic, strong) UICollectionViewFlowLayout *memberFlowLayout;
@property (nonatomic, weak) id<TGroupMembersCellDelegate> delegate;
+ (CGFloat)getHeight:(TGroupMembersCellData *)data;
- (void)setData:(TGroupMembersCellData *)data;
@end
