//
//  SEMenuItem.h
//  SESpringBoardDemo
//
//  Created by Sarp Erdag on 11/5/11.
//  Copyright (c) 2011 Apperto. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MenuItemDelegate;
@interface SEMenuItem : UIView {
    NSString *image;
    NSString *titleText;
    UIViewController *vcToLoad;
    id <MenuItemDelegate> delegate;
}

@property (nonatomic, assign) int tag;
@property (nonatomic, assign) id <MenuItemDelegate> delegate;

+ (id) initWithTitle:(NSString *)title imageName:(NSString *)imageName viewController:(UIViewController *)viewController;

@end

@protocol MenuItemDelegate <NSObject>
@optional

- (void)launch:(int)index :(UIViewController *)vcToLoad;

@end