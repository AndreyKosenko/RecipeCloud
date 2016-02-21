//
//  Recipe.h
//  SimpleTableOOP
//
//  Created by dev on 12/12/15.
//  Copyright © 2015 dev. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Recipe : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *prepTime;
@property (nonatomic, strong) NSString *imageFile;
@property (nonatomic, strong) NSArray *ingredients;
@end
