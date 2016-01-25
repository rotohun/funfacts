//
//  FactBook.h
//  funFact
//
//  Created by ronald hunter on 1/25/16.
//  Copyright © 2016 ronald hunter. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong , nonatomic) NSArray *facts;


- (NSString *)randomFact;

@end
