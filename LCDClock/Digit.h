//
//  Digit.h
//  LCDClock
//
//  Created by Erica Correa on 3/21/16.
//  Copyright © 2016 Turn to Tech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Digit : UIView

//properties for each individual segment view in the number 8
@property (strong, nonatomic) IBOutlet UIView *background;
@property (weak, nonatomic) IBOutlet UIView *segmentFive;
@property (weak, nonatomic) IBOutlet UIView *segmentOne;
@property (weak, nonatomic) IBOutlet UIView *segmentTwo;
@property (weak, nonatomic) IBOutlet UIView *segmentThree;
@property (weak, nonatomic) IBOutlet UIView *segmentFour;
@property (weak, nonatomic) IBOutlet UIView *segmentSix;
@property (weak, nonatomic) IBOutlet UIView *segmentSeven;
@property (nonatomic) NSArray *segmentArray;

//method to show the appropriate segments to form a number
- (void)createSegementArray;
- (void)showDigit:(long)number;

@end
