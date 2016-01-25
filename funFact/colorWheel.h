//
//  colorWheel.h
//  funFact
//
//  Created by ronald hunter on 1/25/16.
//  Copyright © 2016 ronald hunter. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface colorWheel : NSObject

@property (strong, nonatomic)NSArray *colors ;


- (UIColor *)randomColor;
@end
